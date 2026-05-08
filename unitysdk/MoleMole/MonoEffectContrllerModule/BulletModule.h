#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_61F0B6B95730F983_OFFSET UNITYSDK_OFFSET(0x15B34D80)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_1_OFFSET UNITYSDK_OFFSET(0x7A3C60)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_2_OFFSET UNITYSDK_OFFSET(0x7A3CB0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_OFFSET UNITYSDK_OFFSET(0x7A3C10)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x7A3B40)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x7A3B50)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x7A3BC0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int BulletModule_TypeDefinitionIndex = 55443;

	struct alignas(8) BulletModule
	{
		::Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8 FollowMode; // 0x10
		::MoleMole::Config::ConfigMovement* OverrideConfigMovement; // 0x18
		::MoleMole::Config::ConfigRotation* OverrideConfigRoatation; // 0x20

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONCREATECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONDESTROYCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONUPDATECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA15BE021E279EF5(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA15BE021E279EF5_1(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_1_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_61F0B6B95730F983(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_61F0B6B95730F983_OFFSET))(a1);
		}

		::System::Void Method_2_EA15BE021E279EF5_2(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_2_OFFSET))(this, a1);
		}
	};
}
