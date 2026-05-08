#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class IdToken; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x871210)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x870F00)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x871030)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8711A0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x870F70)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x8710E0)
#define EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x871190)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IdTokenInternal_TypeDefinitionIndex = 34589;

	struct alignas(8) IdTokenInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AccountId; // 0x18
		::System::IntPtr m_JsonWebToken; // 0x20

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::String* get_JsonWebToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_GET_JSONWEBTOKEN_OFFSET))(this);
		}

		::System::Void set_JsonWebToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_JSONWEBTOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::IdToken* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IDTOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
