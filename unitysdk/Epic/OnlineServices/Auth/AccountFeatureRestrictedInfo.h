#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AccountFeatureRestrictedInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_GET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x1DF677F0)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF67A00)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF67810)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_SET_VERIFICATIONURI_OFFSET UNITYSDK_OFFSET(0x1DF67800)
#define EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF67C10)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AccountFeatureRestrictedInfo_TypeDefinitionIndex = 46198;

	class AccountFeatureRestrictedInfo : public ::System::Object
	{
	public:
		::System::String* _VerificationURI_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_VerificationURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_GET_VERIFICATIONURI_OFFSET))(this);
		}

		::System::Void set_VerificationURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_SET_VERIFICATIONURI_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ACCOUNTFEATURERESTRICTEDINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
