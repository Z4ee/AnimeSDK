#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_29;

#define CLASS_1_F9FBCC956DFCF137_23_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0x143FD0A0)
#define CLASS_1_F9FBCC956DFCF137_23__CTOR_OFFSET UNITYSDK_OFFSET(0x143FD0B0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_23_TypeDefinitionIndex = 70631;

class Class_1_F9FBCC956DFCF137_23 : public ::System::Object
{
public:
	::Class_1_21C7581DFE99F091_29* _Notify_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_21C7581DFE99F091_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_29*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_23__CTOR_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_29* get_Notify()
	{
		return ((::Class_1_21C7581DFE99F091_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_23_GET_NOTIFY_OFFSET))(this);
	}
};
