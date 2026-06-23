#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_1_84C5B95CD7B4A033;
class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ISMONSTER_OFFSET UNITYSDK_OFFSET(0x13000610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ONEVTKILLED_OFFSET UNITYSDK_OFFSET(0x13000230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x13000990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x13000790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13000110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED__CTOR_OFFSET UNITYSDK_OFFSET(0x13000A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x13000AE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x13000AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x13000B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED___BASE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x13000B10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCoinBrushingListenMonsterBeKilled_TypeDefinitionIndex = 77180;

	class LDCoinBrushingListenMonsterBeKilled : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* _emptyTags; // 0xA8
		::MoleMole::Battle::Entity* _killedEntity; // 0xB0
		::FlowCanvas::FlowOutput* _onMonsterKilled; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* _killedEntityTags; // 0xC0
		::Class_1_84C5B95CD7B4A033* _redirector; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnEvtKilled(::Class_1_B7E341C5F1A6F199* evt, ::MoleMole::Battle::Entity* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ONEVTKILLED_OFFSET))(this, evt, _);
		}

		static ::System::Boolean IsMonster(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ISMONSTER_OFFSET))(entity);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED_ONGRAPHSTOPED_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__5_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* _RegisterPorts_b__5_1()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGLISTENMONSTERBEKILLED___BASE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}
	};
}
