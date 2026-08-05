#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8.h"
#include "unitysdk/Enum_3_C125CED56C589EEE.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_61F0B6B95730F983_OFFSET UNITYSDK_OFFSET(0x190929F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_1_OFFSET UNITYSDK_OFFSET(0x88E5C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_2_OFFSET UNITYSDK_OFFSET(0x88E610)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_3_OFFSET UNITYSDK_OFFSET(0x88E660)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_OFFSET UNITYSDK_OFFSET(0x88E570)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x88E4A0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x88E4B0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x88E520)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int BulletModule_TypeDefinitionIndex = 42311;

	struct alignas(8) BulletModule
	{
		::System::Single TargetTrackSpeed; // 0x10
		::System::Boolean NeedsProxyReset; // 0x14
		::Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8 FollowMode; // 0x18
		::System::Boolean FixFirstFrameToEmitter; // 0x1C
		::System::Boolean InheritInertia; // 0x1D
		::System::Boolean UseEmitterInherit; // 0x1E
		::System::Single InertiaScale; // 0x20
		::System::Single SpeedDecayTime; // 0x24
		::System::Single MinSpeedLimit; // 0x28
		::Enum_3_C125CED56C589EEE DirectionMode; // 0x2C
		::MoleMole::Config::ConfigMovement* OverrideConfigMovement; // 0x30
		::MoleMole::Config::ConfigRotation* OverrideConfigRoatation; // 0x38

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

		static ::System::Void Method_2_61F0B6B95730F983(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_61F0B6B95730F983_OFFSET))(a1);
		}

		::System::Void Method_2_EA15BE021E279EF5_1(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA15BE021E279EF5_2(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_2_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA15BE021E279EF5_3(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_3_OFFSET))(this, a1);
		}
	};
}
