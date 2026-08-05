#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x129EA950)
#define MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129EA980)
#define MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129EA9E0)
#define MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x129EA990)
#define MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129EA940)
#define MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x129EA930)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerAttack__ResetValue_d__11_TypeDefinitionIndex = 85444;

	class TriggerAttack__ResetValue_d__11 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
