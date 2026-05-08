#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEPERFORMANCERECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x15868D00)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelinePerformanceRecorder_TypeDefinitionIndex = 69750;

	class RuntimeTimelinePerformanceRecorder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEPERFORMANCERECORDER__CTOR_OFFSET))(this);
		}
	};
}
