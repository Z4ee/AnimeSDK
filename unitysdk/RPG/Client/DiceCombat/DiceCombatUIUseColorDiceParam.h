#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUIUSECOLORDICEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4253F0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUIUseColorDiceParam_TypeDefinitionIndex = 72118;

	class DiceCombatUIUseColorDiceParam : public ::System::Object
	{
	public:
		::System::String* DiceName; // 0x10
		::System::Boolean IsPlayer; // 0x18
		::System::UInt32 ContentID; // 0x1C
		::System::UInt32 DiceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUIUSECOLORDICEPARAM__CTOR_OFFSET))(this);
		}
	};
}
