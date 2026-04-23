#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_2F246A045AA9B5FF_RtUnitHpBarStyle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_2F246A045AA9B5FF_STRUCT_2_5964903CF97AE085_COMPARETO_OFFSET UNITYSDK_OFFSET(0x161D220)

inline static constexpr unsigned int Class_3_2F246A045AA9B5FF_Struct_2_5964903CF97AE085_TypeDefinitionIndex = 67478;

struct alignas(4) Class_3_2F246A045AA9B5FF_Struct_2_5964903CF97AE085
{
	::Class_3_2F246A045AA9B5FF_RtUnitHpBarStyle Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x20

	::System::Int32 CompareTo(::Class_3_2F246A045AA9B5FF_Struct_2_5964903CF97AE085 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_2F246A045AA9B5FF_Struct_2_5964903CF97AE085))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_STRUCT_2_5964903CF97AE085_COMPARETO_OFFSET))(this, a1);
	}
};
