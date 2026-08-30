#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DCDB0)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DCD10)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DCDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleResetAllAvatarStateAction_TypeDefinitionIndex = 16046;

	class ExpeditionBattleResetAllAvatarStateAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleResetAllAvatarStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLAVATARSTATEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
