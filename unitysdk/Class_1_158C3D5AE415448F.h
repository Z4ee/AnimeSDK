#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_583;
class Class_1_5875D7190B27472D;
class Class_1_FD3C35FC150AF234;

#define CLASS_1_158C3D5AE415448F_METHOD_1_CA08B60578012F72_OFFSET UNITYSDK_OFFSET(0x8DF6190)
#define CLASS_1_158C3D5AE415448F__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF6100)

inline static constexpr unsigned int Class_1_158C3D5AE415448F_TypeDefinitionIndex = 50889;

class Class_1_158C3D5AE415448F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_583* Field_1_1; // 0x10
	::Class_1_FD3C35FC150AF234* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_FD3C35FC150AF234* a1, ::Class_0_16E4307DCC419505_583* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD3C35FC150AF234*, ::Class_0_16E4307DCC419505_583*))((::PBYTE)hIl2Cpp + CLASS_1_158C3D5AE415448F__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_5875D7190B27472D* Method_1_CA08B60578012F72(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_5875D7190B27472D*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_158C3D5AE415448F_METHOD_1_CA08B60578012F72_OFFSET))(this, a1);
	}
};
