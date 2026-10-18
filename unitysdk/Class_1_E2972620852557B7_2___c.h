#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_150;
class Class_1_52E21E813AA435A9;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_E2972620852557B7_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFC6DA0)
#define CLASS_1_E2972620852557B7_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC6DE0)
#define CLASS_1_E2972620852557B7_2___C__ENTERCRAFT_B__7_0_OFFSET UNITYSDK_OFFSET(0xBFC6DF0)
#define CLASS_1_E2972620852557B7_2___C__ENTERCRAFT_B__7_1_OFFSET UNITYSDK_OFFSET(0xBFC6E10)

inline static constexpr unsigned int Class_1_E2972620852557B7_2___c_TypeDefinitionIndex = 79693;

class Class_1_E2972620852557B7_2___c : public ::System::Object
{
public:
	static ::Class_1_E2972620852557B7_2___c** StaticGet___9()
	{
		return (::Class_1_E2972620852557B7_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2972620852557B7_2___c_TypeDefinitionIndex)->GetStaticField(0x60F50);
	}
	static ::System::Func_2<::Class_1_52E21E813AA435A9*, ::Class_0_16E4307DCC419505_150*>** StaticGet___9__7_1()
	{
		return (::System::Func_2<::Class_1_52E21E813AA435A9*, ::Class_0_16E4307DCC419505_150*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2972620852557B7_2___c_TypeDefinitionIndex)->GetStaticField(0x60F58);
	}
	static ::System::Func_2<::Class_1_52E21E813AA435A9*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_1_52E21E813AA435A9*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2972620852557B7_2___c_TypeDefinitionIndex)->GetStaticField(0x60F60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _EnterCraft_b__7_0(::Class_1_52E21E813AA435A9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52E21E813AA435A9*))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_2___C__ENTERCRAFT_B__7_0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_150* _EnterCraft_b__7_1(::Class_1_52E21E813AA435A9* a1)
	{
		return ((::Class_0_16E4307DCC419505_150*(*)(::PVOID, ::Class_1_52E21E813AA435A9*))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_2___C__ENTERCRAFT_B__7_1_OFFSET))(this, a1);
	}
};
