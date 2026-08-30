#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PerformanceLiveStreamBulletCommentsMode.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_PERFORMANCELIVESTREAMBULLETCONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8BE390)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformanceLiveStreamBulletControlData_TypeDefinitionIndex = 48630;

	class PerformanceLiveStreamBulletControlData : public ::System::Object
	{
	public:
		::RPGTools::Timeline::PerformanceLiveStreamBulletCommentsMode BulletMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCELIVESTREAMBULLETCONTROLDATA__CTOR_OFFSET))(this);
		}
	};
}
