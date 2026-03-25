#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D54F41AAAD02B794__CTOR_OFFSET UNITYSDK_OFFSET(0x167ED350)

inline static constexpr unsigned int Class_1_D54F41AAAD02B794_TypeDefinitionIndex = 33146;

class Class_1_D54F41AAAD02B794 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Marble::MarbleActionSource Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D54F41AAAD02B794__CTOR_OFFSET))(this);
	}
};
