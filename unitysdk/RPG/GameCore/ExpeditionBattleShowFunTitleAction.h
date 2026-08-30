#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DD3B0)
#define RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DD310)
#define RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DD3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleShowFunTitleAction_TypeDefinitionIndex = 16045;

	class ExpeditionBattleShowFunTitleAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleShowFunTitleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESHOWFUNTITLEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
