#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class LogoutOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B1D80)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B1C50)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8B1AC0)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B1B80)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LogoutOptionsInternal_TypeDefinitionIndex = 36168;

	struct alignas(8) LogoutOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::LogoutOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LogoutOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
