#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_26;

#define CLASS_1_F9FBCC956DFCF137_15_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0x12920640)
#define CLASS_1_F9FBCC956DFCF137_15__CTOR_OFFSET UNITYSDK_OFFSET(0x12920650)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_15_TypeDefinitionIndex = 69819;

class Class_1_F9FBCC956DFCF137_15 : public ::System::Object
{
public:
	::Class_1_21C7581DFE99F091_26* _Notify_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_21C7581DFE99F091_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_26*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_15__CTOR_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_26* get_Notify()
	{
		return ((::Class_1_21C7581DFE99F091_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_15_GET_NOTIFY_OFFSET))(this);
	}
};
