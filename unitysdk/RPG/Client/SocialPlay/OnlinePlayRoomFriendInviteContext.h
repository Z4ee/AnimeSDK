#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OnlinePlayRoomFriendInviteContextBase.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class OnlinePlayRoomModule; }
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xE0EDD10)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GETINVITESUCCESSTEXTID_OFFSET UNITYSDK_OFFSET(0xE0EDD80)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xE0EDF80)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ISFRIENDALREADYIN_OFFSET UNITYSDK_OFFSET(0xE0EDE30)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ONINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0xE0EE010)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EDD00)

namespace RPG::Client::SocialPlay
{
	inline static constexpr unsigned int OnlinePlayRoomFriendInviteContext_TypeDefinitionIndex = 74500;

	class OnlinePlayRoomFriendInviteContext : public ::RPG::Client::OnlinePlayRoomFriendInviteContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SocialPlay::OnlinePlayRoomFriendInviteContext* Create()
		{
			return ((::RPG::Client::SocialPlay::OnlinePlayRoomFriendInviteContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_CREATE_OFFSET))();
		}

		::RPG::Client::TextID GetInviteSuccessTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GETINVITESUCCESSTEXTID_OFFSET))(this);
		}

		::System::Boolean IsFriendAlreadyIn(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ISFRIENDALREADYIN_OFFSET))(this, a1);
		}

		::System::Boolean OnInviteFriend(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ONINVITEFRIEND_OFFSET))(this, a1);
		}

		::RPG::Client::OnlinePlayRoomModule* get__Module()
		{
			return ((::RPG::Client::OnlinePlayRoomModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GET__MODULE_OFFSET))(this);
		}
	};
}
