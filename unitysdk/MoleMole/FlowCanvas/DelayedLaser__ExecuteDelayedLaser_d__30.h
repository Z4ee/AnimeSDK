#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas { class DelayedLaser; }

#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10B9E570)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10B9E6A0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10B9E700)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10B9E6B0)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B9E560)
#define MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9CD80)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int DelayedLaser__ExecuteDelayedLaser_d__30_TypeDefinitionIndex = 64382;

	class DelayedLaser__ExecuteDelayedLaser_d__30 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::DelayedLaser* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DELAYEDLASER__EXECUTEDELAYEDLASER_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
