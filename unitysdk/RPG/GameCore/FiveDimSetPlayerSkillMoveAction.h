#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_4_8CBAADD15CC18B1C_OFFSET UNITYSDK_OFFSET(0x1D6DA450)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_4_AE2D08B894C75919_OFFSET UNITYSDK_OFFSET(0x1D6DA530)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerSkillMoveAction_TypeDefinitionIndex = 18756;

	class FiveDimSetPlayerSkillMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8CBAADD15CC18B1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_4_8CBAADD15CC18B1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE2D08B894C75919(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLMOVEACTION_METHOD_4_AE2D08B894C75919_OFFSET))(a1, a2);
		}
	};
}
