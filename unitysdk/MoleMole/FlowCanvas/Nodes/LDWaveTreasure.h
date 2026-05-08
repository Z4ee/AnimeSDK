#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster_InputOutputOption.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveTreasure___c__DisplayClass10_0.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveTreasure___c__DisplayClass10_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_1.h"

class Class_1_48F4A404A08692BE_24;
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace MoleMole::FlowCanvas::Nodes { class TreasureCreateData; }
namespace ParadoxNotion::Serialization { class Graph_BinarySerializer_Setting_OptBool; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x10E12F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x10E131B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x10E13D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GET_ISOPENDEBUGFETCH_OFFSET UNITYSDK_OFFSET(0x10E12C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_ISSHOWELE_OFFSET UNITYSDK_OFFSET(0x10E12DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E12D10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x10E13330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E142A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__CONFIRMTREASURECOUNT_OFFSET UNITYSDK_OFFSET(0x10E13020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E14290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x10E14380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__TRYCREATEMONSTER_G____CALLCREATEMONSTER_10_0_OFFSET UNITYSDK_OFFSET(0x10E13AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__TRYFETCHTREASUREID_OFFSET UNITYSDK_OFFSET(0x10E13860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x10E14390)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x10E143A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x10E143B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_ISSHOWELE_OFFSET UNITYSDK_OFFSET(0x10E143C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E14450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x10E14460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___TRYFETCHTREASUREID_G___CHECKONCE_12_0_OFFSET UNITYSDK_OFFSET(0x10E13D70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___TRYFETCHTREASUREID_G___CHECKREPEAT_12_1_OFFSET UNITYSDK_OFFSET(0x10E14000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveTreasure_TypeDefinitionIndex = 55565;

	class LDWaveTreasure : public ::MoleMole::FlowCanvas::Nodes::LDWaveMonster
	{
	public:
		static ::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool** StaticGet_IsSkipCheckOccupy()
		{
			return (::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool**)Il2CppClass::FromTypeDefinitionIndex(LDWaveTreasure_TypeDefinitionIndex)->GetStaticField(0x378D0);
		}
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::TreasureCreateData*>*>* _treasureList; // 0x1B0
		::System::Collections::Generic::List_1<::System::Boolean>* _treasureCreateStatusList; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_isOpenDebugFetch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GET_ISOPENDEBUGFETCH_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsShowEle(::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption checkOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_ISSHOWELE_OFFSET))(this, checkOpt);
		}

		::System::Int32 GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::System::Void _ConfirmTreasureCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__CONFIRMTREASURECOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* GetCreateListDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GETCREATELISTDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Void _TryFetchTreasureID(::System::Int32 treasureID, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>*& baseIDs, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>*& subIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>*&, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__TRYFETCHTREASUREID_OFFSET))(this, treasureID, baseIDs, subIDs);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* _RegisterPorts_b__5_0()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::Void _TryCreateMonster_g____CallCreateMonster_10_0(::Struct_2_A725E4562D03EA4E_1 tPair, ::System::Boolean isBaseID, ::MoleMole::FlowCanvas::Nodes::LDWaveTreasure___c__DisplayClass10_0& a3, ::MoleMole::FlowCanvas::Nodes::LDWaveTreasure___c__DisplayClass10_1& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A725E4562D03EA4E_1, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDWaveTreasure___c__DisplayClass10_0&, ::MoleMole::FlowCanvas::Nodes::LDWaveTreasure___c__DisplayClass10_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE__TRYCREATEMONSTER_G____CALLCREATEMONSTER_10_0_OFFSET))(this, tPair, isBaseID, a3, a4);
		}

		static ::System::Void __TryFetchTreasureID_g___CheckOnce_12_0(::Class_1_48F4A404A08692BE_24* rewardConfigTemplate, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>* retList)
		{
			return ((::System::Void(*)(::Class_1_48F4A404A08692BE_24*, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___TRYFETCHTREASUREID_G___CHECKONCE_12_0_OFFSET))(rewardConfigTemplate, retList);
		}

		static ::System::Void __TryFetchTreasureID_g___CheckRepeat_12_1(::Class_1_48F4A404A08692BE_24* rewardConfigTemplate, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>* retList)
		{
			return ((::System::Void(*)(::Class_1_48F4A404A08692BE_24*, ::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_1>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___TRYFETCHTREASUREID_G___CHECKREPEAT_12_1_OFFSET))(rewardConfigTemplate, retList);
		}

		::System::Int32 __base_GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* __base_GetCreateListDataByIndex(::System::Int32 P0)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_GETCREATELISTDATABYINDEX_OFFSET))(this, P0);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType __base_GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Boolean __base_IsShowEle(::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster_InputOutputOption))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_ISSHOWELE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVETREASURE___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}
	};
}
