#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_1E05B85221E37E39_OFFSET UNITYSDK_OFFSET(0x197D1910)
#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_93104BD81682B8D7_OFFSET UNITYSDK_OFFSET(0x197D19B0)
#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197D1970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalVisibilityControl_TypeDefinitionIndex = 19135;

	class GlobalVisibilityControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StageVisible; // 0x18
		::System::Boolean AtmosphereVisible; // 0x19
		::RPG::GameCore::EntityTypeMask VisibleEntityMask; // 0x20
		::RPG::GameCore::EntityTypeMask InvisibleEntityMask; // 0x28
		::RPG::GameCore::TargetEvaluator* VisibleTargets; // 0x30
		::RPG::GameCore::TargetEvaluator* InvisibleTargets; // 0x38
		::RPG::GameCore::PredicateConfig* VisibleEffectsFilter; // 0x40
		::Il2CppArray<::System::String*>* VisibleEffects; // 0x48
		::Il2CppArray<::System::String*>* InvisibleEffects; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E05B85221E37E39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalVisibilityControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalVisibilityControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_1E05B85221E37E39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93104BD81682B8D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalVisibilityControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalVisibilityControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_93104BD81682B8D7_OFFSET))(a1, a2);
		}
	};
}
