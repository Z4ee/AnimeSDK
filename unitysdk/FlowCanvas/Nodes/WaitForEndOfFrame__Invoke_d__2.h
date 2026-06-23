#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB95B20)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB95B90)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB95BF0)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DB95BA0)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB95B10)
#define FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB95B00)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WaitForEndOfFrame__Invoke_d__2_TypeDefinitionIndex = 29509;

	class WaitForEndOfFrame__Invoke_d__2 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WAITFORENDOFFRAME__INVOKE_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
