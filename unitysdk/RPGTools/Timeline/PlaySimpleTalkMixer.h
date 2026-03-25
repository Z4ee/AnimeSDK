#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_2C6BB5BD685E1939_OFFSET UNITYSDK_OFFSET(0xAB82380)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_4FFABA760D86B308_OFFSET UNITYSDK_OFFSET(0xAB81B40)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_AB1A253BFABC50A9_OFFSET UNITYSDK_OFFSET(0xAB81FC0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xAB81DF0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB81F30)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB81A90)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB823D0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xAB823F0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB82400)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB823E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaySimpleTalkMixer_TypeDefinitionIndex = 39066;

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

		::System::Void Method_2_4FFABA760D86B308(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_4FFABA760D86B308_OFFSET))(this, a1);
		}

		::System::Void Method_2_AB1A253BFABC50A9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_AB1A253BFABC50A9_OFFSET))(this, a1);
		}

		::System::Void Method_2_2C6BB5BD685E1939(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER_METHOD_2_2C6BB5BD685E1939_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKMIXER___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}
	};
}
