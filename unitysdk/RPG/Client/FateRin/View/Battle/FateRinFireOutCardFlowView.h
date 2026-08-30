#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_413;
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOWFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B5BDF00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOW_OFFSET UNITYSDK_OFFSET(0x1B5BDC70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CE880)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW__PLAYFIREOUTFLOW_OFFSET UNITYSDK_OFFSET(0x1B5CE030)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinFireOutCardFlowView_TypeDefinitionIndex = 79368;

	class FateRinFireOutCardFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _AnimationDuration; // 0x18
		::System::Single _ReflowDuration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_413* PlayFireOutFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::RPG::Client::Promises::IPendingPromise* a3)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOW_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_413* PlayFireOutFlowFromWorldPosition(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOWFROMWORLDPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Class_0_16E4307DCC419505_413* _PlayFireOutFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Quaternion> a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW__PLAYFIREOUTFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
