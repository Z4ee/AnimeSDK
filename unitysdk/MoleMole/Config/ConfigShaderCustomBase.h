#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShaderCustomBase_ShaderCustomState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class NapGradient;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1B913EB0)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_GET_DURATIONBEFOREEXIT_OFFSET UNITYSDK_OFFSET(0x1B913D90)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B913D40)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B913DA0)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_SAVEEVALUATE_1_OFFSET UNITYSDK_OFFSET(0x1B913FA0)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_SAVEEVALUATE_OFFSET UNITYSDK_OFFSET(0x1B913F20)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B914030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomBase_TypeDefinitionIndex = 79709;

	class ConfigShaderCustomBase : public ::System::Object
	{
	public:
		::System::Single KeepDuration; // 0x10
		::System::Int32 Priority; // 0x14
		::System::Boolean IgnoreWorldTimeScaleCurve; // 0x18
		::System::Single ExitDuration; // 0x1C
		::System::Single OneTimeLoopDuration; // 0x20
		::System::Single EnterDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE__CTOR_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_DurationBeforeExit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_GET_DURATIONBEFOREEXIT_OFFSET))(this);
		}

		::System::Void Process(::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_PROCESS_OFFSET))(this, curTime);
		}

		::MoleMole::Config::ConfigShaderCustomBase_ShaderCustomState GetState(::System::Single curTime)
		{
			return ((::MoleMole::Config::ConfigShaderCustomBase_ShaderCustomState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_GETSTATE_OFFSET))(this, curTime);
		}

		::System::Single SaveEvaluate(::UnityEngine::AnimationCurve* curve, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_SAVEEVALUATE_OFFSET))(this, curve, t);
		}

		::UnityEngine::Color SaveEvaluate_1(::NapGradient* curve, ::System::Single t)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::NapGradient*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMBASE_SAVEEVALUATE_1_OFFSET))(this, curve, t);
		}
	};
}
