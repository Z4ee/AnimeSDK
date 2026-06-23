#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster_InputOutputOption.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace MoleMole::FlowCanvas::Nodes { class S2TreasureCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x12BAD550)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x12BAD670)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x12BAD400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_ISSHOWELE_OFFSET UNITYSDK_OFFSET(0x12BAD440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BAD370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x12BAD7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_TRYFETCHTREASUREID_OFFSET UNITYSDK_OFFSET(0x12BADB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BADDA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x12BADDB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x12BADDC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x12BADDD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_ISSHOWELE_OFFSET UNITYSDK_OFFSET(0x12BADDE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BADE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x12BADE80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2WaveTreasure_TypeDefinitionIndex = 55748;

	class LDAbyssS2WaveTreasure : public ::MoleMole::FlowCanvas::Nodes::LDWaveMonster
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::S2TreasureCreateData*>*>* _treasureList; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Boolean IsShowEle(::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption checkOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_ISSHOWELE_OFFSET))(this, checkOpt);
		}

		::System::Int32 GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* GetCreateListDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_GETCREATELISTDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::System::Boolean TryFetchTreasureID(::System::UInt16 areaIndex, ::System::UInt16 treasureIndexInArea, ::System::Int32 treasureID, ::System::Int32& monsterID, ::System::UInt32& rewardID, ::System::Boolean& isBase)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::Int32, ::System::Int32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE_TRYFETCHTREASUREID_OFFSET))(this, areaIndex, treasureIndexInArea, treasureID, monsterID, rewardID, isBase);
		}

		::System::Int32 __base_GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* __base_GetCreateListDataByIndex(::System::Int32 P0)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_GETCREATELISTDATABYINDEX_OFFSET))(this, P0);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType __base_GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Boolean __base_IsShowEle(::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_ISSHOWELE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2WAVETREASURE___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}
	};
}
