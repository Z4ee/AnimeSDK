#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_8F919A33E7132401_OFFSET UNITYSDK_OFFSET(0x189990C0)
#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_F082D0C12E25B64F_OFFSET UNITYSDK_OFFSET(0x18999160)
#define RPG_GAMECORE_GLOBALVISIBILITYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18999120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalVisibilityControl_TypeDefinitionIndex = 19214;

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

		static ::System::Void Method_3_8F919A33E7132401(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalVisibilityControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalVisibilityControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_8F919A33E7132401_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F082D0C12E25B64F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalVisibilityControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalVisibilityControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALVISIBILITYCONTROL_METHOD_3_F082D0C12E25B64F_OFFSET))(a1, a2);
		}
	};
}
