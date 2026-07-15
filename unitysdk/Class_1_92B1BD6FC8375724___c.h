#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_92B1BD6FC8375724___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17537790)
#define CLASS_1_92B1BD6FC8375724___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175377C0)
#define CLASS_1_92B1BD6FC8375724___C__SEND_B__6_0_OFFSET UNITYSDK_OFFSET(0x175377D0)

inline static constexpr unsigned int Class_1_92B1BD6FC8375724___c_TypeDefinitionIndex = 66248;

class Class_1_92B1BD6FC8375724___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_296A7AC90F028539*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_296A7AC90F028539*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724___c_TypeDefinitionIndex)->GetStaticField(0x5A970);
	}
	static ::Class_1_92B1BD6FC8375724___c** StaticGet___9()
	{
		return (::Class_1_92B1BD6FC8375724___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724___c_TypeDefinitionIndex)->GetStaticField(0x5A978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__CTOR_OFFSET))(this);
	}

	::System::Void _Send_b__6_0(::Class_1_296A7AC90F028539* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__SEND_B__6_0_OFFSET))(this, a1);
	}
};
