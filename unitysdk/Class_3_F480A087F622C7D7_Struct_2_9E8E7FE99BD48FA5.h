#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F480A087F622C7D7_RtUnitHpBarStyle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_F480A087F622C7D7_STRUCT_2_9E8E7FE99BD48FA5_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AB1650)

inline static constexpr unsigned int Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5_TypeDefinitionIndex = 73181;

struct alignas(4) Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5
{
	::Class_3_F480A087F622C7D7_RtUnitHpBarStyle CFNAKPADAEB; // 0x10
	::UnityEngine::Vector3 FKKMPFBKGNN; // 0x14
	::System::Single GGHMIADFJHH; // 0x20

	::System::Int32 CompareTo(::Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_STRUCT_2_9E8E7FE99BD48FA5_COMPARETO_OFFSET))(this, a1);
	}
};
