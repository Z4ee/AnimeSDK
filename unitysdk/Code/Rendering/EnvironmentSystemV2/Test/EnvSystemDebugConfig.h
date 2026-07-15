#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Code::Rendering::EnvironmentSystemV2 { class EnvV2ParamPreset; }

#define CODE_RENDERING_ENVIRONMENTSYSTEMV2_TEST_ENVSYSTEMDEBUGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B34DF0)

namespace Code::Rendering::EnvironmentSystemV2::Test
{
	inline static constexpr unsigned int EnvSystemDebugConfig_TypeDefinitionIndex = 47836;

	class EnvSystemDebugConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enableEnvSystemV2; // 0x18
		::Code::Rendering::EnvironmentSystemV2::EnvV2ParamPreset* preset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_RENDERING_ENVIRONMENTSYSTEMV2_TEST_ENVSYSTEMDEBUGCONFIG__CTOR_OFFSET))(this);
		}
	};
}
