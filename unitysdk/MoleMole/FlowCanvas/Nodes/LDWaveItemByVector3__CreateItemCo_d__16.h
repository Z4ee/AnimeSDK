#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveItemByVector3; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14280440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14280BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14280C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14280BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14280430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x14280420)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveItemByVector3__CreateItemCo_d__16_TypeDefinitionIndex = 72919;

	class LDWaveItemByVector3__CreateItemCo_d__16 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDWaveItemByVector3* __4__this; // 0x10
		::MoleMole::GameplayTag _tag_5__2; // 0x18
		::System::Single __2__current; // 0x28
		::System::Int32 _i_5__3; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CREATEITEMCO_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
