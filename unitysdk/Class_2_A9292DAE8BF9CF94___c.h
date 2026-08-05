#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_A9292DAE8BF9CF94___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x17075B20)
#define CLASS_2_A9292DAE8BF9CF94___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17075AD0)
#define CLASS_2_A9292DAE8BF9CF94___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17075B10)

inline static constexpr unsigned int Class_2_A9292DAE8BF9CF94___c_TypeDefinitionIndex = 64482;

class Class_2_A9292DAE8BF9CF94___c : public ::System::Object
{
public:
	static ::Class_2_A9292DAE8BF9CF94___c** StaticGet___9()
	{
		return (::Class_2_A9292DAE8BF9CF94___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9292DAE8BF9CF94___c_TypeDefinitionIndex)->GetStaticField(0x43B60);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__3_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9292DAE8BF9CF94___c_TypeDefinitionIndex)->GetStaticField(0x43B68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A9292DAE8BF9CF94___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9292DAE8BF9CF94___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A9292DAE8BF9CF94___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
