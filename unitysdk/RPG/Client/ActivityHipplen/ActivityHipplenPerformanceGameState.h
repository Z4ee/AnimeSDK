#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkGameStateBase.h"

class Class_1_B1429A4347DAE014_1;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F29C00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x8F298F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x8F29B60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_ONREALENTER_OFFSET UNITYSDK_OFFSET(0x8F29900)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F298E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET UNITYSDK_OFFSET(0x8F29C90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE__SETTLEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x8F29D70)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenPerformanceGameState_TypeDefinitionIndex = 61669;

	class ActivityHipplenPerformanceGameState : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkGameStateBase
	{
	public:
		::Class_1_B1429A4347DAE014_1* _PerformanceRow; // 0x18

		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* workData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE__CTOR_OFFSET))(this, workData);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void OnRealEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_ONREALENTER_OFFSET))(this, game);
		}

		::System::Void OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_ONFINISH_OFFSET))(this, game);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnSettleHipplenWorkScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _SettlePerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE__SETTLEPERFORMANCE_OFFSET))(this);
		}
	};
}
