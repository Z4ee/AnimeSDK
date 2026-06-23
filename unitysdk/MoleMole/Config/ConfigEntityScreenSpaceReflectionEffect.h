#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETDEPTHBUFFERTHICKNESS_OFFSET UNITYSDK_OFFSET(0xE96A040)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETENABLED_OFFSET UNITYSDK_OFFSET(0xE969F40)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0xE969FC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETOVERRIDEGLOBALPLANARREFLECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE96A1B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETPLANARREFLECTIONBLURAMOUNT_OFFSET UNITYSDK_OFFSET(0xE96A230)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETQUALITY_OFFSET UNITYSDK_OFFSET(0xE96A140)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETSCREENFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0xE96A0C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE96A2B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenSpaceReflectionEffect_TypeDefinitionIndex = 81212;

	class ConfigEntityScreenSpaceReflectionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* screenFadeDistance; // 0x40
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x48
		::MoleMole::Config::ScreenEffectBool* overrideGlobalPlanarReflectionConfig; // 0x50
		::MoleMole::Config::ScreenEffectBool* enabled; // 0x58
		::MoleMole::Config::ScreenEffectFloat* planarReflectionBlurAmount; // 0x60
		::MoleMole::Config::ScreenEffectFloat* depthBufferThickness; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType depthBufferThicknessHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType qualityHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType planarReflectionBlurAmountHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType overrideGlobalPlanarReflectionConfigHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType screenFadeDistanceHandleType; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType enabledHandleType; // 0x88
		::UnityEngine::NAPRenderPipeline0::SsrQuality quality; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnabled(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETENABLED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDepthBufferThickness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETDEPTHBUFFERTHICKNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScreenFadeDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETSCREENFADEDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::SsrQuality GetQuality(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::SsrQuality(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETQUALITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOverrideGlobalPlanarReflectionConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETOVERRIDEGLOBALPLANARREFLECTIONCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPlanarReflectionBlurAmount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEREFLECTIONEFFECT_GETPLANARREFLECTIONBLURAMOUNT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
