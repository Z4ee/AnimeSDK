#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int SubwayScheduleData_SubwayMemberTypeWeightConfig_TypeDefinitionIndex = 44446;

struct alignas(8) SubwayScheduleData_SubwayMemberTypeWeightConfig
{
	::System::String* MemberType; // 0x10
	::System::Single Weight; // 0x18
};
