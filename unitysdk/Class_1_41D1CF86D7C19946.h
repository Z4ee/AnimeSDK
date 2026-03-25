#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceBubbleState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_41D1CF86D7C19946__CTOR_OFFSET UNITYSDK_OFFSET(0x16662D70)

inline static constexpr unsigned int Class_1_41D1CF86D7C19946_TypeDefinitionIndex = 28608;

class Class_1_41D1CF86D7C19946 : public ::System::Object
{
public:
	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D1CF86D7C19946__CTOR_OFFSET))(this);
	}
};
