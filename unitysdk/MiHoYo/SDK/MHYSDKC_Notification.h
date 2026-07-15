#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Notification_TypeDefinitionIndex = 44484;

	class MHYSDKC_Notification : public ::System::Object
	{
	public:
		// static const ::System::String* SHOW_DIALOG; // 0x0
		// static const ::System::String* HIDE_DIALOG; // 0x0
		// static const ::System::String* LOGOUT; // 0x0
		// static const ::System::String* UNIWEBVIEW; // 0x0
		// static const ::System::String* MUTEBGM; // 0x0
		// static const ::System::String* UNMUTEBGM; // 0x0
		// static const ::System::String* SHOW_POP_NOTICE; // 0x0
		// static const ::System::String* SHOW_CUSTOM_POP_NOTICE; // 0x0
		// static const ::System::String* BEFORE_HIDE_NOTICE; // 0x0
		// static const ::System::String* BIND_MOBILE_ACCOUNT; // 0x0
		// static const ::System::String* REAL_NAME_ACCOUNT; // 0x0
		// static const ::System::String* RECEIVE_REMOTE_PUSH; // 0x0
		// static const ::System::String* RECEIVE_LOCAL_PUSH; // 0x0
		// static const ::System::String* DOWNLOAD_ALL_PROGRESS; // 0x0
		// static const ::System::String* DOWNLOAD_STATE_CHANGE; // 0x0
		// static const ::System::String* DOWNLOAD_OVER; // 0x0
		// static const ::System::String* GUEST_BIND_UID; // 0x0
		// static const ::System::String* DEEP_LINK; // 0x0
		// static const ::System::String* ATTRIBUTION_CHANGED; // 0x0
		// static const ::System::String* TRACK_EVENT_RESULT; // 0x0
		// static const ::System::String* TRACK_SESSION_RESULT; // 0x0
		// static const ::System::String* NOTICE_RED_POINT; // 0x0
		// static const ::System::String* NOTICE_IMPORTANT_RED_POINT; // 0x0
		// static const ::System::String* NOTICE_RED_POINT_CUSTOM; // 0x0
		// static const ::System::String* NOTICE_IMPORTANT_RED_POINT_CUSTOM; // 0x0
		// static const ::System::String* NOTICE_LOGOUT_RED_POINT; // 0x0
		// static const ::System::String* NOTICE_RED_POINT_TEXT; // 0x0
		// static const ::System::String* INFO_RED_POINT; // 0x0
		// static const ::System::String* ANTI_ADDICTION; // 0x0
		// static const ::System::String* NOTICE_POP_IMAGE; // 0x0
		// static const ::System::String* PS_FRIEND_UPDATE; // 0x0
		// static const ::System::String* PS_BLOCK_UPDATE; // 0x0
		// static const ::System::String* ERROR; // 0x0
		// static const ::System::String* FATIGUE_REMINDER; // 0x0
		// static const ::System::String* SET_FPS; // 0x0
		// static const ::System::String* OUTPUT_PORT_TYPE_CHANGE; // 0x0
		// static const ::System::String* NATIVE_UI_SHOW; // 0x0
		// static const ::System::String* NATIVE_UI_HIDE; // 0x0
		// static const ::System::String* LOGIN_FLOW_CHANNEL_ERROR; // 0x0
		// static const ::System::String* LOGIN_FLOW_SERVER_RESPONSE_ERROR; // 0x0
		// static const ::System::String* LOGIN_FLOW_HTTP_REQUEST_ERROR; // 0x0
		// static const ::System::String* SET_JOYPAD; // 0x0
		// static const ::System::String* LOGIN_FLOW_CLIENT_ERROR; // 0x0
		// static const ::System::String* SAFE_AREA_CHANGED; // 0x0
		// static const ::System::String* PARAM; // 0x0
		// static const ::System::String* STATUS; // 0x0
		// static const ::System::String* TYPE; // 0x0
		// static const ::System::String* VOX_OTHER_USER_ENTER; // 0x0
		// static const ::System::String* VOX_OTHER_USER_EXIT; // 0x0
		// static const ::System::String* VOX_ROOM_DISCONNECTED; // 0x0
		// static const ::System::String* VOX_ROOM_RECONNECTED; // 0x0
		// static const ::System::String* VOX_ASR_STREAMING_RUNNING; // 0x0
		// static const ::System::String* VOX_ASR_FINISH; // 0x0
		// static const ::System::String* VOX_ASR_FAIL; // 0x0
		// static const ::System::String* BEFORE_OPEN_UNITY_MIC; // 0x0
		// static const ::System::String* AFTER_CLOSE_UNITY_MIC; // 0x0
	};
}
