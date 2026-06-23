#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_DURATIONTIME_OFFSET UNITYSDK_OFFSET(0x183A5090)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x183A5060)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x183A5040)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_METHOD_2_0043BC75B602D2E3_OFFSET UNITYSDK_OFFSET(0x183A50C0)
#define MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x183A50B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ShotActiveBehaviour_TypeDefinitionIndex = 64539;

	class ShotActiveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean isUnActive; // 0x10
		::UnityEngine::Timeline::TimelineClip* _clip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Double get_StartTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_EndTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_ENDTIME_OFFSET))(this);
		}

		::System::Double get_DurationTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_GET_DURATIONTIME_OFFSET))(this);
		}

		::System::Void Method_2_0043BC75B602D2E3(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVEBEHAVIOUR_METHOD_2_0043BC75B602D2E3_OFFSET))(this, a1);
		}
	};
}
