#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1970A340)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1970A490)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1970A4F0)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1970A4A0)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1970A330)
#define MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569__CTOR_OFFSET UNITYSDK_OFFSET(0x1970A320)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController__AnimCoroutine_d__569_TypeDefinitionIndex = 80097;

	class UIBaseController__AnimCoroutine_d__569 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Single length; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Single __2__current; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER__ANIMCOROUTINE_D__569_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
