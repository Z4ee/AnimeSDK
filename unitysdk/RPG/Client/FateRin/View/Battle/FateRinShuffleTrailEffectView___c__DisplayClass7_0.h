#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::Promises { class IPendingPromise; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD02D770)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW___C__DISPLAYCLASS7_0__PLAYSHUFFLEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0xD02DFD0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW___C__DISPLAYCLASS7_0__PLAYSHUFFLEFLOW_B__1_OFFSET UNITYSDK_OFFSET(0xD02E050)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinShuffleTrailEffectView___c__DisplayClass7_0_TypeDefinitionIndex = 79375;

	class FateRinShuffleTrailEffectView___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPendingPromise* pending; // 0x10
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* cardPileBtnVm; // 0x18
		::System::Int32 discardPileVisualOffset; // 0x20
		::System::Int32 drawPileVisualOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayShuffleFlow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW___C__DISPLAYCLASS7_0__PLAYSHUFFLEFLOW_B__0_OFFSET))(this);
		}

		::System::Void _PlayShuffleFlow_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW___C__DISPLAYCLASS7_0__PLAYSHUFFLEFLOW_B__1_OFFSET))(this, a1);
		}
	};
}
