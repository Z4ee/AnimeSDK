#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDCheckPoint; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17101240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17101550)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x171015B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17101560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17101230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x17101220)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCheckPoint__SafeInvoke_d__13_TypeDefinitionIndex = 50083;

	class LDCheckPoint__SafeInvoke_d__13 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow flow; // 0x10
		::System::Object* __2__current; // 0x38
		::MoleMole::FlowCanvas::Nodes::LDCheckPoint* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean asFirstSection; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHECKPOINT__SAFEINVOKE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
