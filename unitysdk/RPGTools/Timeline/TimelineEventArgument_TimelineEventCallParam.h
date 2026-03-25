#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/TimelineEventArgument_ParamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_TIMELINEEVENTCALLPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xABAF130)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineEventArgument_TimelineEventCallParam_TypeDefinitionIndex = 39246;

	class TimelineEventArgument_TimelineEventCallParam : public ::System::Object
	{
	public:
		::RPGTools::Timeline::TimelineEventArgument_ParamType Type; // 0x10
		::System::String* ParamName; // 0x18
		::System::String* StrValue; // 0x20
		::System::Single FloatValue; // 0x28
		::System::Int32 IntValue; // 0x2C
		::UnityEngine::Vector3 Vector3Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_TIMELINEEVENTCALLPARAM__CTOR_OFFSET))(this);
		}
	};
}
