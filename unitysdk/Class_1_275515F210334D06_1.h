#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28B1BE3C691073E3;

#define CLASS_1_275515F210334D06_1_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x18B92620)
#define CLASS_1_275515F210334D06_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B92670)

inline static constexpr unsigned int Class_1_275515F210334D06_1_TypeDefinitionIndex = 72988;

class Class_1_275515F210334D06_1 : public ::System::Object
{
public:
	::Class_1_28B1BE3C691073E3* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275515F210334D06_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_28B1BE3C691073E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28B1BE3C691073E3*))((::PBYTE)hIl2Cpp + CLASS_1_275515F210334D06_1_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
