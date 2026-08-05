#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/EndShape.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_280;
class Class_1_2DDAC2F6C97EB8AD;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_METHOD_2_5C3FF0B49C55F5F0_OFFSET UNITYSDK_OFFSET(0x84BEF0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_METHOD_2_5DB6065F6B429689_OFFSET UNITYSDK_OFFSET(0x84BEE0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x84BF10)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x84BD50)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x84BDE0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x84BE90)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TargetSelectorModule_TypeDefinitionIndex = 62267;

	struct alignas(8) TargetSelectorModule
	{
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_280*>* FeatureTargets; // 0x10
		::Class_0_16E4307DCC419505_280* MainTarget; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EndPoint; // 0x20
		::System::Boolean EnableEndShape; // 0x28
		::MoleMole::MonoEffectContrllerModule::EndShape EndShape; // 0x2C
		::System::Int32 _targetIndex; // 0x48

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_ONCREATECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_ONDESTROYCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_ONUPDATECONTROLLER_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_280* Method_2_5DB6065F6B429689()
		{
			return ((::Class_0_16E4307DCC419505_280*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_METHOD_2_5DB6065F6B429689_OFFSET))(this);
		}

		/*
		::Struct_2_F4BEA7B577DD61FE Method_2_5C3FF0B49C55F5F0(::Class_1_2DDAC2F6C97EB8AD* a1)
		{
			return ((::Struct_2_F4BEA7B577DD61FE(*)(::PVOID, ::Class_1_2DDAC2F6C97EB8AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_METHOD_2_5C3FF0B49C55F5F0_OFFSET))(this, a1);
		}
		*/

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TARGETSELECTORMODULE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
