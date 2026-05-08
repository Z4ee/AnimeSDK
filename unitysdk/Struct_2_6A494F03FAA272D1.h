#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6A494F03FAA272D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F515E0)

inline static constexpr unsigned int Struct_2_6A494F03FAA272D1_TypeDefinitionIndex = 54795;

struct alignas(8) Struct_2_6A494F03FAA272D1
{
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A494F03FAA272D1_TypeDefinitionIndex)->GetStaticField(0x342E0);
	}
	::System::String* Field_2_0; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6A494F03FAA272D1__CCTOR_OFFSET))();
	}
};
