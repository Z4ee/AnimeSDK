#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_EPICACCOUNTID_FROMSTRING_OFFSET UNITYSDK_OFFSET(0xA2C56F0)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_ISVALID_OFFSET UNITYSDK_OFFSET(0xA2C58A0)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA2C5BD0)
#define EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2C59C0)
#define EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA2C56E0)
#define EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C56D0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int EpicAccountId_TypeDefinitionIndex = 41885;

	class EpicAccountId : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 EpicaccountidMaxLength = 0x20; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID__CTOR_1_OFFSET))(this, a1);
		}

		static ::Epic::OnlineServices::EpicAccountId* FromString(::System::String* a1)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_FROMSTRING_OFFSET))(a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_ISVALID_OFFSET))(this);
		}

		::Epic::OnlineServices::Result ToString(::System::String*& a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EPICACCOUNTID_TOSTRING_1_OFFSET))(this);
		}
	};
}
