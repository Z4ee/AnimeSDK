#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }

#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_NULLTARGET_OFFSET UNITYSDK_OFFSET(0x12F89CF0)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_TARGETMODULEWRAPPER_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_5FFB353256AF4026_OFFSET UNITYSDK_OFFSET(0x75B010)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x75B080)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_CA8FE7098187A6E6_OFFSET UNITYSDK_OFFSET(0x75B070)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_SET_TARGETMODULEWRAPPER_OFFSET UNITYSDK_OFFSET(0x75B000)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadNavTargetConfig_TypeDefinitionIndex = 52428;

	struct alignas(8) GamepadNavTargetConfig
	{
		::MoleMole::MonoGamepadModule* targetModule; // 0x10
		::System::String* targetModuleName; // 0x18

		static ::MoleMole::GamepadNavTargetConfig get_NullTarget()
		{
			return ((::MoleMole::GamepadNavTargetConfig(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_NULLTARGET_OFFSET))();
		}

		::MoleMole::MonoGamepadModule* get_targetModuleWrapper()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_TARGETMODULEWRAPPER_OFFSET))(this);
		}

		::System::Void set_targetModuleWrapper(::MoleMole::MonoGamepadModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_SET_TARGETMODULEWRAPPER_OFFSET))(this, a1);
		}

		::System::Void Method_2_5FFB353256AF4026(::MoleMole::MonoGamepadModule* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_5FFB353256AF4026_OFFSET))(this, a1, a2);
		}

		::MoleMole::MonoGamepadModule* Method_2_CA8FE7098187A6E6(::MoleMole::UIBaseController* a1)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_CA8FE7098187A6E6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_AA972BE565DAF9E3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
		}
	};
}
