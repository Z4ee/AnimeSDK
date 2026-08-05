#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_NOTIFICATIONDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CACF260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NotificationDefine_TypeDefinitionIndex = 19687;

	class NotificationDefine : public ::System::Object
	{
	public:
		// static const ::System::String* SHOW_DIALOG; // 0x0
		// static const ::System::String* HIDE_DIALOG; // 0x0
		// static const ::System::String* LOGOUT; // 0x0
		// static const ::System::String* UNIWEBVIEW; // 0x0
		// static const ::System::String* SHOW_POP_NOTICE; // 0x0
		// static const ::System::String* SHOW_CUSTOM_POP_NOTICE; // 0x0
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
		// static const ::System::String* NOTICE_LOGOUT_RED_POINT; // 0x0
		// static const ::System::String* NOTICE_RED_POINT_TEXT; // 0x0
		// static const ::System::String* NOTICE_RED_POINT_CUSTOM; // 0x0
		// static const ::System::String* NOTICE_IMPORTANT_RED_POINT_CUSTOM; // 0x0
		// static const ::System::String* INFO_RED_POINT; // 0x0
		// static const ::System::String* ANTI_ADDICTION; // 0x0
		// static const ::System::String* NOTICE_POP_IMAGE; // 0x0
		// static const ::System::String* PS_FRIEND_UPDATE; // 0x0
		// static const ::System::String* PS_BLOCK_UPDATE; // 0x0
		// static const ::System::String* FATIGUE_REMINDER; // 0x0
		// static const ::System::String* LOGIN_FLOW_CHANNEL_ERROR; // 0x0
		// static const ::System::String* LOGIN_FLOW_SERVER_RESPONSE_ERROR; // 0x0
		// static const ::System::String* LOGIN_FLOW_HTTP_REQUEST_ERROR; // 0x0
		// static const ::System::String* LOGIN_FLOW_CLIENT_ERROR; // 0x0
		// static const ::System::String* PAY_XBOX_IS_STORE_USER; // 0x0
		// static const ::System::String* TYPE; // 0x0
		// static const ::System::String* STATUS; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONDEFINE__CTOR_OFFSET))(this);
		}
	};
}
