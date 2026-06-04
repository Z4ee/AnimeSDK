#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_014C66952F2D60FA;
class Class_1_29ADE9724E15BDC9;
namespace RPG::Client::ActivityIdleLive { class CharacterMeetPerformService; }
namespace RPG::Client::ActivityIdleLive { class IInteractionProvider; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveCameraViewportService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipFlyService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveFuncUnlockFlyService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGameFlow; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveRewardFlyService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveStoryLineGameContext; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveUnlockStatusQueryService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_ADJUSTCAMERAVIEWPORT_OFFSET UNITYSDK_OFFSET(0xB15BAF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_DIRECTTOMAZEATSUBMISSION_OFFSET UNITYSDK_OFFSET(0xB15BA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETALLACTIVATETECHTREENODES_OFFSET UNITYSDK_OFFSET(0xB15B2E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETAVATAREQUIPPEDSPEQUIPINFO_OFFSET UNITYSDK_OFFSET(0xB15B290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCAMERAVIEWPORTSERVICE_OFFSET UNITYSDK_OFFSET(0xB15B770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCHARACTERMEETPERFORMSERVICE_OFFSET UNITYSDK_OFFSET(0xB15B150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCURRENTBATTLETIME_OFFSET UNITYSDK_OFFSET(0xB15B500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCURRENTTEAMINFO_OFFSET UNITYSDK_OFFSET(0xB15B470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCURRENTTEAMPOWER_OFFSET UNITYSDK_OFFSET(0xB15B6A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETEQUIPFLYSERVICE_OFFSET UNITYSDK_OFFSET(0xB15B1F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETFUNCFLYSERVICE_OFFSET UNITYSDK_OFFSET(0xB15B1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETPURESHOWGIFTSERVICE_OFFSET UNITYSDK_OFFSET(0xB15B240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETREWARDFLYSERVICE_OFFSET UNITYSDK_OFFSET(0xB14C120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETTEAMINFOATNODEBEGIN_OFFSET UNITYSDK_OFFSET(0xB15B3E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETTEAMPOWERATBATTLEBEGIN_OFFSET UNITYSDK_OFFSET(0xB15B360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETUNLOCKSTATUSQUERYSERVICE_OFFSET UNITYSDK_OFFSET(0xB15B100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_INITANDENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xB15B7C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_TRYGETSTORYLINECONTEXT_OFFSET UNITYSDK_OFFSET(0xB15AF50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS__DOENTERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xB15B8E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS__GETGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xB15AFA0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveShortcuts_TypeDefinitionIndex = 70187;

	class IdleLiveShortcuts : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveStoryLineGameContext* TryGetStoryLineContext()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveStoryLineGameContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_TRYGETSTORYLINECONTEXT_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveUnlockStatusQueryService* GetUnlockStatusQueryService()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveUnlockStatusQueryService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETUNLOCKSTATUSQUERYSERVICE_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::CharacterMeetPerformService* GetCharacterMeetPerformService()
		{
			return ((::RPG::Client::ActivityIdleLive::CharacterMeetPerformService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCHARACTERMEETPERFORMSERVICE_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveRewardFlyService* GetRewardFlyService()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveRewardFlyService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETREWARDFLYSERVICE_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveFuncUnlockFlyService* GetFuncFlyService()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveFuncUnlockFlyService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETFUNCFLYSERVICE_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveEquipFlyService* GetEquipFlyService()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipFlyService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETEQUIPFLYSERVICE_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IInteractionProvider* GetPureShowGiftService()
		{
			return ((::RPG::Client::ActivityIdleLive::IInteractionProvider*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETPURESHOWGIFTSERVICE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>* GetAvatarEquippedSpEquipInfo()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_014C66952F2D60FA*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETAVATAREQUIPPEDSPEQUIPINFO_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* GetAllActivateTechTreeNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETALLACTIVATETECHTREENODES_OFFSET))();
		}

		static ::System::UInt64 GetTeamPowerAtBattleBegin()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETTEAMPOWERATBATTLEBEGIN_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GetTeamInfoAtNodeBegin()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETTEAMINFOATNODEBEGIN_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GetCurrentTeamInfo()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCURRENTTEAMINFO_OFFSET))();
		}

		static ::System::Single GetCurrentBattleTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCURRENTBATTLETIME_OFFSET))();
		}

		static ::System::UInt64 GetCurrentTeamPower()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCURRENTTEAMPOWER_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveCameraViewportService* GetCameraViewportService()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveCameraViewportService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_GETCAMERAVIEWPORTSERVICE_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGameFlow* _GetGameFlow()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS__GETGAMEFLOW_OFFSET))();
		}

		static ::System::Void InitAndEnterBattle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_INITANDENTERBATTLE_OFFSET))();
		}

		static ::System::Void _DoEnterGameFlow(::Class_1_29ADE9724E15BDC9* a1)
		{
			return ((::System::Void(*)(::Class_1_29ADE9724E15BDC9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS__DOENTERGAMEFLOW_OFFSET))(a1);
		}

		static ::System::Void DirectToMazeAtSubMission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_DIRECTTOMAZEATSUBMISSION_OFFSET))(a1);
		}

		static ::System::Void AdjustCameraViewport()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS_ADJUSTCAMERAVIEWPORT_OFFSET))();
		}
	};
}
