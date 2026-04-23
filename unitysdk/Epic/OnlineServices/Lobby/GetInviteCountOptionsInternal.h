#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class GetInviteCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x493A0)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x49270)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x490E0)
#define EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x491A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int GetInviteCountOptionsInternal_TypeDefinitionIndex = 41848;

	struct alignas(8) GetInviteCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::GetInviteCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetInviteCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETINVITECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
