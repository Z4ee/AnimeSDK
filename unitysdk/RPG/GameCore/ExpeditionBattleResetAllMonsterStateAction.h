#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DCEB0)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DCE10)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DCEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleResetAllMonsterStateAction_TypeDefinitionIndex = 16047;

	class ExpeditionBattleResetAllMonsterStateAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
