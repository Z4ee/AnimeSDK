#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DD4B0)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DD410)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DD4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleStartAction_TypeDefinitionIndex = 16036;

	class ExpeditionBattleStartAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleStartAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleStartAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleStartAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleStartAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
