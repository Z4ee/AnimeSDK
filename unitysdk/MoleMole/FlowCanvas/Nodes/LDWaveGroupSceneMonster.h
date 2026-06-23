#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveSceneMonster.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class SceneGroupMonsterCreateData; }
namespace NodeCanvas::Framework { class Graph; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER_GENERATECREATEDATA_OFFSET UNITYSDK_OFFSET(0x158176D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15817F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15817390)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x158181B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x158181C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0x158182D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_2_OFFSET UNITYSDK_OFFSET(0x158183F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_3_OFFSET UNITYSDK_OFFSET(0x15818420)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_4_OFFSET UNITYSDK_OFFSET(0x15818430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_5_OFFSET UNITYSDK_OFFSET(0x15818440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER___BASE_GENERATECREATEDATA_OFFSET UNITYSDK_OFFSET(0x15818450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER___BASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15818460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x158184F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveGroupSceneMonster_TypeDefinitionIndex = 40312;

	class LDWaveGroupSceneMonster : public ::MoleMole::FlowCanvas::Nodes::LDWaveSceneMonster
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::SceneGroupMonsterCreateData*>*>* createSceneMonsterInputList; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void GenerateCreateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER_GENERATECREATEDATA_OFFSET))(this);
		}

		::System::Void OnCreate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER_ONCREATE_OFFSET))(this, assignedGraph);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__1_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__1_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__1_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER__REGISTERPORTS_B__1_5_OFFSET))(this);
		}

		::System::Void __base_GenerateCreateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER___BASE_GENERATECREATEDATA_OFFSET))(this);
		}

		::System::Void __base_OnCreate(::NodeCanvas::Framework::Graph* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER___BASE_ONCREATE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEGROUPSCENEMONSTER___BASE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
