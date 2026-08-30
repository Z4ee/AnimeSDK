#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1349;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD029BC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0___CREATEPLAYAUDIOCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD029E20)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDiscardCardFlowView___c__DisplayClass11_0_TypeDefinitionIndex = 79356;

	class FateRinDiscardCardFlowView___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1349* audioService; // 0x10
		::System::String* eventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreatePlayAudioCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS11_0___CREATEPLAYAUDIOCOMMAND_B__0_OFFSET))(this);
		}
	};
}
