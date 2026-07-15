#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_2C6BB5BD685E1939_OFFSET UNITYSDK_OFFSET(0x199944F0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_BE1FA6C0D940BC7C_OFFSET UNITYSDK_OFFSET(0x19993C00)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0x199940D0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x19993ED0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19994020)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19993B50)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x19994540)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaySimpleTalkMixer_TypeDefinitionIndex = 46451;

	class PlaySimpleTalkMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double _Duration; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* _TimelineClips; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ClipOrder; // 0x28
		::System::Int32 _LastClearMarkerClipIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_BE1FA6C0D940BC7C(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_BE1FA6C0D940BC7C_OFFSET))(this, a1);
		}

		::System::Void Method_2_C7B58231E4F61838(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_C7B58231E4F61838_OFFSET))(this, a1);
		}

		::System::Void Method_2_2C6BB5BD685E1939(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_2C6BB5BD685E1939_OFFSET))(this, a1);
		}
	};
}
