#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/IdTokenInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xB141AE0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0xB141B00)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_1_OFFSET UNITYSDK_OFFSET(0xB141E70)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xB141AF0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0xB141B10)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_OFFSET UNITYSDK_OFFSET(0xB141B20)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0xB141F90)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IdToken_TypeDefinitionIndex = 46215;

	class IdToken : public ::System::Object
	{
	public:
		::System::String* _JsonWebToken_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _AccountId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_JSONWEBTOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::IdTokenInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::IdTokenInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_1_OFFSET))(this, a1);
		}
	};
}
