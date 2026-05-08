#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace MoleMole::FlowCanvas::Nodes { class PatternMonsterCreate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_ACTIVEPRELOADMONSTER_OFFSET UNITYSDK_OFFSET(0x1174A720)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_BEGIN_OFFSET UNITYSDK_OFFSET(0x1174CC20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_BUILDCREATEVALUES_OFFSET UNITYSDK_OFFSET(0x11749D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x11749960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1174C850)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x1174ACB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x11749520)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_SEARCHACHORBYPREFIX_OFFSET UNITYSDK_OFFSET(0x1174B4F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_SEARCHMONSTERSPAWNERPOINT_OFFSET UNITYSDK_OFFSET(0x1174AD40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_SEARCHVALIDPOINTBYDISTANCEANDANGLE_OFFSET UNITYSDK_OFFSET(0x1174C2F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_STARTSPAWN_OFFSET UNITYSDK_OFFSET(0x1174C8B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1174CCC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_WRAPANGLERANGE_OFFSET UNITYSDK_OFFSET(0x1174C220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__CTOR_OFFSET UNITYSDK_OFFSET(0x1174CEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1174CEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1174CF80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_2_OFFSET UNITYSDK_OFFSET(0x1174D0A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_3_OFFSET UNITYSDK_OFFSET(0x1174D0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_4_OFFSET UNITYSDK_OFFSET(0x1174D0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_5_OFFSET UNITYSDK_OFFSET(0x1174D0F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_6_OFFSET UNITYSDK_OFFSET(0x1174D100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_ACTIVEPRELOADMONSTER_OFFSET UNITYSDK_OFFSET(0x1174D110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1174D1D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x1174D200)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1174D210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x1174D220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1174D230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1174D240)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonsterByPatternID_TypeDefinitionIndex = 46009;

	class LDWaveMonsterByPatternID : public ::MoleMole::FlowCanvas::Nodes::LDWaveMonster
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* patternTypeOutput; // 0x1B0
		::FlowCanvas::ValueInput_1<::System::Single>* spawnIntervalInput; // 0x1B8
		::FlowCanvas::ValueInput_1<::System::Int32>* patternId; // 0x1C0
		::FlowCanvas::ValueInput_1<::System::Single>* radiusInput; // 0x1C8
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::PatternMonsterCreate*>* monsterCreateValues; // 0x1D0
		::FlowCanvas::ValueInput_1<::System::String*>* anchorPosPrefixInput; // 0x1D8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* inputPosEntity; // 0x1E0
		::FlowCanvas::ValueInput_1<::System::Single>* angleRangeInput; // 0x1E8
		::System::Int32 buildedPatternId; // 0x1F0
		::System::Int32 monsterType; // 0x1F4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_DOPRELOAD_OFFSET))(this);
		}

		::System::Void ActivePreloadMonster(::MoleMole::Battle::Entity* entity, ::System::Int32 createIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_ACTIVEPRELOADMONSTER_OFFSET))(this, entity, createIndex);
		}

		::System::Void BuildCreateValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_BUILDCREATEVALUES_OFFSET))(this);
		}

		::System::Void SearchMonsterSpawnerPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_SEARCHMONSTERSPAWNERPOINT_OFFSET))(this);
		}

		::MoleMole::MonoSpawnPoint* SearchAchorByPrefix(::Class_3_DFD5D1FDB9D2A4AC* inputModelComponent, ::System::String* prefix, ::UnityEngine::Vector2 radius, ::UnityEngine::Vector2 angle, ::System::Boolean& lastChooseLeft, ::System::Collections::Generic::HashSet_1<::System::Int32>* excludePointSet)
		{
			return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean&, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_SEARCHACHORBYPREFIX_OFFSET))(this, inputModelComponent, prefix, radius, angle, lastChooseLeft, excludePointSet);
		}

		::System::Void SearchValidPointByDistanceAndAngle(::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* sourceList, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector2 radius, ::System::Single angle, ::UnityEngine::Vector3 pos, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*& searchList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_SEARCHVALIDPOINTBYDISTANCEANDANGLE_OFFSET))(this, sourceList, forward, radius, angle, pos, searchList);
		}

		::System::Single WrapAngleRange(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_WRAPANGLERANGE_OFFSET))(this, angle);
		}

		::System::Int32 GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* GetCreateListDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_GETCREATELISTDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void StartSpawn(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_STARTSPAWN_OFFSET))(this, f);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_BEGIN_OFFSET))(this, f);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__10_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__10_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__10_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__10_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__10_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_5_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__10_6()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID__REGISTERPORTS_B__10_6_OFFSET))(this);
		}

		::System::Void __base_ActivePreloadMonster(::MoleMole::Battle::Entity* P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_ACTIVEPRELOADMONSTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Begin(::FlowCanvas::Flow P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_BEGIN_OFFSET))(this, P0);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_DOPRELOAD_OFFSET))(this);
		}

		::System::Int32 __base_GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* __base_GetCreateListDataByIndex(::System::Int32 P0)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_GETCREATELISTDATABYINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERBYPATTERNID___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}
	};
}
