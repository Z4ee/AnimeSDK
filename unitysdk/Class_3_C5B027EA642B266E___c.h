#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DEC22E9E3CAB5F01;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C5B027EA642B266E___C_METHOD_1_C395752EC506055F_OFFSET UNITYSDK_OFFSET(0x16EE31C0)
#define CLASS_3_C5B027EA642B266E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EE3170)
#define CLASS_3_C5B027EA642B266E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE31B0)

inline static constexpr unsigned int Class_3_C5B027EA642B266E___c_TypeDefinitionIndex = 76493;

class Class_3_C5B027EA642B266E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_DEC22E9E3CAB5F01*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_DEC22E9E3CAB5F01*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C5B027EA642B266E___c_TypeDefinitionIndex)->GetStaticField(0x45CE0);
	}
	static ::Class_3_C5B027EA642B266E___c** StaticGet___9()
	{
		return (::Class_3_C5B027EA642B266E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C5B027EA642B266E___c_TypeDefinitionIndex)->GetStaticField(0x45CE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C395752EC506055F(::Class_3_DEC22E9E3CAB5F01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DEC22E9E3CAB5F01*))((::PBYTE)hIl2Cpp + CLASS_3_C5B027EA642B266E___C_METHOD_1_C395752EC506055F_OFFSET))(this, a1);
	}
};
