#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameConfig.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkGameStateBase.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameCycleData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_DEBUGFORCESETGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x8F26300)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET_CANSWITCHAUTOMODE_OFFSET UNITYSDK_OFFSET(0x8F26380)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x8F26360)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x8F25FA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET__CYCLEDATA_OFFSET UNITYSDK_OFFSET(0x8F25F00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8F26140)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_ONREALENTER_OFFSET UNITYSDK_OFFSET(0x8F25FB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0x8F26190)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_SET_CANSWITCHAUTOMODE_OFFSET UNITYSDK_OFFSET(0x8F26390)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x8F26370)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F25CA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameGameState_TypeDefinitionIndex = 61667;

	class ActivityHipplenMiniGameGameState : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkGameStateBase
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig _GameConfig_k__BackingField; // 0x18
		::System::Boolean _CanSwitchAutoMode_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* workData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE__CTOR_OFFSET))(this, workData);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void OnRealEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_ONREALENTER_OFFSET))(this, game);
		}

		::System::Void OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::System::Void SettleGame(::RPG::GameCore::HipplenGameGradeType gradeType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_SETTLEGAME_OFFSET))(this, gradeType);
		}

		::System::Void DebugForceSetGameConfig(::RPG::GameCore::HipplenMiniGameType type, ::System::String* jsonPath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenMiniGameType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_DEBUGFORCESETGAMECONFIG_OFFSET))(this, type, jsonPath);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData* get__CycleData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET__CYCLEDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig get_GameConfig()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void set_GameConfig(::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_SET_GAMECONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_CanSwitchAutoMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_GET_CANSWITCHAUTOMODE_OFFSET))(this);
		}

		::System::Void set_CanSwitchAutoMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE_SET_CANSWITCHAUTOMODE_OFFSET))(this, value);
		}
	};
}
