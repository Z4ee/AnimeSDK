#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_47B08E0540187474__CTOR_OFFSET UNITYSDK_OFFSET(0x7F1640)

inline static constexpr unsigned int Struct_2_47B08E0540187474_TypeDefinitionIndex = 49038;

struct alignas(4) Struct_2_47B08E0540187474
{
	::Foundation::Unreal::FTransform3D Field_2_1; // 0x10
	::Struct_2_6402D4A3EAB8BDC8 Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_47B08E0540187474__CTOR_OFFSET))(this, a1);
	}
};
