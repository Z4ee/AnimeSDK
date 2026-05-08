#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_01B94E8A7E4DDFF4_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13180800)

inline static constexpr unsigned int Class_1_01B94E8A7E4DDFF4_4_TypeDefinitionIndex = 63840;

class Class_1_01B94E8A7E4DDFF4_4 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_4_TypeDefinitionIndex)->GetStaticField(0x37160);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_4_TypeDefinitionIndex)->GetStaticField(0x37168);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4_4__CCTOR_OFFSET))();
	}
};
