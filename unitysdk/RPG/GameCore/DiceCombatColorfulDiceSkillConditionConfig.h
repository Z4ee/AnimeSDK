#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatPredicateConfig; }

#define RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIG_METHOD_3_1507C0586E4207FF_OFFSET UNITYSDK_OFFSET(0x1715E500)
#define RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIG_METHOD_3_85BADE18EDFC0274_OFFSET UNITYSDK_OFFSET(0x1715E5E0)
#define RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1715E590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatColorfulDiceSkillConditionConfig_TypeDefinitionIndex = 14808;

	class DiceCombatColorfulDiceSkillConditionConfig : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatPredicateConfig*>* Condition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1507C0586E4207FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIG_METHOD_3_1507C0586E4207FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85BADE18EDFC0274(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONDITIONCONFIG_METHOD_3_85BADE18EDFC0274_OFFSET))(a1, a2);
		}
	};
}
