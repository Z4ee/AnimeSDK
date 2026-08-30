#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_A4F2C99A2E6F922A;

#define CLASS_1_DB97D5A23E58D83F__CTOR_OFFSET UNITYSDK_OFFSET(0xBF70690)

inline static constexpr unsigned int Class_1_DB97D5A23E58D83F_TypeDefinitionIndex = 78101;

class Class_1_DB97D5A23E58D83F : public ::System::Object
{
public:
	::Class_1_A4F2C99A2E6F922A* COANEIDOBOG; // 0x10

	::System::Void _ctor(::RPG::Client::Prop::DronesPuzzleAreaConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DronesPuzzleAreaConfig))((::PBYTE)hIl2Cpp + CLASS_1_DB97D5A23E58D83F__CTOR_OFFSET))(this, a1);
	}
};
