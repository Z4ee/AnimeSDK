#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_3_46EB146A57643508_OFFSET UNITYSDK_OFFSET(0x1891BE50)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_3_65337BCAC7328F3C_OFFSET UNITYSDK_OFFSET(0x1891BD20)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1891BE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerSkillMoveAction_TypeDefinitionIndex = 17819;

	class FiveDimSetPlayerSkillMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65337BCAC7328F3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_3_65337BCAC7328F3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46EB146A57643508(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_3_46EB146A57643508_OFFSET))(a1, a2);
		}
	};
}
