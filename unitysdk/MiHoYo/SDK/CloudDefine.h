#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUDDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF6CD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CloudDefine_TypeDefinitionIndex = 6931;

	class CloudDefine : public ::System::Object
	{
	public:
		// static const ::System::String* SET_ENV; // 0x0
		// static const ::System::String* SET_ENV_AND_GAMEBIZ; // 0x0
		// static const ::System::String* LOGIN; // 0x0
		// static const ::System::String* WILL_ENTER_GAME; // 0x0
		// static const ::System::String* ENTER_GAME; // 0x0
		// static const ::System::String* SHARE; // 0x0
		// static const ::System::String* HAS_FORUM; // 0x0
		// static const ::System::String* OPEN_FORUM; // 0x0
		// static const ::System::String* SET_ENABLED; // 0x0
		// static const ::System::String* SET_CONFIG; // 0x0
		// static const ::System::String* SET_LAUNCH_PARAMETERS; // 0x0
		// static const ::System::String* GET_LOCAL_DATA; // 0x0
		// static const ::System::String* SET_LOCAL_DATA; // 0x0
		// static const ::System::String* SAVE_IMAGE; // 0x0
		// static const ::System::String* TRANSMIT_DATA; // 0x0
		// static const ::System::String* GET_CLIPBOARD_DATA; // 0x0
		// static const ::System::String* SET_GAME_CONTROL_IMU_ENABLE; // 0x0
		// static const ::System::String* IME_SHOW; // 0x0
		// static const ::System::String* IME_CLOSE; // 0x0
		// static const ::System::String* INVOKE_RETURN_CACHE_ENABLE; // 0x0
		// static const ::System::String* INFO_GET_UAPC; // 0x0
		// static const ::System::String* INFO_GET_CPS; // 0x0
		// static const ::System::String* INFO_GET_CHANNEL_ID; // 0x0
		// static const ::System::String* INFO_GET_SUB_CHANNEL_ID; // 0x0
		// static const ::System::String* INFO_GET_DEVICE_ID; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUDDEFINE__CTOR_OFFSET))(this);
		}
	};
}
