#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_METHOD_3_1FA5437C87D12A6F_OFFSET UNITYSDK_OFFSET(0x176A92F0)
#define RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_METHOD_3_9386764161BEC05E_OFFSET UNITYSDK_OFFSET(0x176A9260)
#define RPG_GAMECORE_SETBATTLECONDITIONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x176A92C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleConditionProgress_TypeDefinitionIndex = 21406;

	class SetBattleConditionProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleConditionID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLECONDITIONPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9386764161BEC05E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleConditionProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleConditionProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_METHOD_3_9386764161BEC05E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FA5437C87D12A6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleConditionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLECONDITIONPROGRESS_METHOD_3_1FA5437C87D12A6F_OFFSET))(a1, a2);
		}
	};
}
