#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TriggerMove; }

#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x199A28A0)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x199A2940)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x199A29A0)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x199A2950)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199A2890)
#define MOLEMOLE_TRIGGERMOVE__RESETVALUE_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x199A2880)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerMove__ResetValue_d__10_TypeDefinitionIndex = 46922;

	class TriggerMove__ResetValue_d__10 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::TriggerMove* __4__this; // 0x18
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
