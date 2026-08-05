#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETCLAMP_OFFSET UNITYSDK_OFFSET(0x11703620)
#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x117034C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x117033D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETMODE_OFFSET UNITYSDK_OFFSET(0x11703450)
#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETMOTIONVECTORBLENDRADIUS_OFFSET UNITYSDK_OFFSET(0x11703530)
#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETQUALITY_OFFSET UNITYSDK_OFFSET(0x117035B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x117036A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityMotionBlurEffect_TypeDefinitionIndex = 58030;

	class ConfigEntityMotionBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* clamp; // 0x40
		::MoleMole::Config::ScreenEffectFloat* motionVectorBlendRadius; // 0x48
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x50
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality quality; // 0x58
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection direction; // 0x5C
		::MoleMole::Config::ScreenEffectFieldHandleType directionHandleType; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType modeHandleType; // 0x64
		::MoleMole::Config::ScreenEffectFieldHandleType qualityHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType clampHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType motionVectorBlendRadiusHandleType; // 0x70
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode mode; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::MotionBlurMode GetMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::MotionBlurMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection GetDirection(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::MotionBlurDirection(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETDIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMotionVectorBlendRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETMOTIONVECTORBLENDRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality GetQuality(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::MotionBlurQuality(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETQUALITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETCLAMP_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
