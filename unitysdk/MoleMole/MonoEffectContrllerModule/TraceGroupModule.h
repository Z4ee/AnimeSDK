#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace MoleMole::MonoEffectContrllerModule { class TraceGroupConfig; }
namespace MoleMole::MonoEffectContrllerModule { class TraceGroupConfigWithPredicate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x8686D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x8686E0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x868750)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TraceGroupModule_TypeDefinitionIndex = 45313;

	struct alignas(8) TraceGroupModule
	{
		::MoleMole::MonoEffectContrllerModule::TraceGroupConfig* DefaultConfig; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectContrllerModule::TraceGroupConfigWithPredicate*>* TraceGroupConfigs; // 0x18

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPMODULE_ONCREATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPMODULE_ONDESTROYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPMODULE_ONUPDATECONTROLLER_OFFSET))(this, controller);
		}
	};
}
