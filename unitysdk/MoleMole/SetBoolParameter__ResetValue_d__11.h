#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SetBoolParameter; }

#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x173FD0A0)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x173FD150)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x173FD1B0)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x173FD160)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173FD090)
#define MOLEMOLE_SETBOOLPARAMETER__RESETVALUE_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x173FD080)

namespace MoleMole
{
	inline static constexpr unsigned int SetBoolParameter__ResetValue_d__11_TypeDefinitionIndex = 78369;

	class SetBoolParameter__ResetValue_d__11 : public ::System::Object
	{
	public:
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x10
		::MoleMole::SetBoolParameter* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Boolean origVale; // 0x28
		::System::Int32 __1__state; // 0x2C

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
