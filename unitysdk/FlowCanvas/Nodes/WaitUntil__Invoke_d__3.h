#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class WaitUntil; }

#define FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7BBEC0)
#define FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7BBF70)
#define FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7BBFD0)
#define FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D7BBF80)
#define FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7BBEB0)
#define FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BBEA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitUntil__Invoke_d__3_TypeDefinitionIndex = 30323;

	class WaitUntil__Invoke_d__3 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::WaitUntil* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITUNTIL__INVOKE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
