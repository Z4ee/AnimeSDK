#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceModule_GuidanceType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::MonoEffectContrllerModule { class GuidanceCoreBase; }
namespace MoleMole::MonoEffectContrllerModule { class GuidanceCore_Bezier2; }
namespace MoleMole::MonoEffectContrllerModule { class GuidanceCore_Bezier3; }
namespace MoleMole::MonoEffectContrllerModule { class GuidanceCore_BezierCustom; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_GETCURRENTCONFIG_OFFSET UNITYSDK_OFFSET(0x75B500)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x75B4C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x75B580)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x75B590)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x75B670)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceModule_TypeDefinitionIndex = 49051;

	struct alignas(8) GuidanceModule
	{
		::System::Boolean Enable; // 0x10
		::MoleMole::MonoEffectContrllerModule::GuidanceModule_GuidanceType PathType; // 0x14
		::MoleMole::MonoEffectContrllerModule::GuidanceCore_Bezier2* GuidanceConfig; // 0x18
		::MoleMole::MonoEffectContrllerModule::GuidanceCore_Bezier3* GuidanceConfig_Bezier3; // 0x20
		::MoleMole::MonoEffectContrllerModule::GuidanceCore_BezierCustom* GuidanceConfig_BezierCurve; // 0x28

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_INIT_OFFSET))(this);
		}

		::MoleMole::MonoEffectContrllerModule::GuidanceCoreBase* GetCurrentConfig()
		{
			return ((::MoleMole::MonoEffectContrllerModule::GuidanceCoreBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_GETCURRENTCONFIG_OFFSET))(this);
		}

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_ONCREATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_ONDESTROYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCEMODULE_ONUPDATECONTROLLER_OFFSET))(this, controller);
		}
	};
}
