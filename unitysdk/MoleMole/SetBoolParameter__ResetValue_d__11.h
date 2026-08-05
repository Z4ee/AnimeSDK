#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SetBoolParameter; }

#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x129D9E40)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129D9EF0)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129D9F50)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x129D9F00)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129D9E30)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x129D9E20)

namespace MoleMole
{
	inline static constexpr unsigned int SetBoolParameter__ResetValue_d__11_TypeDefinitionIndex = 71228;

	class SetBoolParameter__ResetValue_d__11 : public ::System::Object
	{
	public:
		::MoleMole::SetBoolParameter* __4__this; // 0x10
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Boolean origVale; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
