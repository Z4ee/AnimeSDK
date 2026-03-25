#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/DuelChimeraState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FC4BBA00C18C42A4__CTOR_OFFSET UNITYSDK_OFFSET(0x169F3300)

inline static constexpr unsigned int Class_1_FC4BBA00C18C42A4_TypeDefinitionIndex = 32254;

class Class_1_FC4BBA00C18C42A4 : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::Client::LittleGame::DuelChimeraState Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC4BBA00C18C42A4__CTOR_OFFSET))(this);
	}
};
