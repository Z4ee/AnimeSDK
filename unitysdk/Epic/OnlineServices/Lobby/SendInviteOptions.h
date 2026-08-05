#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFEE5A0)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFEE5C0)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DFEE5E0)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFEE5B0)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFEE5D0)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DFEE5F0)
#define EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE600)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int SendInviteOptions_TypeDefinitionIndex = 36437;

	class SendInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _LobbyId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_SENDINVITEOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
