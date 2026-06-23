#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoHintArrow; }

#define MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x141969C0)
#define MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14196C00)
#define MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14196C60)
#define MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14196C10)
#define MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141969B0)
#define MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E__CTOR_OFFSET UNITYSDK_OFFSET(0x141969A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHintArrow_Class_1_02DF210C0E28496E_TypeDefinitionIndex = 60278;

	class MonoHintArrow_Class_1_02DF210C0E28496E : public ::System::Object
	{
	public:
		::System::Object* Field_1_1; // 0x10
		::MoleMole::MonoHintArrow* Field_1_2; // 0x18
		::System::Int32 Field_1_0; // 0x20
		::System::Boolean Field_1_3; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_CLASS_1_02DF210C0E28496E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
