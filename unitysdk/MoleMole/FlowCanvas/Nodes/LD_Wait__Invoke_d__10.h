#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_Wait; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19082C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19082E30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19082E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19082E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19082BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x19082BE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Wait__Invoke_d__10_TypeDefinitionIndex = 53271;

	class LD_Wait__Invoke_d__10 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_Wait* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single time; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_WAIT__INVOKE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
