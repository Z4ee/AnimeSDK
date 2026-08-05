#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDShowCountDownUINode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x149E10B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x149E13E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x149E1440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x149E13F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149E10A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWCOUNTDOWNUINODE__COUNTDOWN_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x149E1090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowCountDownUINode__CountDown_d__29_TypeDefinitionIndex = 77364;

	class LDShowCountDownUINode__CountDown_d__29 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDShowCountDownUINode* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::FlowCanvas::Flow f; // 0x20
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
