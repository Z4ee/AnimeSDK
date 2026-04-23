#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkGameStateBase.h"

class Class_1_43BD383C98B4C0C5_172;
class Class_1_7D1FC6C2A098568F;
class Class_1_DED4BA2FC834659B;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::GameCore { class ActivityHipplenIncidentRow; }
namespace RPG::GameCore { class HipplenIncidentConfig; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_CONTINUEINCIDENT_OFFSET UNITYSDK_OFFSET(0x9AEC370)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AEC280)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x9AEC080)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x9AEC230)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONREALENTER_OFFSET UNITYSDK_OFFSET(0x9AEC090)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_SELECTOPTION_OFFSET UNITYSDK_OFFSET(0x9AEC410)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_STARTINCIDENT_OFFSET UNITYSDK_OFFSET(0x9AEC310)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_STOPINCIDENT_OFFSET UNITYSDK_OFFSET(0x9AEC4D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AEBEC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET UNITYSDK_OFFSET(0x9AEC550)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentGameState_TypeDefinitionIndex = 69574;

	class ActivityHipplenIncidentGameState : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkGameStateBase
	{
	public:
		::RPG::GameCore::HipplenIncidentConfig* _Config; // 0x18
		::RPG::GameCore::ActivityHipplenIncidentRow* _Meta; // 0x20
		::Class_1_DED4BA2FC834659B* _IncidentCtrl; // 0x28
		::Class_1_7D1FC6C2A098568F* _SelectEvent; // 0x30
		::Class_1_43BD383C98B4C0C5_172* _ContinueEvent; // 0x38

		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* workData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__CTOR_OFFSET))(this, workData);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void OnRealEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONREALENTER_OFFSET))(this, game);
		}

		::System::Void OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void StartIncident()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_STARTINCIDENT_OFFSET))(this);
		}

		::System::Void ContinueIncident()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_CONTINUEINCIDENT_OFFSET))(this);
		}

		::System::Void SelectOption(::System::Int32 optionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_SELECTOPTION_OFFSET))(this, optionIndex);
		}

		::System::Void StopIncident()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_STOPINCIDENT_OFFSET))(this);
		}

		::System::Void _OnSettleHipplenWorkScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET))(this, cmd, rsp);
		}
	};
}
