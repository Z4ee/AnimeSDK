#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_EyeState.h"
#include "unitysdk/RPGTools/Timeline/Emotion/PoseDataType.h"
#include "unitysdk/Struct_2_2363FCAC272B4C45.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Timeline/TimelineClip_ClipExtrapolation.h"

namespace RPGTools::Timeline::Emotion { class EmoBakedPoseData; }
namespace RPGTools::Timeline::Emotion { class EmoTimelineClip; }
namespace RPGTools::Timeline::Emotion { class PoseData; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_METHOD_2_512BAEC7C92D0DBB_OFFSET UNITYSDK_OFFSET(0xAB611F0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_METHOD_2_7B7BD71833BFC44B_OFFSET UNITYSDK_OFFSET(0xAB61650)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_METHOD_2_B6D3DB7A75DFFB91_OFFSET UNITYSDK_OFFSET(0xAB61770)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB61100)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB61160)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB61BB0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB61BC0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB61BD0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoTimelineBehaviour_TypeDefinitionIndex = 39515;

	class EmoTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double Start; // 0x10
		::System::Double End; // 0x18
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation PostExtrapolation; // 0x20
		::UnityEngine::Playables::Playable ControllingPlayable; // 0x28
		::RPGTools::Timeline::Emotion::PoseDataType PoseDataType; // 0x38
		::RPGTools::Timeline::Emotion::EmoBakedPoseData* BakedPoseData; // 0x40
		::RPG::Client::MonoEmoPlayableGraph_EyeState EyeState; // 0x48
		::RPGTools::Timeline::Emotion::PoseData* PoseData; // 0x50
		::RPGTools::Timeline::Emotion::EmoTimelineClip* Clip; // 0x58
		::System::Single _poseTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_512BAEC7C92D0DBB(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_METHOD_2_512BAEC7C92D0DBB_OFFSET))(this, a1, a2);
		}

		::Struct_2_2363FCAC272B4C45 Method_2_B6D3DB7A75DFFB91(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::Struct_2_2363FCAC272B4C45(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_METHOD_2_B6D3DB7A75DFFB91_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_7B7BD71833BFC44B(::System::Double a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR_METHOD_2_7B7BD71833BFC44B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
