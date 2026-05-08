#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDMpSettle; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16B7FA70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B7FC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16B7FCE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16B7FC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B7FA60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7FA50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpSettle__SettleCoroutine_d__6_TypeDefinitionIndex = 43642;

	class LDMpSettle__SettleCoroutine_d__6 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDMpSettle* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18
		::System::Object* __2__current; // 0x40
		::System::Boolean _tryRead_5__2; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
