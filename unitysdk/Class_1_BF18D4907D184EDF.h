#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BF18D4907D184EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9EFD40)

inline static constexpr unsigned int Class_1_BF18D4907D184EDF_TypeDefinitionIndex = 41215;

class Class_1_BF18D4907D184EDF : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver EABKOHGCHFP; // 0x10
	::System::Boolean DLCPEDKHMDA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF18D4907D184EDF__CTOR_OFFSET))(this);
	}
};
