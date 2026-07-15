#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_60E03E35B6FA5940__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23D990)

inline static constexpr unsigned int Class_1_60E03E35B6FA5940_TypeDefinitionIndex = 40077;

class Class_1_60E03E35B6FA5940 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Match3::Match3GameState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E03E35B6FA5940__CTOR_OFFSET))(this);
	}
};
