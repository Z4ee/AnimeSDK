#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Animator; }

#define FLOWCANVAS_NODES_ANIMATOREVENTS_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1ADAB930)
#define FLOWCANVAS_NODES_ANIMATOREVENTS_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1ADAB8B0)
#define FLOWCANVAS_NODES_ANIMATOREVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1ADAB4D0)
#define FLOWCANVAS_NODES_ANIMATOREVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1ADAB5D0)
#define FLOWCANVAS_NODES_ANIMATOREVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1ADAB740)
#define FLOWCANVAS_NODES_ANIMATOREVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAB9C0)
#define FLOWCANVAS_NODES_ANIMATOREVENTS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1ADABA10)
#define FLOWCANVAS_NODES_ANIMATOREVENTS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1ADABA20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnimatorEvents_TypeDefinitionIndex = 27934;

	class AnimatorEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Animator*>
	{
	public:
		::UnityEngine::Animator* receiver; // 0xC0
		::FlowCanvas::FlowOutput* onAnimatorMove; // 0xC8
		::FlowCanvas::FlowOutput* onAnimatorIK; // 0xD0
		::System::Int32 layerIndex; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnAnimatorMove(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS_ONANIMATORMOVE_OFFSET))(this, msg);
		}

		::System::Void OnAnimatorIK(::ParadoxNotion::EventData_1<::System::Int32> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::System::Int32>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS_ONANIMATORIK_OFFSET))(this, msg);
		}

		::UnityEngine::Animator* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANIMATOREVENTS__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
