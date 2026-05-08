#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_8.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x125B9800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_TRIGGERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x125B99D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_TRIGGERENTITYANIMEVENT_OFFSET UNITYSDK_OFFSET(0x125B9DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_WAITTRIGGER_OFFSET UNITYSDK_OFFSET(0x125B9CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x125BA320)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTriggerAnimEventNode_TypeDefinitionIndex = 64529;

	class LDTriggerAnimEventNode : public ::FlowCanvas::Nodes::CallableFunctionNode_8<::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::List_1<::System::String*>*>
	{
	public:
		::UnityEngine::Coroutine* executeCo; // 0x40
		::System::Single timer; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap* enitytMap, ::System::Single delay, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParam, ::System::Collections::Generic::List_1<::System::String*>* TriggerParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_INVOKE_OFFSET))(this, entity, enitytMap, delay, IntParam, FloatParam, BoolParam, TriggerParam);
		}

		::System::Void TriggerAnimEvent(::MoleMole::Battle::Entity* entity, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap* entitytMap, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParam, ::System::Collections::Generic::List_1<::System::String*>* TriggerParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_TRIGGERANIMEVENT_OFFSET))(this, entity, entitytMap, IntParam, FloatParam, BoolParam, TriggerParam);
		}

		::System::Void TriggerEntityAnimEvent(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParam, ::System::Collections::Generic::List_1<::System::String*>* TriggerParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_TRIGGERENTITYANIMEVENT_OFFSET))(this, entity, IntParam, FloatParam, BoolParam, TriggerParam);
		}

		::System::Collections::IEnumerator* WaitTrigger(::MoleMole::Battle::Entity* entity, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap* enitytMap, ::System::Single delay, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatParam, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParam, ::System::Collections::Generic::List_1<::System::String*>* TriggerParam)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE_WAITTRIGGER_OFFSET))(this, entity, enitytMap, delay, IntParam, FloatParam, BoolParam, TriggerParam);
		}
	};
}
