#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_EPICACCOUNTID_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1B60B950)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B60BB00)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B60BE50)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B60BC20)
#define EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B60B940)
#define EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B60B930)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int EpicAccountId_TypeDefinitionIndex = 34864;

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
