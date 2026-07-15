#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

inline static constexpr unsigned int SubwayScheduleData_SubwayMemberAnimWeightConfig_TypeDefinitionIndex = 45317;

struct alignas(8) SubwayScheduleData_SubwayMemberAnimWeightConfig
{
	::System::String* AnimationType; // 0x10
	::UnityEngine::Vector2 WeightRange; // 0x18
};
