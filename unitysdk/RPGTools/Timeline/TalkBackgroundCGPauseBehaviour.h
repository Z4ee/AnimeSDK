#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class TalkBackgroundCGPauseClip; }

#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE93E190)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_METHOD_3_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xE93E1B0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE93E1A0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE93E230)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBackgroundCGPauseBehaviour_TypeDefinitionIndex = 48376;

	class TalkBackgroundCGPauseBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::TalkBackgroundCGPauseClip* _Clip_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::TalkBackgroundCGPauseClip* get_Clip()
		{
			return ((::RPGTools::Timeline::TalkBackgroundCGPauseClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::TalkBackgroundCGPauseClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkBackgroundCGPauseClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void Method_3_43A478BA01FE29B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_METHOD_3_43A478BA01FE29B7_OFFSET))(this);
		}
	};
}
