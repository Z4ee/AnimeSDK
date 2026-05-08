#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDTurnBasedGetEnemyMonsterList_Element.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B84C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x16B84740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16B84C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x16B84CE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetEnemyMonsterList_TypeDefinitionIndex = 41695;

	class LDTurnBasedGetEnemyMonsterList : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>*>
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* _waveEnemies; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_INVOKE_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}
