#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define CODE_RENDERING_ENVIRONMENTSYSTEMV2_ENVV2PARAMPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x16B34DC0)

namespace Code::Rendering::EnvironmentSystemV2
{
	inline static constexpr unsigned int EnvV2ParamPreset_TypeDefinitionIndex = 47835;

	class EnvV2ParamPreset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean enableOutput; // 0x18
		::System::Single fadingRate; // 0x1C
		::System::Single loadingDelayUpdateSpeed; // 0x20
		::System::Single loadingDelaySeconds; // 0x24
		::System::Single loadingDelaySecondsChangeRange; // 0x28
		::System::Single loadingDelaySecondsChangeSpeed; // 0x2C
		::System::Boolean enableDirtyApply; // 0x30
		::System::Boolean disableGPUGradient; // 0x31
		::System::Boolean randomGPUGradient; // 0x32
		::System::Single globalReleaseDuration; // 0x34
		::System::Single globalActiveDuration; // 0x38
		::System::Boolean EnableInterpTaskTrace; // 0x3C
		::System::Boolean EnableOutputSlotApplyTrace; // 0x3D
		::System::Boolean EnableAsyncTrace; // 0x3E
		::System::Boolean EnableTimeoutTrace; // 0x3F
		::System::Boolean enableOuptputCollection; // 0x40
		::System::Boolean disableGradient; // 0x41
		::System::Boolean enbaleUAtmosphere; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_RENDERING_ENVIRONMENTSYSTEMV2_ENVV2PARAMPRESET__CTOR_OFFSET))(this);
		}
	};
}
