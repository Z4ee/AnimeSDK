#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91D2E70)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D2FF0)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D3050)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91D3000)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91D2E60)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35__CTOR_OFFSET UNITYSDK_OFFSET(0x91CE850)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_FightFestChallenge_d__35_TypeDefinitionIndex = 49475;

	class BattleResultProcess___RP_FightFestChallenge_d__35 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Int32 __1__state; // 0x18
		::RPG::GameCore::BattleResultState state; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_FIGHTFESTCHALLENGE_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
