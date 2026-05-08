#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_CREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1498D0F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1498DF60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1498CB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1498C920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1498CD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__CALLMONSTEROUTPUT_OFFSET UNITYSDK_OFFSET(0x1498DEF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1498E250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1498E2A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1498E360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE___BASE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1498E370)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateMonsterSyncNode_TypeDefinitionIndex = 79845;

	class LDCreateMonsterSyncNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Config::CampType>* inputCamp; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputAI; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* inputMonsterIDType; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* overrideMonsterLevel; // 0xC0
		::MoleMole::Battle::Entity* createEntity; // 0xC8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutPut; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* inputSpawnPoint; // 0xD8
		::FlowCanvas::FlowOutput* output; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* inputMonsterId; // 0xE8
		::System::Boolean _IsCreateMyInOut; // 0xF0
		::System::Boolean isWaitingEntityReady; // 0xF1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void TryCreateMonster(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_TRYCREATEMONSTER_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* CreateMonster(::FlowCanvas::Flow f, ::System::Int32 monsterId, ::System::String* spawnPointName, ::MoleMole::Config::CampType camp, ::System::Int32 aiConfigID, ::System::Boolean isAddInteract)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::FlowCanvas::Flow, ::System::Int32, ::System::String*, ::MoleMole::Config::CampType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_CREATEMONSTER_OFFSET))(this, f, monsterId, spawnPointName, camp, aiConfigID, isAddInteract);
		}

		::System::Void _CallMonsterOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__CALLMONSTEROUTPUT_OFFSET))(this);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE_ONENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__11_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE__REGISTERPORTS_B__11_1_OFFSET))(this);
		}

		::System::Void __base_OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE___BASE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}
	};
}
