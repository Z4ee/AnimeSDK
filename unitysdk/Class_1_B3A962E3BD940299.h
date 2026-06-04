#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraWorkState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B3A962E3BD940299__CTOR_OFFSET UNITYSDK_OFFSET(0x18E39F70)

inline static constexpr unsigned int Class_1_B3A962E3BD940299_TypeDefinitionIndex = 38729;

class Class_1_B3A962E3BD940299 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraWorkState Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3A962E3BD940299__CTOR_OFFSET))(this);
	}
};
