#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class DeletePersistentAuthOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11790)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x11780)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x116B0)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x11600)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int DeletePersistentAuthOptionsInternal_TypeDefinitionIndex = 43171;

	struct alignas(8) DeletePersistentAuthOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_RefreshToken; // 0x18

		::System::Void set_RefreshToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_REFRESHTOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::DeletePersistentAuthOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::DeletePersistentAuthOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
