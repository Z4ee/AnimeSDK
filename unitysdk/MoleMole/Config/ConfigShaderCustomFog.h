#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShaderCustomBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_MODIFYENABLE_OFFSET UNITYSDK_OFFSET(0x174548E0)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x17454210)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x174546E0)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x17454650)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_SETSHADERCUSTOM_OFFSET UNITYSDK_OFFSET(0x17454420)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x174549D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomFog_TypeDefinitionIndex = 61548;

	class ConfigShaderCustomFog : public ::MoleMole::Config::ConfigShaderCustomBase
	{
	public:
		::UnityEngine::AnimationCurve* FogColorFarBeginCurve; // 0x28
		::UnityEngine::AnimationCurve* FogStartEndCurve; // 0x30
		::UnityEngine::AnimationCurve* FogColorNearEndCurve; // 0x38
		::UnityEngine::AnimationCurve* FogColorNearBeginCurve; // 0x40
		::UnityEngine::AnimationCurve* FogStartBeginCurve; // 0x48
		::UnityEngine::AnimationCurve* FogDistanceEndCurve; // 0x50
		::UnityEngine::AnimationCurve* FogDistanceBeginCurve; // 0x58
		::UnityEngine::AnimationCurve* FogColorFarEndCurve; // 0x60
		::System::Single FogStartFrom; // 0x68
		::System::Single FogDistanceTo; // 0x6C
		::System::Single FogStartTo; // 0x70
		::UnityEngine::Color FogColorFar; // 0x74
		::System::Single FogDistanceFrom; // 0x84
		::UnityEngine::Color FogColorNear; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG__CTOR_OFFSET))(this);
		}

		::System::Void ProcessEnter(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSENTER_OFFSET))(this, time);
		}

		::System::Void ProcessKeep(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSKEEP_OFFSET))(this, time);
		}

		::System::Void ProcessExit(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_PROCESSEXIT_OFFSET))(this, time);
		}

		::System::Void SetShaderCustom(::System::Single fogStart, ::System::Single fogDistance, ::UnityEngine::Color fogColorNear, ::UnityEngine::Color fogColorFar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_SETSHADERCUSTOM_OFFSET))(this, fogStart, fogDistance, fogColorNear, fogColorFar);
		}

		::System::Void ModifyEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOG_MODIFYENABLE_OFFSET))(this, enable);
		}
	};
}
