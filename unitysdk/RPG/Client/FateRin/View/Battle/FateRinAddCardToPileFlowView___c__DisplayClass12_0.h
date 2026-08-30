#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1349;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B9C30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS12_0___CREATEPLAYAUDIOCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B5BA5C0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView___c__DisplayClass12_0_TypeDefinitionIndex = 79333;

	class FateRinAddCardToPileFlowView___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::String* eventName; // 0x10
		::Class_0_16E4307DCC419505_1349* audioService; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreatePlayAudioCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS12_0___CREATEPLAYAUDIOCOMMAND_B__0_OFFSET))(this);
		}
	};
}
