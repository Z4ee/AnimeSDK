#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_2756312DAA992EF8_OFFSET UNITYSDK_OFFSET(0x1CFF4D70)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_3FA46FDAB29EC335_OFFSET UNITYSDK_OFFSET(0x1CFF4E40)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF4E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceMaxTeamBPCost_TypeDefinitionIndex = 15365;

	class ComplexSkillAISourceMaxTeamBPCost : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2756312DAA992EF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_2756312DAA992EF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FA46FDAB29EC335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceMaxTeamBPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEMAXTEAMBPCOST_METHOD_3_3FA46FDAB29EC335_OFFSET))(a1, a2);
		}
	};
}
