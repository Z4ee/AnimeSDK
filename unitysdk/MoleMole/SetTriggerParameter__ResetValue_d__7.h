#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SetTriggerParameter; }

#define MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x141A4AA0)
#define MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141A4B40)
#define MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141A4BA0)
#define MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x141A4B50)
#define MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141A4A90)
#define MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x141A4A80)

namespace MoleMole
{
	inline static constexpr unsigned int SetTriggerParameter__ResetValue_d__7_TypeDefinitionIndex = 68262;

	class SetTriggerParameter__ResetValue_d__7 : public ::System::Object
	{
	public:
		::MoleMole::SetTriggerParameter* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Boolean origVale; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTRIGGERPARAMETER__RESETVALUE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
