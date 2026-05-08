#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6A494F03FAA272D1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C1CB00)

inline static constexpr unsigned int Struct_2_6A494F03FAA272D1_1_TypeDefinitionIndex = 75060;

struct alignas(8) Struct_2_6A494F03FAA272D1_1
{
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A494F03FAA272D1_1_TypeDefinitionIndex)->GetStaticField(0x3F840);
	}
	::System::String* Field_2_0; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6A494F03FAA272D1_1__CCTOR_OFFSET))();
	}
};
