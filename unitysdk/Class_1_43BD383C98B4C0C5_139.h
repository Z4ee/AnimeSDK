#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AC8164CC7B8672E;

#define CLASS_1_43BD383C98B4C0C5_139_SPAWN_OFFSET UNITYSDK_OFFSET(0x14806740)
#define CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET UNITYSDK_OFFSET(0x148067C0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_TypeDefinitionIndex = 83460;

class Class_1_43BD383C98B4C0C5_139 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET))(this);
	}

	::Class_1_7AC8164CC7B8672E* Spawn()
	{
		return ((::Class_1_7AC8164CC7B8672E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_SPAWN_OFFSET))(this);
	}
};
