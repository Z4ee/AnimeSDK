#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CE870)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW___C__DISPLAYCLASS4_1___PLAYFIREOUTFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1B5CE8C0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinFireOutCardFlowView___c__DisplayClass4_1_TypeDefinitionIndex = 79370;

	class FateRinFireOutCardFlowView___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* posCtrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Void __PlayFireOutFlow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW___C__DISPLAYCLASS4_1___PLAYFIREOUTFLOW_B__1_OFFSET))(this);
		}
	};
}
