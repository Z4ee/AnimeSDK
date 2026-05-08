#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_846182BC37DE078E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B3C4233791245457___C_METHOD_1_63500C779D0E514F_OFFSET UNITYSDK_OFFSET(0xE511E00)
#define CLASS_3_B3C4233791245457___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE511DB0)
#define CLASS_3_B3C4233791245457___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE511DF0)

inline static constexpr unsigned int Class_3_B3C4233791245457___c_TypeDefinitionIndex = 52175;

class Class_3_B3C4233791245457___c : public ::System::Object
{
public:
	static ::Class_3_B3C4233791245457___c** StaticGet___9()
	{
		return (::Class_3_B3C4233791245457___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3C4233791245457___c_TypeDefinitionIndex)->GetStaticField(0x340A0);
	}
	static ::System::Action_1<::Class_3_846182BC37DE078E*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_846182BC37DE078E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3C4233791245457___c_TypeDefinitionIndex)->GetStaticField(0x340A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_63500C779D0E514F(::Class_3_846182BC37DE078E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_846182BC37DE078E*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457___C_METHOD_1_63500C779D0E514F_OFFSET))(this, a1);
	}
};
