#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveSurfItem; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10E12670)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10E12BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10E12C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10E12BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E12660)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x10E12650)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveSurfItem__CreateItemCo_d__16_TypeDefinitionIndex = 69866;

	class LDWaveSurfItem__CreateItemCo_d__16 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDWaveSurfItem* __4__this; // 0x10
		::System::Single __2__current; // 0x18
		::System::Int32 __1__state; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
