#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster___c__DisplayClass69_0; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18212DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18213BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18213C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18213BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18212DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69__CTOR_OFFSET UNITYSDK_OFFSET(0x18212DA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster__SingleInternalCoroutine_d__69_TypeDefinitionIndex = 58487;

	class LDWaveMonster__SingleInternalCoroutine_d__69 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* _createData_5__4; // 0x10
		::FlowCanvas::Flow f; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* __4__this; // 0x40
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster___c__DisplayClass69_0* __8__1; // 0x48
		::System::Object* __2__current; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Int32 _createListLen_5__2; // 0x5C
		::System::Boolean _doWait_5__3; // 0x60

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER__SINGLEINTERNALCOROUTINE_D__69_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
