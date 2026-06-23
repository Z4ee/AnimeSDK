#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceModule.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x11637940)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x116379C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x11637A70)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11637B60)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TraceGroupConfig_TypeDefinitionIndex = 46460;

	class TraceGroupConfig : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::MoleMole::MonoEffectContrllerModule::TraceModule TraceModule; // 0x18
		::MoleMole::MonoEffectContrllerModule::GuidanceModule GuidanceModule; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONCREATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONDESTROYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONUPDATECONTROLLER_OFFSET))(this, controller);
		}
	};
}
