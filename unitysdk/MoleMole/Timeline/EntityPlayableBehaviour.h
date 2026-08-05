#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x11D76110)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11D76400)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11D76300)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11D75F50)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x11D76430)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x11D76420)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11D75D80)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11D75DC0)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D75D40)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x11D76410)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x11D75E80)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11D75E00)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11D763A0)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11D75FB0)
#define MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x11D763F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EntityPlayableBehaviour_TypeDefinitionIndex = 40854;

	class EntityPlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::GameObject* _bindingGameObject; // 0x10
		::MoleMole::Battle::Entity* _entity; // 0x18
		::System::Boolean _needPlay; // 0x20
		::System::Boolean _isPlaying; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_2_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ENTITYPLAYABLEBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}
	};
}
