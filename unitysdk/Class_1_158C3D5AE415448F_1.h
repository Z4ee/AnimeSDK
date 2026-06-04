#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_701;
class Class_1_F0343F1186CF346B;
class Class_1_FD3C35FC150AF234;

#define CLASS_1_158C3D5AE415448F_1_METHOD_1_9DCA9E25732782F8_OFFSET UNITYSDK_OFFSET(0xA863250)
#define CLASS_1_158C3D5AE415448F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA8631C0)

inline static constexpr unsigned int Class_1_158C3D5AE415448F_1_TypeDefinitionIndex = 58585;

class Class_1_158C3D5AE415448F_1 : public ::System::Object
{
public:
	::Class_1_FD3C35FC150AF234* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_701* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_FD3C35FC150AF234* a1, ::Class_0_16E4307DCC419505_701* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD3C35FC150AF234*, ::Class_0_16E4307DCC419505_701*))((::PBYTE)hIl2Cpp + CLASS_1_158C3D5AE415448F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F0343F1186CF346B* Method_1_9DCA9E25732782F8(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_F0343F1186CF346B*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_158C3D5AE415448F_1_METHOD_1_9DCA9E25732782F8_OFFSET))(this, a1);
	}
};
