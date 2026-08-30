#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D081E30)
#define RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D081D90)
#define RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D081E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleNormalAtkAction_TypeDefinitionIndex = 16039;

	class ExpeditionBattleNormalAtkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleNormalAtkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleNormalAtkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleNormalAtkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleNormalAtkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENORMALATKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
