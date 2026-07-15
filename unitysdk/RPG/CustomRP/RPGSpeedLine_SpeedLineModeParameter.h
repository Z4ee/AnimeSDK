#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGSpeedLine_SpeedLineMode.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define RPG_CUSTOMRP_RPGSPEEDLINE_SPEEDLINEMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C390)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGSpeedLine_SpeedLineModeParameter_TypeDefinitionIndex = 36300;

	class RPGSpeedLine_SpeedLineModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::RPGSpeedLine_SpeedLineMode>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSPEEDLINE_SPEEDLINEMODEPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
