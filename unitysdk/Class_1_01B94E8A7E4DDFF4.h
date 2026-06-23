#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_01B94E8A7E4DDFF4__CCTOR_OFFSET UNITYSDK_OFFSET(0x145C5F30)

inline static constexpr unsigned int Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex = 39642;

class Class_1_01B94E8A7E4DDFF4 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0x39140);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0x39148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4__CCTOR_OFFSET))();
	}
};
