#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E4446863CEE2BD81.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_FE9BD044832BC9C3__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD80)

inline static constexpr unsigned int Struct_2_FE9BD044832BC9C3_TypeDefinitionIndex = 60703;

struct alignas(8) Struct_2_FE9BD044832BC9C3
{
	// static const ::System::Int32 Field_2_0 = 0xC; // 0x0
	::System::Int32 Field_2_1; // 0x10
	::Struct_2_E4446863CEE2BD81 Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::Struct_2_E4446863CEE2BD81 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_E4446863CEE2BD81))((::PBYTE)hIl2Cpp + STRUCT_2_FE9BD044832BC9C3__CTOR_OFFSET))(this, a1, a2);
	}
};
