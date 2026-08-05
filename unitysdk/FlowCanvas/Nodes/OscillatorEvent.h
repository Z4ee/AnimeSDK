#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class AnimationCurve; }

#define FLOWCANVAS_NODES_OSCILLATOREVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EF8A300)
#define FLOWCANVAS_NODES_OSCILLATOREVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF8A240)
#define FLOWCANVAS_NODES_OSCILLATOREVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EF8A310)
#define FLOWCANVAS_NODES_OSCILLATOREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8A0A0)
#define FLOWCANVAS_NODES_OSCILLATOREVENT__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1EF8A440)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int OscillatorEvent_TypeDefinitionIndex = 29864;

	class OscillatorEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationCurve*>* curve; // 0xA8
		::FlowCanvas::FlowOutput* low; // 0xB0
		::FlowCanvas::FlowOutput* hi; // 0xB8
		::System::Single value; // 0xC0
		::System::Single time; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OSCILLATOREVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OSCILLATOREVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OSCILLATOREVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OSCILLATOREVENT_UPDATE_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__6_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OSCILLATOREVENT__REGISTERPORTS_B__6_0_OFFSET))(this);
		}
	};
}
