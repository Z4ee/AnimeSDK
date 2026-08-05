#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDMpSettle; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19BE0350)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BE0560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BE05C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19BE0570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BE0340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__SETTLECOROUTINE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE0330)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpSettle__SettleCoroutine_d__6_TypeDefinitionIndex = 60767;

	class LDMpSettle__SettleCoroutine_d__6 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDMpSettle* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::FlowCanvas::Flow f; // 0x20
		::System::Int32 __1__state; // 0x48
		::System::Boolean _tryRead_5__2; // 0x4C

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
