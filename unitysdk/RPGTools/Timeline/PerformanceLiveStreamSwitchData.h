#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPGTools/Timeline/PerformanceLiveStreamTransitionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_PERFORMANCELIVESTREAMSWITCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD034720)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformanceLiveStreamSwitchData_TypeDefinitionIndex = 45471;

	class PerformanceLiveStreamSwitchData : public ::System::Object
	{
	public:
		::System::Boolean OpenLive; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID Title; // 0x28
		::System::String* HeadIconPath; // 0x38
		::System::UInt32 DefaultAudienceNum; // 0x40
		::RPGTools::Timeline::PerformanceLiveStreamTransitionType TransitionType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMANCELIVESTREAMSWITCHDATA__CTOR_OFFSET))(this);
		}
	};
}
