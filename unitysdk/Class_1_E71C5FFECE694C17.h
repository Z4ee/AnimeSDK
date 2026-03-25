#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_1;

#define CLASS_1_E71C5FFECE694C17__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0F840)

inline static constexpr unsigned int Class_1_E71C5FFECE694C17_TypeDefinitionIndex = 32700;

class Class_1_E71C5FFECE694C17 : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::Class_1_07A210D994F284D8_1*>*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_7; // 0x28
	::RPG::Client::LittleGame::Match3::ChessBoardState Field_1_1; // 0x2C
	::System::UInt32 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E71C5FFECE694C17__CTOR_OFFSET))(this);
	}
};
