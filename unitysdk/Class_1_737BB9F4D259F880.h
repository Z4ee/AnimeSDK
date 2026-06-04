#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;

#define CLASS_1_737BB9F4D259F880__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1CCF0)

inline static constexpr unsigned int Class_1_737BB9F4D259F880_TypeDefinitionIndex = 38678;

class Class_1_737BB9F4D259F880 : public ::System::Object
{
public:
	::Class_1_C563E5E77DCDB6EB* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::RPG::Client::LittleGame::ChimeraDuelGameState Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_737BB9F4D259F880__CTOR_OFFSET))(this);
	}
};
