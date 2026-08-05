#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class BandTrapData; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace MoleMole::FlowCanvas::Nodes { class TrapCreateData; }
namespace NodeCanvas::Framework { class Graph; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x149E3DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x149E3FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_GETRANDOMINDEXLIST_OFFSET UNITYSDK_OFFSET(0x149E4860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x149E4CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149E3A70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_SHOWBANDTRAPS_OFFSET UNITYSDK_OFFSET(0x149E4A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x149E4130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x149E4F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x149E4F90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0x149E4FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_2_OFFSET UNITYSDK_OFFSET(0x149E50E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_3_OFFSET UNITYSDK_OFFSET(0x149E5110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_4_OFFSET UNITYSDK_OFFSET(0x149E5120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_5_OFFSET UNITYSDK_OFFSET(0x149E5130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x149E5140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x149E5150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x149E5160)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149E51F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x149E5200)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveTrap_TypeDefinitionIndex = 45721;

	class LDWaveTrap : public ::MoleMole::FlowCanvas::Nodes::LDWaveMonster
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::TrapCreateData*>*>* createTrapInput; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Int32 GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* GetCreateListDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_GETCREATELISTDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::System::Void ShowBandTraps(::MoleMole::FlowCanvas::Nodes::BandTrapData* bandTrapData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::BandTrapData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_SHOWBANDTRAPS_OFFSET))(this, bandTrapData);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetRandomIndexList(::System::Int32 maxSize, ::System::Int32 outputNum)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_GETRANDOMINDEXLIST_OFFSET))(this, maxSize, outputNum);
		}

		::System::Void OnCreate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP_ONCREATE_OFFSET))(this, assignedGraph);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__1_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__1_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__1_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP__REGISTERPORTS_B__1_5_OFFSET))(this);
		}

		::System::Int32 __base_GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* __base_GetCreateListDataByIndex(::System::Int32 P0)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_GETCREATELISTDATABYINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreate(::NodeCanvas::Framework::Graph* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_ONCREATE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETRAP___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}
	};
}
