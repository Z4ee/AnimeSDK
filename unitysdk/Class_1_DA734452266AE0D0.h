#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirGameState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DA734452266AE0D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8ECF50)

inline static constexpr unsigned int Class_1_DA734452266AE0D0_TypeDefinitionIndex = 41078;

class Class_1_DA734452266AE0D0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::PixAir::PixAirGameState Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA734452266AE0D0__CTOR_OFFSET))(this);
	}
};
