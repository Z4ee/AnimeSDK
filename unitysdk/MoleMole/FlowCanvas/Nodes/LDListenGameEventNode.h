#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_061E58EC483ADC82;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_BINDEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x14994100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14994EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x149947E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONEVENTREACHED_OFFSET UNITYSDK_OFFSET(0x14994B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0x149944E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x14994610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x149948A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14993600)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_START_OFFSET UNITYSDK_OFFSET(0x149937E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_UNBINDEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x14993D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x14994080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14994F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE__REGISTERPORTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x14994F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x149950C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenGameEventNode_TypeDefinitionIndex = 80475;

	class LDListenGameEventNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* coroutine; // 0xA8
		::FlowCanvas::FlowOutput* reached; // 0xB0
		::MoleMole::EntityHandle bindEntityHandle; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* eventInput; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* listenTimesInput; // 0xD0
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutput; // 0xD8
		::FlowCanvas::FlowOutput* output; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* listenerEntityInput; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isGloableInput; // 0xF0
		::System::Int32 currentListenTimes; // 0xF8
		::System::UInt32 listenEnittyId; // 0xFC
		::System::Boolean listenStart; // 0x100
		::System::Boolean bindEvent; // 0x101
		::System::Boolean bindStageChangeEvent; // 0x102
		::System::Boolean AutoRegisterOnStageChanged; // 0x103
		::System::UInt32 triggerEventEntityId; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_START_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* WaitAuthorityNotifyCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET))(this);
		}

		::System::Void OnHostChanged(::System::UInt32 hostPeerID, ::System::Boolean isNewHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONHOSTCHANGED_OFFSET))(this, hostPeerID, isNewHost);
		}

		::System::Void BindEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_BINDEVENTLISTENER_OFFSET))(this);
		}

		::System::Void OnStageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONSTAGECHANGED_OFFSET))(this);
		}

		::System::Void UnBindEventListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_UNBINDEVENTLISTENER_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void ProcessEvent(::Class_2_061E58EC483ADC82* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_061E58EC483ADC82*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_PROCESSEVENT_OFFSET))(this, evt);
		}

		::System::Void OnEventReached(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONEVENTREACHED_OFFSET))(this, entityId);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE_ONDESTROY_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__16_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE__REGISTERPORTS_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENGAMEEVENTNODE___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
