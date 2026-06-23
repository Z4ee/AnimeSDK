#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETDOWNSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x12B39CB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETEFFECTRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x12B39FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEACTIVE_OFFSET UNITYSDK_OFFSET(0x12B39EB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEDISTORTIONONLOWPLATFORM_OFFSET UNITYSDK_OFFSET(0x12B39F30)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x12B39D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETRGBSHIFT_OFFSET UNITYSDK_OFFSET(0x12B39DA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETSEPARATERGBINTENSITY_OFFSET UNITYSDK_OFFSET(0x12B39E30)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3A020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDistortionEffect_TypeDefinitionIndex = 80143;

	class ConfigEntityDistortionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* forceDistortionOnLowPlatform; // 0x40
		::MoleMole::Config::ScreenEffectBool* forceActive; // 0x48
		::MoleMole::Config::ScreenEffectFloat* separateRGBIntensity; // 0x50
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType downScaleFactorHandleType; // 0x64
		::MoleMole::Config::ScreenEffectFieldHandleType rgbShiftHandleType; // 0x68
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType effectRenderQueue; // 0x6C
		::System::Int32 downScaleFactor; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType separateRGBIntensityHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType forceActiveHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType forceDistortionOnLowPlatformHandleType; // 0x7C
		::UnityEngine::Vector3 rgbShift; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType effectRenderQueueHandleType; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetDownScaleFactor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETDOWNSCALEFACTOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetRgbShift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETRGBSHIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSeparateRGBIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETSEPARATERGBINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceActive(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEACTIVE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceDistortionOnLowPlatform(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEDISTORTIONONLOWPLATFORM_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::DistortionQueueType GetEffectRenderQueue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::DistortionQueueType(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETEFFECTRENDERQUEUE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
