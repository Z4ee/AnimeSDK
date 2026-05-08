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

#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONANIMSTATEFRAMEREACHED_OFFSET UNITYSDK_OFFSET(0x1603C270)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONENTITYLOST_OFFSET UNITYSDK_OFFSET(0x1603C220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1603C400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_REGISTERLISTENER_OFFSET UNITYSDK_OFFSET(0x1603BA00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1603B180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_START_OFFSET UNITYSDK_OFFSET(0x1603B360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION_UNREGISTERLISTENER_OFFSET UNITYSDK_OFFSET(0x1603C0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1603C570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDANIMSTATECOMPLETIONDETECTION__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1603C5C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAnimStateCompletionDetection_TypeDefinitionIndex = 59070;

	class LDAnimStateCompletionDetection : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* transitionOutTriggerInput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* animStateFrameInput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* animStateInput; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::AnimStateCheckType>* stateDetectionTypeInput; // 0xC8
		::FlowCanvas::FlowOutput* conditionReach; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* animStateLayerInput; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* animStateFrameCompareInput; // 0xE8
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
