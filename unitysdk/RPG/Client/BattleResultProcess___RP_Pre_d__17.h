#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleResultProcess_ConfigItem; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91D3950)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D3C10)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91D3C70)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91D3C20)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91D3940)
#define RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x91D3930)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess___RP_Pre_d__17_TypeDefinitionIndex = 49479;

	class BattleResultProcess___RP_Pre_d__17 : public ::System::Object
	{
	public:
		::RPG::Client::BattleResultProcess_ConfigItem* config; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::GameCore::TurnBasedGameMode* _pGameMode_5__2; // 0x20
		::System::Int32 __1__state; // 0x28
		::RPG::GameCore::BattleResultState state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTPROCESS___RP_PRE_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
