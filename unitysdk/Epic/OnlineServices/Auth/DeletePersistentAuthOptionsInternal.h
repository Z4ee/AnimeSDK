#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class DeletePersistentAuthOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x969A70)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x969950)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x969880)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x9697D0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int DeletePersistentAuthOptionsInternal_TypeDefinitionIndex = 36150;

	struct alignas(8) DeletePersistentAuthOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_RefreshToken; // 0x18

		::System::Void set_RefreshToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_REFRESHTOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::DeletePersistentAuthOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
