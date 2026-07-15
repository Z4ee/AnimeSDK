#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F480A087F622C7D7_RtUnitHpBarStyle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_F480A087F622C7D7_STRUCT_2_9E8E7FE99BD48FA5_COMPARETO_OFFSET UNITYSDK_OFFSET(0x394CCF0)

inline static constexpr unsigned int Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5_TypeDefinitionIndex = 69924;

struct alignas(4) Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5
{
	::Class_3_F480A087F622C7D7_RtUnitHpBarStyle Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x20

	::System::Int32 CompareTo(::Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_STRUCT_2_9E8E7FE99BD48FA5_COMPARETO_OFFSET))(this, a1);
	}
};
