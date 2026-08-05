#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class CreateItemData; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x118BDB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x118BE020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x118BE080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x118BE030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118BDB50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x118BDB40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveItem__CreateItemCo_d__15_TypeDefinitionIndex = 45515;

	class LDWaveItem__CreateItemCo_d__15 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::CreateItemData* _data_5__4; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDWaveItem* __4__this; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::CreateItemData*>* _list_5__2; // 0x20
		::System::Single __2__current; // 0x28
		::System::Int32 _i_5__3; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CREATEITEMCO_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
