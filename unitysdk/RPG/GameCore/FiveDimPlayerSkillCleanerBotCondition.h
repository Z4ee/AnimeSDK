#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_3_7904A568EC1D763F_OFFSET UNITYSDK_OFFSET(0x1D0F95F0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_3_E1B216BBC976230E_OFFSET UNITYSDK_OFFSET(0x1D0F9670)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F9660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerSkillCleanerBotCondition_TypeDefinitionIndex = 18589;

	class FiveDimPlayerSkillCleanerBotCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7904A568EC1D763F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_3_7904A568EC1D763F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1B216BBC976230E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_3_E1B216BBC976230E_OFFSET))(a1, a2);
		}
	};
}
