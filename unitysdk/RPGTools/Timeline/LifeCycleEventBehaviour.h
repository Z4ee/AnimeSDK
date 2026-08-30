#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_0ECA722A6AF95D2B;
namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace System { class Object; }
namespace UnityEngine { class Renderer; }

#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B595340)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B594B00)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1B5953C0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B5952B0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B595530)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B595520)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__ONGRAPHSTOP_B__9_0_OFFSET UNITYSDK_OFFSET(0x1B595580)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LifeCycleEventBehaviour_TypeDefinitionIndex = 48609;

	class LifeCycleEventBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Int32* StaticGet_ShadowThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LifeCycleEventBehaviour_TypeDefinitionIndex)->GetStaticField(0xFC80);
		}
		static ::System::Int32* StaticGet_ShadowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LifeCycleEventBehaviour_TypeDefinitionIndex)->GetStaticField(0xFC84);
		}
		static ::System::Int32* StaticGet_EyeShadowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LifeCycleEventBehaviour_TypeDefinitionIndex)->GetStaticField(0xFC88);
		}
		::RPGTools::Timeline::LifeCycleEventArgument* Argument; // 0x10
		::UnityEngine::Renderer* _Renderer; // 0x18
		::Class_1_0ECA722A6AF95D2B* _Argument; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void _OnGraphStop_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__ONGRAPHSTOP_B__9_0_OFFSET))(this);
		}
	};
}
