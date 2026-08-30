#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7DDA70)
#define RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DD990)
#define RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DDA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleTutorialTaskUnlockAction_TypeDefinitionIndex = 16053;

	class ExpeditionBattleTutorialTaskUnlockAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::String* TutorialID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
