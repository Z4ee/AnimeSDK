#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D4B763E40BF8CFF;
class Class_2_5129BDCF76C18291;
class Class_2_FBC1E64DC5B2C441;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }

#define RPG_CLIENT_CAKERACESHORTCUTS_GET_COREINSTANCE_OFFSET UNITYSDK_OFFSET(0x9F10EA0)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0x9F10D00)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9F10F30)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0x9F01690)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYMANAGER_OFFSET UNITYSDK_OFFSET(0x9F10E50)
#define RPG_CLIENT_CAKERACESHORTCUTS_GET_PLAYERUID_OFFSET UNITYSDK_OFFSET(0x9F0FC20)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceShortcuts_TypeDefinitionIndex = 58044;

	class CakeRaceShortcuts : public ::System::Object
	{
	public:
		static ::Class_3_626F93E2306641CC** StaticGet_Services()
		{
			return (::Class_3_626F93E2306641CC**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceShortcuts_TypeDefinitionIndex)->GetStaticField(0x13E80);
		}

		static ::System::UInt32 get_PlayerUID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_PLAYERUID_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEFLOW_OFFSET))();
		}

		static ::Class_1_0D4B763E40BF8CFF* get_GameplayManager()
		{
			return ((::Class_1_0D4B763E40BF8CFF*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYMANAGER_OFFSET))();
		}

		static ::Class_2_FBC1E64DC5B2C441* get_CoreInstance()
		{
			return ((::Class_2_FBC1E64DC5B2C441*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_COREINSTANCE_OFFSET))();
		}

		static ::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEPLAYCONTEXT_OFFSET))();
		}

		static ::Class_2_5129BDCF76C18291* get_GameInstance()
		{
			return ((::Class_2_5129BDCF76C18291*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACESHORTCUTS_GET_GAMEINSTANCE_OFFSET))();
		}
	};
}
