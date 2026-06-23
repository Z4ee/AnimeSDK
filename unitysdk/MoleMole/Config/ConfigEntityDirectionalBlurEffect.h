#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x106D2F60)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x106D2D90)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x106D2EE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x106D2E70)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT_GETSAMPLEDISTANCEMODE_OFFSET UNITYSDK_OFFSET(0x106D2E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYDIRECTIONALBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x106D2FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDirectionalBlurEffect_TypeDefinitionIndex = 51539;

	class ConfigEntityDirectionalBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x40
		::UnityEngine::Vector2 direction; // 0x48
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0x50
		::System::Int32 sampleCount; // 0x54
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0x58
		::UnityEngine::Rendering::Universal::DownSampleLevel downSample; // 0x5C
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x64
		::MoleMole::Config::ScreenEffectFieldHandleType directionHandleType; // 0x68
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
