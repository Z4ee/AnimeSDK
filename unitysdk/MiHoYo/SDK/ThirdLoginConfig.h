#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ThirdpartyLoginType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_THIRDLOGINCONFIG_GETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1D1D7790)
#define MIHOYO_SDK_THIRDLOGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D78D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThirdLoginConfig_TypeDefinitionIndex = 20017;

	class ThirdLoginConfig : public ::System::Object
	{
	public:
		::System::String* token_type; // 0x10
		::System::Int64 game_token_expires_in; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THIRDLOGINCONFIG__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::ThirdpartyLoginType GetLoginType()
		{
			return ((::MiHoYo::SDK::ThirdpartyLoginType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THIRDLOGINCONFIG_GETLOGINTYPE_OFFSET))(this);
		}
	};
}
