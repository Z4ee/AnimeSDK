#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0026438A483A8753;

#define CLASS_1_F9FBCC956DFCF137_26_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0xBFD9B00)
#define CLASS_1_F9FBCC956DFCF137_26__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD9B10)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_26_TypeDefinitionIndex = 76058;

class Class_1_F9FBCC956DFCF137_26 : public ::System::Object
{
public:
	::Class_1_0026438A483A8753* _Notify_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_0026438A483A8753* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0026438A483A8753*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_26__CTOR_OFFSET))(this, a1);
	}

	::Class_1_0026438A483A8753* get_Notify()
	{
		return ((::Class_1_0026438A483A8753*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_26_GET_NOTIFY_OFFSET))(this);
	}
};
