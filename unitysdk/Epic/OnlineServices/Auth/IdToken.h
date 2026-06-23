#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/IdTokenInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1C818F90)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x1C818FB0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_1_OFFSET UNITYSDK_OFFSET(0x1C819200)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1C818FA0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x1C818FC0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_OFFSET UNITYSDK_OFFSET(0x1C818FD0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8194D0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IdToken_TypeDefinitionIndex = 36151;

	class IdToken : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _AccountId_k__BackingField; // 0x10
		::System::String* _JsonWebToken_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_JSONWEBTOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::IdTokenInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::IdTokenInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKEN_SET_1_OFFSET))(this, other);
		}
	};
}
