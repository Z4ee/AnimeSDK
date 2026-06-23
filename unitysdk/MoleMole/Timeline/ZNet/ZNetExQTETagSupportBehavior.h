#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class MihoyoEffectTagControlTrack; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_0565EC1D7A779E94_OFFSET UNITYSDK_OFFSET(0x16102BB0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_1427A1176F962DD9_OFFSET UNITYSDK_OFFSET(0x16103160)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x161027E0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16103420)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x16103410)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x161027F0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x16102800)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_EFE74C3B465500CF_OFFSET UNITYSDK_OFFSET(0x161031E0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_F42D44FD4BE08DA2_OFFSET UNITYSDK_OFFSET(0x16102810)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_FF2301ED2F275823_OFFSET UNITYSDK_OFFSET(0x16102C00)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x16102620)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x161026A0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x161025D0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x161022C0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16102720)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportBehavior_TypeDefinitionIndex = 80700;

	class ZNetExQTETagSupportBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* mainTLDirector; // 0x10
		::UnityEngine::Timeline::GroupTrack* volG; // 0x18
		::MoleMole::Timeline::MihoyoEffectTagControlTrack* volTagData; // 0x20
		::UnityEngine::Timeline::TimelineAsset* lightTL; // 0x28
		::MoleMole::Timeline::MihoyoEffectTagControlTrack* lightTagData; // 0x30
		::UnityEngine::Playables::PlayableDirector* lightDirector; // 0x38
		::UnityEngine::Timeline::GroupTrack* modelEffectG; // 0x40
		::MoleMole::Timeline::MihoyoEffectTagControlTrack* modelEffectTagData; // 0x48
		::System::Collections::Generic::HashSet_1<::UnityEngine::Light*>* m_setLightComShowMap; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_F42D44FD4BE08DA2(::UnityEngine::Timeline::AnimationTrack* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_F42D44FD4BE08DA2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_0565EC1D7A779E94(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_0565EC1D7A779E94_OFFSET))(this, a1);
		}

		::System::Void Method_2_FF2301ED2F275823(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::GroupTrack* a2, ::UnityEngine::Timeline::TimelineAsset* a3, ::UnityEngine::Playables::PlayableDirector* a4, ::UnityEngine::Timeline::GroupTrack* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::GroupTrack*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::GroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_FF2301ED2F275823_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_2_1427A1176F962DD9(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_1427A1176F962DD9_OFFSET))(this, a1);
		}

		::System::Void Method_2_EFE74C3B465500CF(::UnityEngine::Timeline::AnimationTrack* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_EFE74C3B465500CF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_METHOD_2_41A074549EF25F63_OFFSET))(this);
		}
	};
}
