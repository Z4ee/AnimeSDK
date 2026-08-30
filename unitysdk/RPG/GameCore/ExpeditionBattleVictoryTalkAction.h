#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DDBB0)
#define RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DDB10)
#define RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DDBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleVictoryTalkAction_TypeDefinitionIndex = 16049;

	class ExpeditionBattleVictoryTalkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
