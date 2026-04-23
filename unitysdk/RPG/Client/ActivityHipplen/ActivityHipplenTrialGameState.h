#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameConfig.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenTrialGameState_TrialStep.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTrialData; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B02890)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_CANSWITCHAUTOMODE_OFFSET UNITYSDK_OFFSET(0x9B029F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9B029D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x9B02380)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9B02A10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_PROGRESSTRIAL_OFFSET UNITYSDK_OFFSET(0x9B02840)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9B02390)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x9B027A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_CANSWITCHAUTOMODE_OFFSET UNITYSDK_OFFSET(0x9B02A00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9B029E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__CREATESWITCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B026A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B021F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET UNITYSDK_OFFSET(0x9B02920)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenTrialGameState_TypeDefinitionIndex = 69587;

	class ActivityHipplenTrialGameState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* TrialData; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig _GameConfig_k__BackingField; // 0x18
		::System::Boolean _CanSwitchAutoMode_k__BackingField; // 0x28
		::System::Boolean _SkipMissionCheck; // 0x29
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialGameState_TrialStep CurrentStep; // 0x2C

		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* workData, ::System::Boolean skipMissionCheck)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTrialData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__CTOR_OFFSET))(this, workData, skipMissionCheck);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, game);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::System::Void ProgressTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_PROGRESSTRIAL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnSettleHipplenWorkScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET))(this, cmd, rsp);
		}

		::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085* _CreateSwitchContext()
		{
			return ((::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__CREATESWITCHCONTEXT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig get_GameConfig()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void set_GameConfig(::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_GAMECONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_CanSwitchAutoMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_CANSWITCHAUTOMODE_OFFSET))(this);
		}

		::System::Void set_CanSwitchAutoMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_CANSWITCHAUTOMODE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_TITLE_OFFSET))(this);
		}
	};
}
