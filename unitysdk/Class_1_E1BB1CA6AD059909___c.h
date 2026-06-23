#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define CLASS_1_E1BB1CA6AD059909___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x10823890)
#define CLASS_1_E1BB1CA6AD059909___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10823840)
#define CLASS_1_E1BB1CA6AD059909___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10823880)

inline static constexpr unsigned int Class_1_E1BB1CA6AD059909___c_TypeDefinitionIndex = 80011;

class Class_1_E1BB1CA6AD059909___c : public ::System::Object
{
public:
	static ::Class_1_E1BB1CA6AD059909___c** StaticGet___9()
	{
		return (::Class_1_E1BB1CA6AD059909___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1BB1CA6AD059909___c_TypeDefinitionIndex)->GetStaticField(0x32E80);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__6_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1BB1CA6AD059909___c_TypeDefinitionIndex)->GetStaticField(0x32E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1BB1CA6AD059909___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BB1CA6AD059909___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_E1BB1CA6AD059909___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
