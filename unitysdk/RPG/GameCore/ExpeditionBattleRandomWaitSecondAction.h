#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D0821E0)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D082180)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0821D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleRandomWaitSecondAction_TypeDefinitionIndex = 16034;

	class ExpeditionBattleRandomWaitSecondAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Single MinWaitTime; // 0x10
		::System::Single MaxWaitTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
