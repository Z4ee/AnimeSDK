#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_4_1283C8EA514CC3D4_OFFSET UNITYSDK_OFFSET(0x1D6A4BF0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_4_EBC87B772E12D5A9_OFFSET UNITYSDK_OFFSET(0x1D6A4C70)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerSkillCleanerBotCondition_TypeDefinitionIndex = 18799;

	class FiveDimPlayerSkillCleanerBotCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1283C8EA514CC3D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_4_1283C8EA514CC3D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EBC87B772E12D5A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLCLEANERBOTCONDITION_METHOD_4_EBC87B772E12D5A9_OFFSET))(a1, a2);
		}
	};
}
