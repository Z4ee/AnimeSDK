#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB416770)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB416900)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB416960)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB416910)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB416760)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0xB411560)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_StarFight_d__34_TypeDefinitionIndex = 57043;

	class BattleResultProcess___RP_StarFight_d__34 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::GameCore::BattleResultState state; // 0x18
		::System::Int32 __1__state; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_STARFIGHT_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
