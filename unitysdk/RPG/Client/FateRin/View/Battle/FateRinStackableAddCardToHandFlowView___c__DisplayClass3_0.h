#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19715300)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS3_0__PLAYSTACKABLEADDCARDTOHANDFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x197165B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS3_0__PLAYSTACKABLEADDCARDTOHANDFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x197167F0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinStackableAddCardToHandFlowView___c__DisplayClass3_0_TypeDefinitionIndex = 75744;

	class FateRinStackableAddCardToHandFlowView___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* temporaryCardRoots; // 0x10
		::RPG::Client::Promises::IPendingPromise* pending; // 0x18
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* cardAreaVm; // 0x20
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* targetPosCtrl; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStackableAddCardToHandFlow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS3_0__PLAYSTACKABLEADDCARDTOHANDFLOW_B__0_OFFSET))(this);
		}

		::System::Void _PlayStackableAddCardToHandFlow_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS3_0__PLAYSTACKABLEADDCARDTOHANDFLOW_B__1_OFFSET))(this, a1);
		}
	};
}
