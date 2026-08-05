#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A4AC610)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x1A4AC440)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x1A4AC590)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x1A4AC520)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETSAMPLEDISTANCEMODE_OFFSET UNITYSDK_OFFSET(0x1A4AC4B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AC680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDirectionalBlurEffect_TypeDefinitionIndex = 40675;

	class ConfigEntityDirectionalBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x40
		::MoleMole::Config::ScreenEffectFieldHandleType directionHandleType; // 0x48
		::System::Int32 sampleCount; // 0x4C
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0x50
		::UnityEngine::Rendering::Universal::DownSampleLevel downSample; // 0x54
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x5C
		::UnityEngine::Vector2 direction; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType sampleDistanceModeHandleType; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::DownSampleLevel GetDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DownSampleLevel(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::SampleDistanceMode GetSampleDistanceMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::SampleDistanceMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETSAMPLEDISTANCEMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetDirection(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETDIRECTION_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
