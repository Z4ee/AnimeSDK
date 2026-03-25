#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolySwitchState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7B6614A282AF16B5__CTOR_OFFSET UNITYSDK_OFFSET(0x168207B0)

inline static constexpr unsigned int Class_1_7B6614A282AF16B5_TypeDefinitionIndex = 33020;

class Class_1_7B6614A282AF16B5 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::MonopolySwitchState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B6614A282AF16B5__CTOR_OFFSET))(this);
	}
};
