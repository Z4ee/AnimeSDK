#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_01B94E8A7E4DDFF4_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B7B2D0)

inline static constexpr unsigned int Class_1_01B94E8A7E4DDFF4_2_TypeDefinitionIndex = 52246;

class Class_1_01B94E8A7E4DDFF4_2 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_2_TypeDefinitionIndex)->GetStaticField(0x4F660);
	}
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4_2__CCTOR_OFFSET))();
	}
};
