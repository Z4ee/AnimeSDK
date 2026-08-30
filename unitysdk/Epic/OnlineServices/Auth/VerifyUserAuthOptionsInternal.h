#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class Token; }
namespace Epic::OnlineServices::Auth { class VerifyUserAuthOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x349F0)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x349E0)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_SET_AUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x348F0)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x34960)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int VerifyUserAuthOptionsInternal_TypeDefinitionIndex = 46264;

	struct alignas(8) VerifyUserAuthOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AuthToken; // 0x18

		::System::Void set_AuthToken(::Epic::OnlineServices::Auth::Token* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Token*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_SET_AUTHTOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::VerifyUserAuthOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyUserAuthOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
