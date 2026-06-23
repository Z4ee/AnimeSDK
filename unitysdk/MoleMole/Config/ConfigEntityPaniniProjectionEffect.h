#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYPANINIPROJECTIONEFFECT_GETCROPTOFIT_OFFSET UNITYSDK_OFFSET(0x12B3B890)
#define MOLEMOLE_CONFIG_CONFIGENTITYPANINIPROJECTIONEFFECT_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x12B3B810)
#define MOLEMOLE_CONFIG_CONFIGENTITYPANINIPROJECTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityPaniniProjectionEffect_TypeDefinitionIndex = 81268;

	class ConfigEntityPaniniProjectionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* distance; // 0x40
		::MoleMole::Config::ScreenEffectFloat* cropToFit; // 0x48
		::MoleMole::Config::ScreenEffectFieldHandleType cropToFitHandleType; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType distanceHandleType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPANINIPROJECTIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPANINIPROJECTIONEFFECT_GETDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCropToFit(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPANINIPROJECTIONEFFECT_GETCROPTOFIT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
