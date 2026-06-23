#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class AccountFeatureRestrictedInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A1440)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_GET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x9A10F0)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9A1320)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9A1250)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x9A11A0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AccountFeatureRestrictedInfoInternal_TypeDefinitionIndex = 36135;

	struct alignas(8) AccountFeatureRestrictedInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_VerificationURI; // 0x18

		::System::String* get_VerificationURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_GET_VERIFICATIONURI_OFFSET))(this);
		}

		::System::Void set_VerificationURI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_VERIFICATIONURI_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
