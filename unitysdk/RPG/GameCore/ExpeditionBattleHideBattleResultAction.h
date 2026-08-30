#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DBCE0)
#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DBC40)
#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DBCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleHideBattleResultAction_TypeDefinitionIndex = 16044;

	class ExpeditionBattleHideBattleResultAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
