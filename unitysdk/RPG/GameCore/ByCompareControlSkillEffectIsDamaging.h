#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3130F74CCEC63951_OFFSET UNITYSDK_OFFSET(0x18729700)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3870518E5DCE6DF3_OFFSET UNITYSDK_OFFSET(0x187297E0)
#define RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING__CTOR_OFFSET UNITYSDK_OFFSET(0x18729780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareControlSkillEffectIsDamaging_TypeDefinitionIndex = 21949;

	class ByCompareControlSkillEffectIsDamaging : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::System::Boolean CheckChildSkill; // 0x2C
		::RPG::GameCore::LogicOperation CheckChildSkillLogicType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3130F74CCEC63951(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3130F74CCEC63951_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3870518E5DCE6DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECONTROLSKILLEFFECTISDAMAGING_METHOD_4_3870518E5DCE6DF3_OFFSET))(a1, a2);
		}
	};
}
