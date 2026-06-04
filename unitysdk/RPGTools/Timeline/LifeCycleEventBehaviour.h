#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_0ECA722A6AF95D2B;
namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace System { class Object; }
namespace UnityEngine { class Renderer; }

#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD026F40)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0268A0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xD026FC0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD026EB0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0xD027130)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD027120)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__ONGRAPHSTOP_B__9_0_OFFSET UNITYSDK_OFFSET(0xD027180)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD0272F0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0272D0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xD027300)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD0272E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LifeCycleEventBehaviour_TypeDefinitionIndex = 45440;

	class LifeCycleEventBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Int32* StaticGet_EyeShadowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LifeCycleEventBehaviour_TypeDefinitionIndex)->GetStaticField(0x4380);
		}
		static ::System::Int32* StaticGet_ShadowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LifeCycleEventBehaviour_TypeDefinitionIndex)->GetStaticField(0x4384);
		}
		static ::System::Int32* StaticGet_ShadowThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LifeCycleEventBehaviour_TypeDefinitionIndex)->GetStaticField(0x4388);
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

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
		}
	};
}
