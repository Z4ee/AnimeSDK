#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D0832B0)
#define RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0831D0)
#define RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0832A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleWaitSecondAction_TypeDefinitionIndex = 16033;

	class ExpeditionBattleWaitSecondAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Single WaitTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleWaitSecondAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleWaitSecondAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleWaitSecondAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleWaitSecondAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
