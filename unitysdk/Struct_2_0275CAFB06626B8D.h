#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0275CAFB06626B8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x130666F0)

inline static constexpr unsigned int Struct_2_0275CAFB06626B8D_TypeDefinitionIndex = 67530;

struct alignas(8) Struct_2_0275CAFB06626B8D
{
	static ::System::String** StaticGet_Field_2_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0275CAFB06626B8D_TypeDefinitionIndex)->GetStaticField(0x3B310);
	}
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x1C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0275CAFB06626B8D__CCTOR_OFFSET))();
	}
};
