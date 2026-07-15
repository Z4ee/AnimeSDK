#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/DuelChimeraState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FC4BBA00C18C42A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2502B0)

inline static constexpr unsigned int Class_1_FC4BBA00C18C42A4_TypeDefinitionIndex = 39519;

class Class_1_FC4BBA00C18C42A4 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::Client::LittleGame::DuelChimeraState Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC4BBA00C18C42A4__CTOR_OFFSET))(this);
	}
};
