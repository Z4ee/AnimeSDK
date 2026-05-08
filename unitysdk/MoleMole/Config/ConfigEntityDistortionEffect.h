#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETDOWNSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x12D37810)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETEFFECTRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x12D37B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEACTIVE_OFFSET UNITYSDK_OFFSET(0x12D37A10)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEDISTORTIONONLOWPLATFORM_OFFSET UNITYSDK_OFFSET(0x12D37A90)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x12D37880)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETRGBSHIFT_OFFSET UNITYSDK_OFFSET(0x12D37900)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETSEPARATERGBINTENSITY_OFFSET UNITYSDK_OFFSET(0x12D37990)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12D37B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDistortionEffect_TypeDefinitionIndex = 43926;

	class ConfigEntityDistortionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* separateRGBIntensity; // 0x40
		::MoleMole::Config::ScreenEffectBool* forceActive; // 0x48
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x50
		::MoleMole::Config::ScreenEffectBool* forceDistortionOnLowPlatform; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType separateRGBIntensityHandleType; // 0x64
		::System::Int32 downScaleFactor; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType forceDistortionOnLowPlatformHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType downScaleFactorHandleType; // 0x70
		::UnityEngine::Vector3 rgbShift; // 0x74
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType effectRenderQueue; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType forceActiveHandleType; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType effectRenderQueueHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType rgbShiftHandleType; // 0x8C

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
