#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/AnimStateCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NumberCompareType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONANIMSTATEFRAMEREACHED_OFFSET UNITYSDK_OFFSET(0x12BAF960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONENTITYLOST_OFFSET UNITYSDK_OFFSET(0x12BAF910)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONFINISH_OFFSET UNITYSDK_OFFSET(0x12BAFAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_REGISTERLISTENER_OFFSET UNITYSDK_OFFSET(0x12BAF0F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BAE880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_START_OFFSET UNITYSDK_OFFSET(0x12BAEA60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_UNREGISTERLISTENER_OFFSET UNITYSDK_OFFSET(0x12BAF7A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAFC60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x12BAFCB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAnimStateCompletionDetection_TypeDefinitionIndex = 63670;

	class LDAnimStateCompletionDetection : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* animStateFrameCompareInput; // 0xB0
		::FlowCanvas::FlowOutput* conditionReach; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* animStateFrameInput; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* animStateLayerInput; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* animStateInput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Boolean>* transitionOutTriggerInput; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::AnimStateCheckType>* stateDetectionTypeInput; // 0xE8
		::System::Int32 listenIdx; // 0xF0
		::System::UInt32 listenId; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_START_OFFSET))(this, f);
		}

		::System::Void RegisterListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_REGISTERLISTENER_OFFSET))(this);
		}

		::System::Void UnRegisterListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_UNREGISTERLISTENER_OFFSET))(this);
		}

		::System::Void OnEntityLost(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONENTITYLOST_OFFSET))(this, entityId);
		}

		::System::Void OnAnimStateFrameReached(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONANIMSTATEFRAMEREACHED_OFFSET))(this, entityId);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONFINISH_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}
	};
}
