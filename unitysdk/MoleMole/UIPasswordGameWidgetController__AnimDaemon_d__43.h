#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPasswordGameWidgetController; }

#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1756FE00)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17570770)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175707D0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17570780)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1756FDF0)
#define MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x1756FDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPasswordGameWidgetController__AnimDaemon_d__43_TypeDefinitionIndex = 48742;

	class UIPasswordGameWidgetController__AnimDaemon_d__43 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::UIPasswordGameWidgetController* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPASSWORDGAMEWIDGETCONTROLLER__ANIMDAEMON_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
