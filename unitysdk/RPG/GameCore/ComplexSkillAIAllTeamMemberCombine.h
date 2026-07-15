#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_METHOD_3_C14519925AEF4137_OFFSET UNITYSDK_OFFSET(0x1BC23950)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_METHOD_3_F63E7DDC6362BC08_OFFSET UNITYSDK_OFFSET(0x1BC23990)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC23980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAllTeamMemberCombine_TypeDefinitionIndex = 14934;

	class ComplexSkillAIAllTeamMemberCombine : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x10
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x18
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C14519925AEF4137(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_METHOD_3_C14519925AEF4137_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F63E7DDC6362BC08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAllTeamMemberCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTEAMMEMBERCOMBINE_METHOD_3_F63E7DDC6362BC08_OFFSET))(a1, a2);
		}
	};
}
