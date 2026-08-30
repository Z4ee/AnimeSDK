#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D080910)
#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D080870)
#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D080900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleDeathAction_TypeDefinitionIndex = 16042;

	class ExpeditionBattleDeathAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleDeathAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleDeathAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleDeathAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleDeathAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
