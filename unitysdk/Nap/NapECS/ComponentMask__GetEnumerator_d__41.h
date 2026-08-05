#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C832250)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT16__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C832460)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C8324C0)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C832470)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C832240)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x1C82FB10)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentMask__GetEnumerator_d__41_TypeDefinitionIndex = 37963;

	class ComponentMask__GetEnumerator_d__41 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::UInt16 _baseIndex_5__4; // 0x14
		::System::UInt16 __2__current; // 0x16
		::Nap::NapECS::ComponentMask __4__this; // 0x18
		::System::UInt64 _mask_5__3; // 0x58
		::System::Byte _i_5__5; // 0x60
		::System::Byte _j_5__2; // 0x61

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_MOVENEXT_OFFSET))(this);
		}

		::System::UInt16 System_Collections_Generic_IEnumerator_System_UInt16__get_Current()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT16__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
