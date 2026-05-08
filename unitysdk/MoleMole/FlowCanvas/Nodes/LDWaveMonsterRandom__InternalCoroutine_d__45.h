#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonsterRandom; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonsterRandom___c__DisplayClass45_0; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18213C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182150C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18215120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x182150D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18213C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45__CTOR_OFFSET UNITYSDK_OFFSET(0x18213C20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonsterRandom__InternalCoroutine_d__45_TypeDefinitionIndex = 66926;

	class LDWaveMonsterRandom__InternalCoroutine_d__45 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::MonsterCreateData* _createData_5__3; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDWaveMonsterRandom* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>* _list_5__2; // 0x28
		::MoleMole::FlowCanvas::Nodes::LDWaveMonsterRandom___c__DisplayClass45_0* __8__1; // 0x30
		::FlowCanvas::Flow f; // 0x38
		::System::Int32 __1__state; // 0x60
		::System::Int32 _monsterId_5__4; // 0x64
		::System::Boolean _tryRead_5__6; // 0x68
		::System::Int32 _aiConfigId_5__5; // 0x6C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERRANDOM__INTERNALCOROUTINE_D__45_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
