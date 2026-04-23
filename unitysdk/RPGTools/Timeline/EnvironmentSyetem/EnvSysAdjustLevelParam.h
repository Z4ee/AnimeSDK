#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVSYSADJUSTLEVELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE3980)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnvSysAdjustLevelParam_TypeDefinitionIndex = 45345;

	struct alignas(4) EnvSysAdjustLevelParam
	{
		::System::Boolean AdjustLevelOn; // 0x10
		::UnityEngine::Color LevelSkinColor; // 0x14
		::UnityEngine::Color LevelSkinShadowColor; // 0x24
		::UnityEngine::Color LevelHighLightColor; // 0x34
		::UnityEngine::Color LevelShadowColor; // 0x44
		::System::Single LevelShadow; // 0x54
		::System::Single LevelMid; // 0x58
		::System::Single LevelLight; // 0x5C

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVSYSADJUSTLEVELPARAM__CTOR_OFFSET))(this, a1);
		}
	};
}
