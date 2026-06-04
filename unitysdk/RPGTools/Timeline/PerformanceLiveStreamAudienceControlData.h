#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PerformanceLiveStreamAudienceControlData_AudienceControlMode.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_PERFORMANCELIVESTREAMAUDIENCECONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD034700)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformanceLiveStreamAudienceControlData_TypeDefinitionIndex = 45454;

	class PerformanceLiveStreamAudienceControlData : public ::System::Object
	{
	public:
		::RPGTools::Timeline::PerformanceLiveStreamAudienceControlData_AudienceControlMode ChangeMode; // 0x10
		::System::UInt32 IntervalValue; // 0x14
		::System::UInt32 TargetValue; // 0x18
		::System::Single Duration; // 0x1C
		::System::Single ChangeTick; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCELIVESTREAMAUDIENCECONTROLDATA__CTOR_OFFSET))(this);
		}
	};
}
