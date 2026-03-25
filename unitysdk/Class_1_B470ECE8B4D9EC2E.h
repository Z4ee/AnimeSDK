#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_198;

#define CLASS_1_B470ECE8B4D9EC2E__CTOR_OFFSET UNITYSDK_OFFSET(0x16896DD0)

inline static constexpr unsigned int Class_1_B470ECE8B4D9EC2E_TypeDefinitionIndex = 32964;

class Class_1_B470ECE8B4D9EC2E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_198* Field_1_8; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Single Field_1_5; // 0x20
	::System::Single Field_1_9; // 0x24
	::System::Single Field_1_6; // 0x28
	::RPG::Client::LittleGame::ETimelineControlGamePlayMode Field_1_7; // 0x2C
	::System::Boolean Field_1_1; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Boolean Field_1_0; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B470ECE8B4D9EC2E__CTOR_OFFSET))(this);
	}
};
