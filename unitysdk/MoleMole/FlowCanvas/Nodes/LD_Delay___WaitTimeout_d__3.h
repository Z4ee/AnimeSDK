#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_Delay; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1174E9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1174EA80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1174EAE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1174EA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1174E9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1174E990)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Delay___WaitTimeout_d__3_TypeDefinitionIndex = 72601;

	class LD_Delay___WaitTimeout_d__3 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow flow; // 0x10
		::System::Object* __2__current; // 0x38
		::MoleMole::FlowCanvas::Nodes::LD_Delay* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Single time; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY___WAITTIMEOUT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
