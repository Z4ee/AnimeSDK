#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceBubbleState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_41D1CF86D7C19946__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC6190)

inline static constexpr unsigned int Class_1_41D1CF86D7C19946_TypeDefinitionIndex = 34337;

class Class_1_41D1CF86D7C19946 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceBubbleState Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D1CF86D7C19946__CTOR_OFFSET))(this);
	}
};
