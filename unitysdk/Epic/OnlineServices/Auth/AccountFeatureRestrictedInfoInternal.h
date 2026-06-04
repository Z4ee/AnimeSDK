#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class AccountFeatureRestrictedInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFC70)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_GET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0xFA30)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xFC60)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xFB90)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0xFAE0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AccountFeatureRestrictedInfoInternal_TypeDefinitionIndex = 43156;

	struct alignas(8) AccountFeatureRestrictedInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_VerificationURI; // 0x18

		::System::String* get_VerificationURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_GET_VERIFICATIONURI_OFFSET))(this);
		}

		::System::Void set_VerificationURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_VERIFICATIONURI_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
