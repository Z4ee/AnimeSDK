#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonsterRandomType; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonsterRandomType___c__DisplayClass41_0; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13018ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13019BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13019C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13019BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13018EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x13016EA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonsterRandomType__InternalCoroutine_d__41_TypeDefinitionIndex = 75526;

	class LDWaveMonsterRandomType__InternalCoroutine_d__41 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::MonsterCreateData* _createData_5__3; // 0x38
		::MoleMole::FlowCanvas::Nodes::LDWaveMonsterRandomType* __4__this; // 0x40
		::MoleMole::FlowCanvas::Nodes::LDWaveMonsterRandomType___c__DisplayClass41_0* __8__1; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>* _list_5__2; // 0x50
		::System::Object* __2__current; // 0x58
		::System::Int32 __1__state; // 0x60
		::System::Int32 _aiConfigId_5__5; // 0x64
		::System::Int32 _monsterId_5__4; // 0x68

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOMTYPE__INTERNALCOROUTINE_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
