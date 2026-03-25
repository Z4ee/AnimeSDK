#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91D40A0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D40E0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D4140)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91D40F0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91D4090)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x91D4080)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_RogueTournBoss_d__23_TypeDefinitionIndex = 49483;

	class BattleResultProcess___RP_RogueTournBoss_d__23 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_ROGUETOURNBOSS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
