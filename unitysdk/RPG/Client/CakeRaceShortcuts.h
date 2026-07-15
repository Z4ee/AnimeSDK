#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2594562E2DDF2BC6;
class Class_2_70116CD78AE84CFB;
class Class_2_FBC1E64DC5B2C441;
class Class_3_FA020C2C23A72B3F;
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }

#define RPG_CLIENT_CAKERACESHORTCUTS_GET_COREINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AC4BE00)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0x1AC4BCB0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AC4BEC0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AC49D30)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x1AC4BDB0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x1AC4A9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceShortcuts_TypeDefinitionIndex = 60231;

	class CakeRaceShortcuts : public ::System::Object
	{
	public:
		static ::Class_3_FA020C2C23A72B3F** StaticGet_Services()
		{
			return (::Class_3_FA020C2C23A72B3F**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceShortcuts_TypeDefinitionIndex)->GetStaticField(0x9260);
		}

		static ::System::UInt32 get_PlayerUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_PLAYERUID_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEFLOW_OFFSET))();
		}

		static ::Class_1_2594562E2DDF2BC6* get_GameplayManager()
		{
			return ((::Class_1_2594562E2DDF2BC6*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYMANAGER_OFFSET))();
		}

		static ::Class_2_FBC1E64DC5B2C441* get_CoreInstance()
		{
			return ((::Class_2_FBC1E64DC5B2C441*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_COREINSTANCE_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYCONTEXT_OFFSET))();
		}

		static ::Class_2_70116CD78AE84CFB* get_GameInstance()
		{
			return ((::Class_2_70116CD78AE84CFB*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEINSTANCE_OFFSET))();
		}
	};
}
