#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_TypeDefinitionIndex = 44416;

	class MHYSDKC_Console : public ::System::Object
	{
	public:
		// static const ::System::String* GET_ACCOUNT_ID; // 0x0
		// static const ::System::String* GET_ACCOUNT_COUNTRY; // 0x0
		// static const ::System::String* GET_ONLINE_ID; // 0x0
		// static const ::System::String* GET_USER_PROFILE; // 0x0
		// static const ::System::String* GET_SANDBOX_ID; // 0x0
		// static const ::System::String* GET_FRIEND_LIST; // 0x0
		// static const ::System::String* GET_BLOCK_LIST; // 0x0
		// static const ::System::String* SHOW_PROFILE_CARD; // 0x0
		// static const ::System::String* REGISTER_FRIEND_UPDATE; // 0x0
		// static const ::System::String* UNREGISTER_FRIEND_UPDATE; // 0x0
		// static const ::System::String* SESSION_INIT; // 0x0
		// static const ::System::String* SESSION_DESTORY; // 0x0
		// static const ::System::String* SHOW_SESSION_INVITE; // 0x0
		// static const ::System::String* SEND_SESSION_INVITE; // 0x0
		// static const ::System::String* CREATE_SESSION; // 0x0
		// static const ::System::String* SET_SESSION; // 0x0
		// static const ::System::String* JOIN_SESSION; // 0x0
		// static const ::System::String* LEAVE_SESSION; // 0x0
		// static const ::System::String* HAS_JOIN_SESSION; // 0x0
		// static const ::System::String* GET_CURRENT_SESSION_ID; // 0x0
		// static const ::System::String* GET_SESSION_LEADER_ACCOUNT_ID; // 0x0
		// static const ::System::String* GET_ACTIVITIES; // 0x0
		// static const ::System::String* UPDATE_RECENT_PLAYERS; // 0x0
		// static const ::System::String* REGISTER_RECEIVE_INVITE; // 0x0
		// static const ::System::String* GET_PLAYER_SESSION_INFO; // 0x0
		// static const ::System::String* UPDATE_STATISTICS; // 0x0
		// static const ::System::String* GET_STATISTICS; // 0x0
		// static const ::System::String* GET_LEADERBOARDS; // 0x0
		// static const ::System::String* CHECK_PRIVILEGE; // 0x0
		// static const ::System::String* CHECK_PERMISSION; // 0x0
		// static const ::System::String* RESOLVE_PRIVILEGE; // 0x0
		// static const ::System::String* ACHIEVEMENT_INIT; // 0x0
		// static const ::System::String* ACHIEVEMENT_DESTORY; // 0x0
		// static const ::System::String* UPDATE_ACHIEVEMENT; // 0x0
		// static const ::System::String* GET_ACHIEVEMENTS; // 0x0
		// static const ::System::String* CREATE_MATCH; // 0x0
		// static const ::System::String* GET_MATCH_DETAIL; // 0x0
		// static const ::System::String* UPDATE_MATCH_DETAIL; // 0x0
		// static const ::System::String* UPDATE_MATCH_STATUS; // 0x0
		// static const ::System::String* JOIN_MATCH; // 0x0
		// static const ::System::String* LEAVE_MATCH; // 0x0
		// static const ::System::String* REPORT_MATCH_RESULTS; // 0x0
		// static const ::System::String* SHOW_MESSAGE_DIALOG; // 0x0
		// static const ::System::String* SHOW_ERROR_DIALOG; // 0x0
		// static const ::System::String* KEY_ACCOUNT_ID; // 0x0
		// static const ::System::String* KEY_ONLINE_ID; // 0x0
		// static const ::System::String* KEY_USER_STATE; // 0x0
		// static const ::System::String* KEY_IS_ALLOWED; // 0x0
		// static const ::System::String* KEY_PERMISSION; // 0x0
		// static const ::System::String* KEY_ANONYMOUS; // 0x0
		// static const ::System::String* KEY_REASON; // 0x0
		// static const ::System::String* KEY_RESTRICTED_PRIVILEGE; // 0x0
		// static const ::System::String* KEY_RESTRICTED_PRIVACY_SETTING; // 0x0
		// static const ::System::String* KEY_ID; // 0x0
		// static const ::System::String* KEY_NAME; // 0x0
		// static const ::System::String* KEY_STATE; // 0x0
		// static const ::System::String* KEY_PROGRESS; // 0x0
		// static const ::System::String* KEY_TYPE; // 0x0
		// static const ::System::String* KEY_VALUE; // 0x0
		// static const ::System::String* KEY_IS_GLOBAL; // 0x0
		// static const ::System::String* KEY_PERCENTILE; // 0x0
		// static const ::System::String* KEY_RANK; // 0x0
		// static const ::System::String* KEY_IS_DELTA; // 0x0
		// static const ::System::String* KEY_SESSION_ID; // 0x0
		// static const ::System::String* KEY_USER_ID; // 0x0
		// static const ::System::String* KEY_MATCH_ID; // 0x0
		// static const ::System::String* KEY_MATCH_CONTENT; // 0x0
		// static const ::System::String* KEY_MATCH_STATUS; // 0x0
		// static const ::System::String* KEY_CONNECTION_STR; // 0x0
		// static const ::System::String* KEY_MAX_PLAYER; // 0x0
		// static const ::System::String* KEY_CURRENT_PLAYER; // 0x0
		// static const ::System::String* KEY_GROUP_ID; // 0x0
		// static const ::System::String* KEY_JOIN_RESTRICTION; // 0x0
		// static const ::System::String* KEY_ALLOW_CROSS_PLATFORM_JOIN; // 0x0
		// static const ::System::String* KEY_PLATFORM; // 0x0
		// static const ::System::String* KEY_URL; // 0x0
		// static const ::System::String* KEY_SESSION_NAME; // 0x0
		// static const ::System::String* KEY_INVITABLE_USER_TYPE; // 0x0
		// static const ::System::String* KEY_EXCLUSIVE_LEADER_PRIVILEGE; // 0x0
		// static const ::System::String* KEY_MEMBER_TYPE; // 0x0
		// static const ::System::String* KEY_MAX_SPECTATOR; // 0x0
		// static const ::System::String* KEY_ACTIVITY_ID; // 0x0
		// static const ::System::String* KEY_TITLE; // 0x0
		// static const ::System::String* KEY_CONTENT; // 0x0
		// static const ::System::String* KEY_BUTTON; // 0x0
		// static const ::System::String* KEY_DEFAULT; // 0x0
		// static const ::System::String* KEY_CANCEL; // 0x0
		// static const ::System::String* KEY_ERROR_CODE; // 0x0
		// static const ::System::String* CONSOLE_SWITCH_CONTROL; // 0x0
		// static const ::System::String* CONSOLE_INPUT_TYPE; // 0x0
	};
}
