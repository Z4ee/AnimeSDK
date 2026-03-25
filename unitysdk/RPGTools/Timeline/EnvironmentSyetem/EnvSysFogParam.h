#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Gradient; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVSYSFOGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x89B30)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnvSysFogParam_TypeDefinitionIndex = 39440;

	struct alignas(8) EnvSysFogParam
	{
		::System::Single BlendWeight; // 0x10
		::UnityEngine::Gradient* FogColor; // 0x18
		::System::Single FogDensity; // 0x20
		::System::Single FogNear; // 0x24
		::System::Single FogFar; // 0x28
		::UnityEngine::Gradient* HeightFogColor; // 0x30
		::System::Single HeightFogDensity; // 0x38
		::System::Single HeightFogNear; // 0x3C
		::System::Single HeightFogFar; // 0x40
		::System::Single HeightFogBase; // 0x44
		::System::Single HeightFogRange; // 0x48
		::System::Boolean DisableFogTransition; // 0x4C
		::System::Single CharacterFogFactor; // 0x50

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVSYSFOGPARAM__CTOR_OFFSET))(this, a1);
		}
	};
}
