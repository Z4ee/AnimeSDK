#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ThirdpartyLoginType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKTHIRDLOGINCONFIG_GETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1D2805B0)
#define MIHOYO_SDK_MIHOYOSDKTHIRDLOGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2806F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKThirdLoginConfig_TypeDefinitionIndex = 37384;

	class MiHoYoSDKThirdLoginConfig : public ::System::Object
	{
	public:
		::System::String* token_type; // 0x10
		::System::Int64 game_token_expires_in; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKTHIRDLOGINCONFIG__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::ThirdpartyLoginType GetLoginType()
		{
			return ((::MiHoYo::SDK::ThirdpartyLoginType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKTHIRDLOGINCONFIG_GETLOGINTYPE_OFFSET))(this);
		}
	};
}
