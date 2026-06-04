#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueInTeamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_METHOD_3_0B6818C94A40ED23_OFFSET UNITYSDK_OFFSET(0x196703D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_METHOD_3_DFE5DEE1A1CFEA7B_OFFSET UNITYSDK_OFFSET(0x1966EE60)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1966EE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValueInTeamRatio_TypeDefinitionIndex = 14760;

	class ComplexSkillAISourceValueInTeamRatio : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueInTeamType ValueType; // 0x10
		::System::Boolean OverrideRange; // 0x14
		::RPG::GameCore::FixPoint OverrideMin; // 0x18
		::RPG::GameCore::FixPoint OverrideMax; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B6818C94A40ED23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_METHOD_3_0B6818C94A40ED23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFE5DEE1A1CFEA7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValueInTeamRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEINTEAMRATIO_METHOD_3_DFE5DEE1A1CFEA7B_OFFSET))(a1, a2);
		}
	};
}
