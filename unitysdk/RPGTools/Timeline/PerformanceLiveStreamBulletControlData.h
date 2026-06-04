#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PerformanceLiveStreamBulletCommentsMode.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_PERFORMANCELIVESTREAMBULLETCONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD034710)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformanceLiveStreamBulletControlData_TypeDefinitionIndex = 45461;

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
