#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D082CB0)
#define RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D082BD0)
#define RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D082CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleStrongAtkAction_TypeDefinitionIndex = 16041;

	class ExpeditionBattleStrongAtkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Single HitStopDuration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleStrongAtkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleStrongAtkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleStrongAtkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleStrongAtkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
