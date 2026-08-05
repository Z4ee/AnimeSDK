#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_6E9783DD7C2DDC8B___C_METHOD_1_3C7C3CE5C17CF120_OFFSET UNITYSDK_OFFSET(0x11BE3510)
#define CLASS_2_6E9783DD7C2DDC8B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE34C0)
#define CLASS_2_6E9783DD7C2DDC8B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE3500)

inline static constexpr unsigned int Class_2_6E9783DD7C2DDC8B___c_TypeDefinitionIndex = 45801;

class Class_2_6E9783DD7C2DDC8B___c : public ::System::Object
{
public:
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__2_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E9783DD7C2DDC8B___c_TypeDefinitionIndex)->GetStaticField(0x403B0);
	}
	static ::Class_2_6E9783DD7C2DDC8B___c** StaticGet___9()
	{
		return (::Class_2_6E9783DD7C2DDC8B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6E9783DD7C2DDC8B___c_TypeDefinitionIndex)->GetStaticField(0x403B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6E9783DD7C2DDC8B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E9783DD7C2DDC8B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C7C3CE5C17CF120(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_6E9783DD7C2DDC8B___C_METHOD_1_3C7C3CE5C17CF120_OFFSET))(this, a1);
	}
};
