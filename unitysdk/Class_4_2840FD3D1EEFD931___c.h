#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define CLASS_4_2840FD3D1EEFD931___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x12A5B150)
#define CLASS_4_2840FD3D1EEFD931___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A5B100)
#define CLASS_4_2840FD3D1EEFD931___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5B140)

inline static constexpr unsigned int Class_4_2840FD3D1EEFD931___c_TypeDefinitionIndex = 41529;

class Class_4_2840FD3D1EEFD931___c : public ::System::Object
{
public:
	static ::Class_4_2840FD3D1EEFD931___c** StaticGet___9()
	{
		return (::Class_4_2840FD3D1EEFD931___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2840FD3D1EEFD931___c_TypeDefinitionIndex)->GetStaticField(0x49880);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__21_1()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_4_2840FD3D1EEFD931___c_TypeDefinitionIndex)->GetStaticField(0x49888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_2840FD3D1EEFD931___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2840FD3D1EEFD931___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_4_2840FD3D1EEFD931___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
