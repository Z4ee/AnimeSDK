#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TRANSFORMEVENTS_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1EA94AF0)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1EA94A30)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EA945E0)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EA94730)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1EA948B0)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA94BB0)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1EA94C00)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1EA94C10)
#define FLOWCANVAS_NODES_TRANSFORMEVENTS__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1EA94C20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TransformEvents_TypeDefinitionIndex = 30835;

	class TransformEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Transform*>
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* children; // 0xC0
		::UnityEngine::Transform* receiver; // 0xC8
		::FlowCanvas::FlowOutput* onParentChanged; // 0xD0
		::UnityEngine::Transform* parent; // 0xD8
		::FlowCanvas::FlowOutput* onChildrenChanged; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnTransformParentChanged(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS_ONTRANSFORMPARENTCHANGED_OFFSET))(this, msg);
		}

		::System::Void OnTransformChildrenChanged(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this, msg);
		}

		::UnityEngine::Transform* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::Transform* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* _RegisterPorts_b__5_2()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRANSFORMEVENTS__REGISTERPORTS_B__5_2_OFFSET))(this);
		}
	};
}
