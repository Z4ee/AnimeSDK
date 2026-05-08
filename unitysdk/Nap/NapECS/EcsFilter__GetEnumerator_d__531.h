#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }

#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x192D6140)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NAP_NAPECS_ECSENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x192D6290)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x192D62F0)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x192D62A0)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192D6130)
#define NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531__CTOR_OFFSET UNITYSDK_OFFSET(0x192D5B20)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilter__GetEnumerator_d__531_TypeDefinitionIndex = 35699;

	class EcsFilter__GetEnumerator_d__531 : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsArchetype* _archetype_5__4; // 0x10
		::Nap::NapECS::EcsFilter* __4__this; // 0x18
		::Nap::NapECS::EcsEntity* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Int32 _jEnd_5__5; // 0x2C
		::System::Int32 _j_5__6; // 0x30
		::System::Int32 _i_5__2; // 0x34
		::System::Int32 _iCount_5__3; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_MOVENEXT_OFFSET))(this);
		}

		::Nap::NapECS::EcsEntity* System_Collections_Generic_IEnumerator_Nap_NapECS_EcsEntity__get_Current()
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_NAP_NAPECS_ECSENTITY__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__GETENUMERATOR_D__531_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
