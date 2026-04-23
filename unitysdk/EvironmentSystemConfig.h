#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Code::Rendering::EnvironmentSystemV2 { class EnvV2ParamPreset; }

#define EVIRONMENTSYSTEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF93B460)

inline static constexpr unsigned int EvironmentSystemConfig_TypeDefinitionIndex = 44100;

class EvironmentSystemConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Boolean enableEnvSystemV2; // 0x18
	::System::Boolean editorEnableEnvSystemV2; // 0x19
	::Code::Rendering::EnvironmentSystemV2::EnvV2ParamPreset* preset; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVIRONMENTSYSTEMCONFIG__CTOR_OFFSET))(this);
	}
};
