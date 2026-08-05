#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1298C280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1298C1D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1298C5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1298C230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1298C410)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1298BC70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTMSG_OFFSET UNITYSDK_OFFSET(0x1298BCB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTVALUE_OFFSET UNITYSDK_OFFSET(0x1298BE10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1298B750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_TRYCREATEINTERACT_OFFSET UNITYSDK_OFFSET(0x1298BF70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1298C460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1298C7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1298C820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1298C860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1298C870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1298C880)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateInteractItemNode_TypeDefinitionIndex = 75418;

	class LDCreateInteractItemNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* inputSpawnPoint; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _overrideAbilityMap; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* _interactMsgDict; // 0xB8
		::System::String* inputInteractKey; // 0xC0
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutPut; // 0xC8
		::MoleMole::Battle::Entity* createEntity; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _interactValueDict; // 0xE0
		::System::Int32 inputInteractItemID; // 0xE8
		::System::Boolean isBindEvent; // 0xEC
		::System::Boolean isWaitingEntityReady; // 0xED

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void TryCreateInteract(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_TRYCREATEINTERACT_OFFSET))(this, f);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void EntityOnReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ENTITYONREADY_OFFSET))(this, entity);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEvent(::System::String* msg, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONEVENT_OFFSET))(this, msg, value);
		}

		::System::Void PrepareInteractMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTMSG_OFFSET))(this);
		}

		::System::Void PrepareInteractValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTVALUE_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__11_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
