#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_409DDE73E6219FD7;

#define CLASS_1_F9FBCC956DFCF137_24_GET_NOTIFY_OFFSET UNITYSDK_OFFSET(0xAD12E90)
#define CLASS_1_F9FBCC956DFCF137_24__CTOR_OFFSET UNITYSDK_OFFSET(0xAD12EA0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_24_TypeDefinitionIndex = 70632;

class Class_1_F9FBCC956DFCF137_24 : public ::System::Object
{
public:
	::Class_1_409DDE73E6219FD7* _Notify_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_409DDE73E6219FD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_409DDE73E6219FD7*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_24__CTOR_OFFSET))(this, a1);
	}

	::Class_1_409DDE73E6219FD7* get_Notify()
	{
		return ((::Class_1_409DDE73E6219FD7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_24_GET_NOTIFY_OFFSET))(this);
	}
};
