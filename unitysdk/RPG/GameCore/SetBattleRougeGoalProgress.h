#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_METHOD_3_305001F4A8BA242A_OFFSET UNITYSDK_OFFSET(0x19C2B920)
#define RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_METHOD_3_955CFD4D8F764113_OFFSET UNITYSDK_OFFSET(0x19C2B9B0)
#define RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2B980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleRougeGoalProgress_TypeDefinitionIndex = 22371;

	class SetBattleRougeGoalProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RogueGoalID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_305001F4A8BA242A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleRougeGoalProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleRougeGoalProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_METHOD_3_305001F4A8BA242A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_955CFD4D8F764113(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleRougeGoalProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleRougeGoalProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_METHOD_3_955CFD4D8F764113_OFFSET))(a1, a2);
		}
	};
}
