#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPlayerAnim.h"
#include "unitysdk/System/Object.h"

class Class_1_803155C069ACF29F;

#define CLASS_1_48948A8249D14CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2F560)

inline static constexpr unsigned int Class_1_48948A8249D14CAF_TypeDefinitionIndex = 40282;

class Class_1_48948A8249D14CAF : public ::System::Object
{
public:
	::Class_1_803155C069ACF29F* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Boolean Field_1_3; // 0x1A
	::System::Boolean Field_1_4; // 0x1B
	::System::Boolean Field_1_5; // 0x1C
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24
	::System::Single Field_1_8; // 0x28
	::RPG::Client::LittleGame::TRFPlayerAnim Field_1_9; // 0x2C
	::RPG::Client::LittleGame::TRFPlayerAnim Field_1_10; // 0x30
	::RPG::Client::LittleGame::TRFMoveState Field_1_11; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48948A8249D14CAF__CTOR_OFFSET))(this);
	}
};
