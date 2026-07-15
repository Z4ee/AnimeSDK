#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class IdToken; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AAA9C0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x3AAA6A0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x3AAA7D0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAA940)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x3AAA710)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x3AAA880)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAA930)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IdTokenInternal_TypeDefinitionIndex = 44034;

	struct alignas(8) IdTokenInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AccountId; // 0x18
		::System::IntPtr m_JsonWebToken; // 0x20

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::IdToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
