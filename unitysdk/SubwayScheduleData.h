#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberAnimWeightConfig.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberTypeWeightConfig.h"
#include "unitysdk/System/Object.h"

#define SUBWAYSCHEDULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED3AE0)

inline static constexpr unsigned int SubwayScheduleData_TypeDefinitionIndex = 45315;

class SubwayScheduleData : public ::System::Object
{
public:
	::System::Int32 SubwayEnterTime; // 0x10
	::System::Int32 SubwayExitTime; // 0x14
	::Il2CppArray<::SubwayScheduleData_SubwayMemberTypeWeightConfig>* MemberTypeWeightConfigs; // 0x18
	::Il2CppArray<::SubwayScheduleData_SubwayMemberAnimWeightConfig>* MemberAnimWeightConfigs; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBWAYSCHEDULEDATA__CTOR_OFFSET))(this);
	}
};
