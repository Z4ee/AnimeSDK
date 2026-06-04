#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_380C831779F69363;
namespace RPG::GameCore { class FiveDimGravitySwitchLineConfig; }

#define CLASS_1_358F5D52EF111F36_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C2EA10)
#define CLASS_1_358F5D52EF111F36__CTOR_OFFSET UNITYSDK_OFFSET(0x18C2EAA0)

inline static constexpr unsigned int Class_1_358F5D52EF111F36_TypeDefinitionIndex = 40094;

class Class_1_358F5D52EF111F36 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimGravitySwitchLineConfig* Field_1_0; // 0x10
	::Class_1_380C831779F69363* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358F5D52EF111F36__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358F5D52EF111F36_CLEAR_OFFSET))(this);
	}
};
