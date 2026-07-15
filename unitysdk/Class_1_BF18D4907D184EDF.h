#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BF18D4907D184EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x187A0830)

inline static constexpr unsigned int Class_1_BF18D4907D184EDF_TypeDefinitionIndex = 40336;

class Class_1_BF18D4907D184EDF : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF18D4907D184EDF__CTOR_OFFSET))(this);
	}
};
