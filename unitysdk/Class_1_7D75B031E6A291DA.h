#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_325;
class Class_1_105C32866538BE74;

#define CLASS_1_7D75B031E6A291DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0F49B0)
#define CLASS_1_7D75B031E6A291DA_METHOD_1_DF0870E03623C994_OFFSET UNITYSDK_OFFSET(0x1D0F4B00)
#define CLASS_1_7D75B031E6A291DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F48A0)

inline static constexpr unsigned int Class_1_7D75B031E6A291DA_TypeDefinitionIndex = 41508;

class Class_1_7D75B031E6A291DA : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_325* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_325* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_325*))((::PBYTE)hIl2Cpp + CLASS_1_7D75B031E6A291DA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D75B031E6A291DA_DISPOSE_OFFSET))(this);
	}

	::System::Object* Method_1_DF0870E03623C994(::Class_1_105C32866538BE74* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_105C32866538BE74*))((::PBYTE)hIl2Cpp + CLASS_1_7D75B031E6A291DA_METHOD_1_DF0870E03623C994_OFFSET))(this, a1);
	}
};
