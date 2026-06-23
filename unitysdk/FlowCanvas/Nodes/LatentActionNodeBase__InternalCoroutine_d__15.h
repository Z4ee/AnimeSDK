#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNodeBase_RoutineData.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class LatentActionNodeBase; }

#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D532800)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D532C50)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D532CB0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D532C60)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5327F0)
#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5325B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNodeBase__InternalCoroutine_d__15_TypeDefinitionIndex = 30235;

	class LatentActionNodeBase__InternalCoroutine_d__15 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow _f_5__2; // 0x10
		::System::Object* __2__current; // 0x38
		::FlowCanvas::Nodes::LatentActionNodeBase_RoutineData data; // 0x40
		::FlowCanvas::Nodes::LatentActionNodeBase* __4__this; // 0x70
		::System::Int32 __1__state; // 0x78

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE__INTERNALCOROUTINE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
