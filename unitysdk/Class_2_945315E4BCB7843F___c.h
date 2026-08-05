#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define CLASS_2_945315E4BCB7843F___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x13C0D9E0)
#define CLASS_2_945315E4BCB7843F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C0D990)
#define CLASS_2_945315E4BCB7843F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C0D9D0)

inline static constexpr unsigned int Class_2_945315E4BCB7843F___c_TypeDefinitionIndex = 59929;

class Class_2_945315E4BCB7843F___c : public ::System::Object
{
public:
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__20_1()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_945315E4BCB7843F___c_TypeDefinitionIndex)->GetStaticField(0x353D0);
	}
	static ::Class_2_945315E4BCB7843F___c** StaticGet___9()
	{
		return (::Class_2_945315E4BCB7843F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_945315E4BCB7843F___c_TypeDefinitionIndex)->GetStaticField(0x353D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
