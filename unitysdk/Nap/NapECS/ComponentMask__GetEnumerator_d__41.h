#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x192C4AA0)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT16__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x192C4CD0)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x192C4D30)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x192C4CE0)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192C4A90)
#define NAP_NAPECS_COMPONENTMASK__GETENUMERATOR_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x192C2380)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentMask__GetEnumerator_d__41_TypeDefinitionIndex = 35706;

	class ComponentMask__GetEnumerator_d__41 : public ::System::Object
	{
	public:
		::System::UInt64 _mask_5__3; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::UInt16 _baseIndex_5__4; // 0x1C
		::System::Byte _j_5__2; // 0x1E
		::System::Byte _i_5__5; // 0x1F
		::System::UInt16 __2__current; // 0x20
		::Nap::NapECS::ComponentMask __4__this; // 0x28

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
