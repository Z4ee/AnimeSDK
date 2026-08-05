#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_EPICACCOUNTID_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1C9C6630)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C9C67E0)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C9C6B10)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9C6900)
#define EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9C6620)
#define EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C6610)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int EpicAccountId_TypeDefinitionIndex = 35523;

	class EpicAccountId : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 EpicaccountidMaxLength = 0x20; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_1_OFFSET))(this, innerHandle);
		}

		static ::Epic::OnlineServices::EpicAccountId* FromString(::System::String* accountIdString)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_FROMSTRING_OFFSET))(accountIdString);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_ISVALID_OFFSET))(this);
		}

		::Epic::OnlineServices::Result ToString(::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_OFFSET))(this, outBuffer);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_1_OFFSET))(this);
		}
	};
}
