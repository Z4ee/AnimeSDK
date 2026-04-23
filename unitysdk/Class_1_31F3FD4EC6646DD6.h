#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_31F3FD4EC6646DD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D670C0)

inline static constexpr unsigned int Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex = 9725;

class Class_1_31F3FD4EC6646DD6 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x80B0);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x80B8);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x80C0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x36C0);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x36C4);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x36C8);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x36CC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_31F3FD4EC6646DD6__CCTOR_OFFSET))();
	}
};
