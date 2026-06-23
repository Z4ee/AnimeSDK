#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class EntitySpawnSubsystem; }
namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10D2C580)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10D2C930)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10D2C990)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10D2C940)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D2C570)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0x10D2C560)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem___TryStartWorkingCoroutine_g__SpawnEntity_25_0_d_TypeDefinitionIndex = 71883;

	class EntitySpawnSubsystem___TryStartWorkingCoroutine_g__SpawnEntity_25_0_d : public ::System::Object
	{
	public:
		::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* _request_5__2; // 0x10
		::MoleMole::EntitySpawnSubsystem* __4__this; // 0x18
		::System::Single __2__current; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
