#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9C4E0E0141829F67;

#define STRUCT_2_7FB1976AEB7689C7_GET_MOTION_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_7FB1976AEB7689C7__CTOR_OFFSET UNITYSDK_OFFSET(0x164FF0)

inline static constexpr unsigned int Struct_2_7FB1976AEB7689C7_TypeDefinitionIndex = 75688;

struct alignas(8) Struct_2_7FB1976AEB7689C7
{
	::Class_2_9C4E0E0141829F67* _Motion_k__BackingField; // 0x10

	::System::Void _ctor(::Class_2_9C4E0E0141829F67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C4E0E0141829F67*))((::PBYTE)hIl2Cpp + STRUCT_2_7FB1976AEB7689C7__CTOR_OFFSET))(this, a1);
	}

	::Class_2_9C4E0E0141829F67* get_Motion()
	{
		return ((::Class_2_9C4E0E0141829F67*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7FB1976AEB7689C7_GET_MOTION_OFFSET))(this);
	}
};
