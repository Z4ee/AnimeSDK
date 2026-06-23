#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5CC3BCEACFBD428D;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E8E130)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x17E8E020)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17E8E070)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x17E8E0C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8E110)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int PreviewModule_TypeDefinitionIndex = 44624;

	class PreviewModule : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Int32 LineFragment; // 0x14
		::System::Boolean ShowController; // 0x18
		::System::Single HitAccuracy; // 0x1C
		::System::Int32 RecordFrame; // 0x20
		::System::Int32 RecordInterval; // 0x24
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5CC3BCEACFBD428D*>* DebugMap; // 0x28
		::System::UInt32 curReviewId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONCREATECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONDESTROYCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONUPDATECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
