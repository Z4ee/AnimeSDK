#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A399EF0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0___CREATEPREPARECARDSCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1A39A810)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToHandFlowView___c__DisplayClass8_0_TypeDefinitionIndex = 75696;

	class FateRinAddCardToHandFlowView___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x10
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* cardAreaVm; // 0x18
		::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* spawnWorldPositions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreatePrepareCardsCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS8_0___CREATEPREPARECARDSCOMMAND_B__0_OFFSET))(this);
		}
	};
}
