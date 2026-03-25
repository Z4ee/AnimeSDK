#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GAMEPLAYLOCKMANAGER_ADDTICKENTITYINGAMEWORLDPAUSE_OFFSET UNITYSDK_OFFSET(0x97AAC10)
#define RPG_CLIENT_GAMEPLAYLOCKMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97AAAE0)
#define RPG_CLIENT_GAMEPLAYLOCKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x97AAA70)
#define RPG_CLIENT_GAMEPLAYLOCKMANAGER_REMOVETICKENTITYINGAMEWORLDPAUSE_OFFSET UNITYSDK_OFFSET(0x97AAC80)
#define RPG_CLIENT_GAMEPLAYLOCKMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x97AAB50)
#define RPG_CLIENT_GAMEPLAYLOCKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x97AACF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePlayLockManager_TypeDefinitionIndex = 55742;

	class GamePlayLockManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _TickEntityList; // 0x10
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void AddTickEntityInGameWorldPause(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMANAGER_ADDTICKENTITYINGAMEWORLDPAUSE_OFFSET))(this, entity);
		}

		::System::Void RemoveTickEntityInGameWorldPause(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPLAYLOCKMANAGER_REMOVETICKENTITYINGAMEWORLDPAUSE_OFFSET))(this, entity);
		}
	};
}
