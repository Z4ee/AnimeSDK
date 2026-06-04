#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_3FA46FDAB29EC335_OFFSET UNITYSDK_OFFSET(0x1966D460)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_54C8D2B91CD7A8A1_OFFSET UNITYSDK_OFFSET(0x1966FBA0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1966D440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceMaxTeamBPCost_TypeDefinitionIndex = 14769;

	class ComplexSkillAISourceMaxTeamBPCost : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54C8D2B91CD7A8A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_54C8D2B91CD7A8A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FA46FDAB29EC335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_3FA46FDAB29EC335_OFFSET))(a1, a2);
		}
	};
}
