#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SetIntParameter; }

#define MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x138602F0)
#define MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13860390)
#define MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x138603F0)
#define MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x138603A0)
#define MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138602E0)
#define MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x138602D0)

namespace MoleMole
{
	inline static constexpr unsigned int SetIntParameter__ResetValue_d__11_TypeDefinitionIndex = 71907;

	class SetIntParameter__ResetValue_d__11 : public ::System::Object
	{
	public:
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x10
		::System::Object* __2__current; // 0x18
		::MoleMole::SetIntParameter* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 origVale; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETINTPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
