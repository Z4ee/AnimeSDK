#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4BA5BF6D6AE6A5EC;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class GuijiDiceRollClip; }
namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE85FF20)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xE8607E0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0xE860500)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE860BF0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xE861230)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xE860BA0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xE860EC0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE860310)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xE860230)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xE8610A0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xE8610F0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xE8603B0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE860A60)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE85FF40)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE860F90)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE860CA0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE85FF30)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8615F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int GuijiDiceRollBehaviour_TypeDefinitionIndex = 48594;

	class GuijiDiceRollBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::GuijiDiceRollClip* _Clip_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::UnityEngine::Transform* _RootTrans; // 0x20
		::UnityEngine::Transform* _ArtTrans; // 0x28
		::UnityEngine::Animator* _Animator; // 0x30
		::RPG::Client::RPGAnimationEvent* _AnimationEvent; // 0x38
		::UnityEngine::Transform* _ResultNode; // 0x40
		::Class_1_4BA5BF6D6AE6A5EC* _EffectController; // 0x48
		::UnityEngine::Playables::Playable _Playable; // 0x50
		::UnityEngine::Playables::FrameData _FrameData; // 0x60
		::UnityEngine::AnimationClip* _AnimationClip; // 0xA0
		::UnityEngine::Animations::AnimationClipPlayable _AnimationPlayable; // 0xA8
		::UnityEngine::Playables::PlayableGraph _AnimationGraph; // 0xB8
		::UnityEngine::Vector3 _TargetPosition; // 0xC8
		::UnityEngine::Quaternion _TargetRotation; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::GuijiDiceRollClip* get_Clip()
		{
			return ((::RPGTools::Timeline::GuijiDiceRollClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::GuijiDiceRollClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::GuijiDiceRollClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_2_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_2_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_2_11D5322717FDFD9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_11D5322717FDFD9D_OFFSET))(this);
		}

		::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
		}

		::System::Void Method_2_B732DC7FA82BA621()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
		}

		::System::Void Method_2_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_EC2B405D0723571D_OFFSET))(this);
		}

		::System::Void Method_2_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_7646FFE662147970_OFFSET))(this);
		}

		::System::Void Method_2_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_2_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_2_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
