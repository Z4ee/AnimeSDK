#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoShootingWave; }

#define MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x164212A0)
#define MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16421460)
#define MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164214C0)
#define MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16421470)
#define MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16421290)
#define MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17__CTOR_OFFSET UNITYSDK_OFFSET(0x16421280)

namespace MoleMole
{
	inline static constexpr unsigned int MonoShootingWave_Class_1_575928BF31B9DC17_TypeDefinitionIndex = 62458;

	class MonoShootingWave_Class_1_575928BF31B9DC17 : public ::System::Object
	{
	public:
		::System::Object* Field_1_1; // 0x10
		::MoleMole::MonoShootingWave* Field_1_2; // 0x18
		::System::Int32 Field_1_0; // 0x20
		::System::Single Field_1_3; // 0x24
		::System::Single Field_1_4; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_CLASS_1_575928BF31B9DC17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
