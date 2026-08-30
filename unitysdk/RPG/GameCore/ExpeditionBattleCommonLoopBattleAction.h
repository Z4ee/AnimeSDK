#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DB250)
#define RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DB1B0)
#define RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DB240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleCommonLoopBattleAction_TypeDefinitionIndex = 16035;

	class ExpeditionBattleCommonLoopBattleAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
