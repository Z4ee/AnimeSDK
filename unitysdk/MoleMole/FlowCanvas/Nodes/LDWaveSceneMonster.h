#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class MonoSpawnMonsterConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace MoleMole::FlowCanvas::Nodes { class SceneMonsterCreateData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_BEGIN_OFFSET UNITYSDK_OFFSET(0x13ED6DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_COLLECTMONSTERCREATEDATA_OFFSET UNITYSDK_OFFSET(0x13ED6B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x13ED6F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GENERATECREATEDATA_OFFSET UNITYSDK_OFFSET(0x13ED6440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GENERATEMONSTERCREATDATA_OFFSET UNITYSDK_OFFSET(0x13ED6CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x13ED6E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x13ED6EA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x13ED7580)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x13ED7920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_ONRESET_OFFSET UNITYSDK_OFFSET(0x13ED75D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13ED60C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x13ED72B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED7BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x13ED7BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x13ED7C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_2_OFFSET UNITYSDK_OFFSET(0x13ED7DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_3_OFFSET UNITYSDK_OFFSET(0x13ED7DD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_4_OFFSET UNITYSDK_OFFSET(0x13ED7DE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_5_OFFSET UNITYSDK_OFFSET(0x13ED7DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_BEGIN_OFFSET UNITYSDK_OFFSET(0x13ED7E00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x13ED7E30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x13ED7E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x13ED7E50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x13ED7E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x13ED7E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x13ED7E80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13ED7E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x13ED7EA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveSceneMonster_TypeDefinitionIndex = 79337;

	class LDWaveSceneMonster : public ::MoleMole::FlowCanvas::Nodes::LDWaveMonster
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* monsterIDTypeList; // 0x1B0
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>* monsterList; // 0x1B8
		::System::String* lastGenerateDataStage; // 0x1C0
		::System::Collections::Generic::List_1<::MoleMole::Config::CampType>* monsterCampList; // 0x1C8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::SceneMonsterCreateData*>*>* createSceneMonsterInputList; // 0x1D0
		::System::Boolean preLoadGenerateMonsterData; // 0x1D8
		::System::Boolean alreadyHasCreateData; // 0x1D9
		::MoleMole::FlowCanvas::Nodes::MonsterIDType currentMonsterIdType; // 0x1DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void GenerateCreateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GENERATECREATEDATA_OFFSET))(this);
		}

		::System::Void CollectMonsterCreateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_COLLECTMONSTERCREATEDATA_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_BEGIN_OFFSET))(this, f);
		}

		::System::Int32 GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* GetCreateListDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GETCREATELISTDATABYINDEX_OFFSET))(this, index);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateData* GenerateMonsterCreatData(::MoleMole::MonoSpawnMonsterConfig* spawInfo, ::System::String* spawnPointName, ::System::Single createInterval)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateData*(*)(::PVOID, ::MoleMole::MonoSpawnMonsterConfig*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GENERATEMONSTERCREATDATA_OFFSET))(this, spawInfo, spawnPointName, createInterval);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_DOPRELOAD_OFFSET))(this);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_ONRESET_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__8_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__8_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__8_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__8_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__8_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER__REGISTERPORTS_B__8_5_OFFSET))(this);
		}

		::System::Void __base_Begin(::FlowCanvas::Flow P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_BEGIN_OFFSET))(this, P0);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_DOPRELOAD_OFFSET))(this);
		}

		::System::Int32 __base_GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* __base_GetCreateListDataByIndex(::System::Int32 P0)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_GETCREATELISTDATABYINDEX_OFFSET))(this, P0);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType __base_GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Void __base_OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESCENEMONSTER___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}
	};
}
