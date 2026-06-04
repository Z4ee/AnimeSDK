#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB415030)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB4153F0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB415450)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB415400)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB415020)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27__CTOR_OFFSET UNITYSDK_OFFSET(0xB411170)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_FightActivity_d__27_TypeDefinitionIndex = 57033;

	class BattleResultProcess___RP_FightActivity_d__27 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::RPG::GameCore::BattleResultState state; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTACTIVITY_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
