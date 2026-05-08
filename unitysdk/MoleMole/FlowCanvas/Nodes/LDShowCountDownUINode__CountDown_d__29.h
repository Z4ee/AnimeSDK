#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDShowCountDownUINode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16D3FCF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16D40020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16D40080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16D40030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D3FCE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x16D3FCD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowCountDownUINode__CountDown_d__29_TypeDefinitionIndex = 40218;

	class LDShowCountDownUINode__CountDown_d__29 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDShowCountDownUINode* __4__this; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
