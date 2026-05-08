#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TriggerMove; }

#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12B2DA60)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B2DB00)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B2DB60)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12B2DB10)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B2DA50)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2DA40)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerMove__ResetValue_d__10_TypeDefinitionIndex = 76633;

	class TriggerMove__ResetValue_d__10 : public ::System::Object
	{
	public:
		::MoleMole::TriggerMove* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 origVale; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
