#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKThirdLoginConfig; }

#define MIHOYO_SDK_MIHOYOSDKTHIRDLOGINCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x8D5C0F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKThirdLoginConfigs_TypeDefinitionIndex = 42946;

	class MiHoYoSDKThirdLoginConfigs : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKThirdLoginConfig* tw; // 0x10
		::MiHoYo::SDK::MiHoYoSDKThirdLoginConfig* fb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKTHIRDLOGINCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
