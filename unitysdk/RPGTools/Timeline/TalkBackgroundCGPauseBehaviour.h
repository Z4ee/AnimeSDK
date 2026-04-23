#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class TalkBackgroundCGPauseClip; }

#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB91FBA0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB91FBC0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB91FC50)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB91FBB0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB91FC40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBackgroundCGPauseBehaviour_TypeDefinitionIndex = 45099;

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

		::System::Void set_Clip(::RPGTools::Timeline::TalkBackgroundCGPauseClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkBackgroundCGPauseClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
