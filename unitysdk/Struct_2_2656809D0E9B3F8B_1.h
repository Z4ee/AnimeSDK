#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_073D57188FA1FF17.h"
#include "unitysdk/Enum_3_E5CB5EEA5E0DD1C0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2656809D0E9B3F8B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

inline static constexpr unsigned int Struct_2_2656809D0E9B3F8B_1_TypeDefinitionIndex = 87262;

struct alignas(4) Struct_2_2656809D0E9B3F8B_1
{
	::Enum_3_073D57188FA1FF17 Field_2_0; // 0x10
	::Enum_3_E5CB5EEA5E0DD1C0 Field_2_1; // 0x14

	::System::Void _ctor(::Enum_3_073D57188FA1FF17 a1, ::Enum_3_E5CB5EEA5E0DD1C0 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_073D57188FA1FF17, ::Enum_3_E5CB5EEA5E0DD1C0))((::PBYTE)hIl2Cpp + STRUCT_2_2656809D0E9B3F8B_1__CTOR_OFFSET))(this, a1, a2);
	}
};
