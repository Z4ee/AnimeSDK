#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkGameStateBase.h"

class Class_1_43BD383C98B4C0C5_181;
class Class_1_DED4BA2FC834659B;
class Class_1_FF80A1ACD786CECB_3;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::GameCore { class ActivityHipplenIncidentRow; }
namespace RPG::GameCore { class HipplenIncidentConfig; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_CONTINUEINCIDENT_OFFSET UNITYSDK_OFFSET(0xB0D0810)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0D06F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0xB0D04E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB0D06A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONREALENTER_OFFSET UNITYSDK_OFFSET(0xB0D04F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_SELECTOPTION_OFFSET UNITYSDK_OFFSET(0xB0D08B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_STARTINCIDENT_OFFSET UNITYSDK_OFFSET(0xB0D07B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_STOPINCIDENT_OFFSET UNITYSDK_OFFSET(0xB0D0970)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D0310)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET UNITYSDK_OFFSET(0xB0D09F0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentGameState_TypeDefinitionIndex = 70386;

	class ActivityHipplenIncidentGameState : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkGameStateBase
	{
	public:
		::Class_1_FF80A1ACD786CECB_3* _SelectEvent; // 0x18
		::RPG::GameCore::HipplenIncidentConfig* _Config; // 0x20
		::Class_1_43BD383C98B4C0C5_181* _ContinueEvent; // 0x28
		::Class_1_DED4BA2FC834659B* _IncidentCtrl; // 0x30
		::RPG::GameCore::ActivityHipplenIncidentRow* _Meta; // 0x38

		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void OnRealEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONREALENTER_OFFSET))(this, a1);
		}

		::System::Void OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_ONFINISH_OFFSET))(this, a1);
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

		::System::Void SelectOption(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_SELECTOPTION_OFFSET))(this, a1);
		}

		::System::Void StopIncident()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE_STOPINCIDENT_OFFSET))(this);
		}

		::System::Void _OnSettleHipplenWorkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET))(this, a1, a2);
		}
	};
}
