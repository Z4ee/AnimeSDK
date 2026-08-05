#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/Circle2D.h"
#include "unitysdk/Struct_2_D1DB1EFC46D2DA3E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_D1DB1EFC46D2DA3E_STRUCT_2_2D7A9B58CD9E378D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7B5490)
#define STRUCT_2_D1DB1EFC46D2DA3E_STRUCT_2_2D7A9B58CD9E378D__CTOR_OFFSET UNITYSDK_OFFSET(0x7B5430)

inline static constexpr unsigned int Struct_2_D1DB1EFC46D2DA3E_Struct_2_2D7A9B58CD9E378D_TypeDefinitionIndex = 66256;

struct alignas(8) Struct_2_D1DB1EFC46D2DA3E_Struct_2_2D7A9B58CD9E378D
{
	::Struct_2_D1DB1EFC46D2DA3E Field_2_2; // 0x10
	::Foundation::Geometry::Circle2D Field_2_1; // 0xB0
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_0; // 0xC0

	::System::Void _ctor(::Struct_2_D1DB1EFC46D2DA3E a1, ::Foundation::Geometry::Circle2D a2, ::Unity::Collections::NativeArray_1<::System::Single> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D1DB1EFC46D2DA3E, ::Foundation::Geometry::Circle2D, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + STRUCT_2_D1DB1EFC46D2DA3E_STRUCT_2_2D7A9B58CD9E378D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D1DB1EFC46D2DA3E_STRUCT_2_2D7A9B58CD9E378D_EXECUTE_OFFSET))(this, a1);
	}
};
