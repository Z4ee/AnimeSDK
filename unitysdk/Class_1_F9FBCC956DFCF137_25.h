#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_35;

#define CLASS_1_F9FBCC956DFCF137_25_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0xB26DA20)
#define CLASS_1_F9FBCC956DFCF137_25__CTOR_OFFSET UNITYSDK_OFFSET(0xB26DA30)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_25_TypeDefinitionIndex = 76057;

class Class_1_F9FBCC956DFCF137_25 : public ::System::Object
{
public:
	::Class_1_21C7581DFE99F091_35* _Notify_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_21C7581DFE99F091_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_35*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_25__CTOR_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_35* get_Notify()
	{
		return ((::Class_1_21C7581DFE99F091_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_25_GET_NOTIFY_OFFSET))(this);
	}
};
