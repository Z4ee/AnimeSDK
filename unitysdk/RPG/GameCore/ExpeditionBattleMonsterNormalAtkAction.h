#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLEMONSTERNORMALATKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DC570)
#define RPG_GAMECORE_EXPEDITIONBATTLEMONSTERNORMALATKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DC4D0)
#define RPG_GAMECORE_EXPEDITIONBATTLEMONSTERNORMALATKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DC560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleMonsterNormalAtkAction_TypeDefinitionIndex = 16040;

	class ExpeditionBattleMonsterNormalAtkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMONSTERNORMALATKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleMonsterNormalAtkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleMonsterNormalAtkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMONSTERNORMALATKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleMonsterNormalAtkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleMonsterNormalAtkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMONSTERNORMALATKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
