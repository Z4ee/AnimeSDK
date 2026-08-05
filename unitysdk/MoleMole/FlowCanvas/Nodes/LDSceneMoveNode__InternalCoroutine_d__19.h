#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDSceneMoveNode; }
namespace MoleMole::FlowCanvas::Nodes { class LDSceneMoveNode___c__DisplayClass19_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x107D2AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x107D3020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x107D3080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x107D3030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x107D2AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x107D1EB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneMoveNode__InternalCoroutine_d__19_TypeDefinitionIndex = 70889;

	class LDSceneMoveNode__InternalCoroutine_d__19 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::FlowCanvas::Flow f; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDSceneMoveNode___c__DisplayClass19_0* __8__1; // 0x40
		::MoleMole::FlowCanvas::Nodes::LDSceneMoveNode* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__INTERNALCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
