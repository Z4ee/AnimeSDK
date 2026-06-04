#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C71DDDA66421C541;

#define CLASS_1_0F5195356F0210F0_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA5A04B0)
#define CLASS_1_0F5195356F0210F0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A04C0)

inline static constexpr unsigned int Class_1_0F5195356F0210F0_TypeDefinitionIndex = 70629;

class Class_1_0F5195356F0210F0 : public ::System::Object
{
public:
	::Class_3_C71DDDA66421C541* _GameInstance_k__BackingField; // 0x10

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0__CTOR_OFFSET))(this, a1);
	}

	::Class_3_C71DDDA66421C541* get_GameInstance()
	{
		return ((::Class_3_C71DDDA66421C541*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0_GET_GAMEINSTANCE_OFFSET))(this);
	}
};
