#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x8443C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x8443D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x8444E0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int SetupModule_TypeDefinitionIndex = 52480;

	struct alignas(1) SetupModule
	{
		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_ONCREATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_ONDESTROYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_ONUPDATECONTROLLER_OFFSET))(this, controller);
		}
	};
}
