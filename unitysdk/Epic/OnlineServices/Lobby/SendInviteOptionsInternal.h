#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class SendInviteOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x57090)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x57010)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x56DD0)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x56E80)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x57000)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x56F40)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int SendInviteOptionsInternal_TypeDefinitionIndex = 42800;

	struct alignas(8) SendInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LobbyId; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_TargetUserId; // 0x28

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_LOBBYID_OFFSET))(this, a1);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::SendInviteOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::SendInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
