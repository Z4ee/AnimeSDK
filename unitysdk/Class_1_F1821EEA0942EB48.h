#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_F1821EEA0942EB48_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14451D30)
#define CLASS_1_F1821EEA0942EB48__CTOR_OFFSET UNITYSDK_OFFSET(0x14451D90)

inline static constexpr unsigned int Class_1_F1821EEA0942EB48_TypeDefinitionIndex = 51614;

class Class_1_F1821EEA0942EB48 : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntityList* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1821EEA0942EB48__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1821EEA0942EB48_DISPOSE_OFFSET))(this);
	}
};
