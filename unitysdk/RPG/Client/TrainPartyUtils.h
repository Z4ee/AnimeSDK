#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TrainPartyModule; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartySimpleTalkBgData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrainPartyStepConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTYUTILS_CALCULATESLIDERFILLTIME_OFFSET UNITYSDK_OFFSET(0xCAC53E0)
#define RPG_CLIENT_TRAINPARTYUTILS_CHECKANDTRANSFERTOHEROROOM_OFFSET UNITYSDK_OFFSET(0xCAC7050)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEBUILDUI3DPAMUENTITY_OFFSET UNITYSDK_OFFSET(0xCAC66D0)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEEVENTBGLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCAC57E0)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEMAINENTRANCEUI3DPAMUENTITY_OFFSET UNITYSDK_OFFSET(0xCAC6600)
#define RPG_CLIENT_TRAINPARTYUTILS_CREATEPAMUENTITY_OFFSET UNITYSDK_OFFSET(0xCAC62F0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETBUILDFADEINWAITTIME_OFFSET UNITYSDK_OFFSET(0xCAC56D0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETBUILDSTEPCONFIG_OFFSET UNITYSDK_OFFSET(0xCAC6900)
#define RPG_CLIENT_TRAINPARTYUTILS_GETDIYITEMSUBTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xCAC7640)
#define RPG_CLIENT_TRAINPARTYUTILS_GETEVENTPERFORMANCECLICKPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xCAC6CA0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xCAB5F00)
#define RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERMINIICONPATH_OFFSET UNITYSDK_OFFSET(0xCAB6110)
#define RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xCAB5C80)
#define RPG_CLIENT_TRAINPARTYUTILS_GETMAXPASSENGERSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xCAC5910)
#define RPG_CLIENT_TRAINPARTYUTILS_GETMEETINGRANKINFOBYSCORE_OFFSET UNITYSDK_OFFSET(0xCAC5A10)
#define RPG_CLIENT_TRAINPARTYUTILS_GETPASSENGERMAXSLIDERFILLNUMS_OFFSET UNITYSDK_OFFSET(0xCAC52E0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETPLAYERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xCAB5BD0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETSTATUSRANKBYEXP_OFFSET UNITYSDK_OFFSET(0xCAC5AA0)
#define RPG_CLIENT_TRAINPARTYUTILS_GETTEXTMOTIONSPEED_OFFSET UNITYSDK_OFFSET(0xCAC6B60)
#define RPG_CLIENT_TRAINPARTYUTILS_GETTRAINPARTYSTATTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xCAC5240)
#define RPG_CLIENT_TRAINPARTYUTILS_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xCAC5280)
#define RPG_CLIENT_TRAINPARTYUTILS_GET__PLAYER_ROOM_ENTRANCE_ID_OFFSET UNITYSDK_OFFSET(0xCAC7DF0)
#define RPG_CLIENT_TRAINPARTYUTILS_ISACTIVITYDIYITEM_OFFSET UNITYSDK_OFFSET(0xCAC76A0)
#define RPG_CLIENT_TRAINPARTYUTILS_ISGAMEPLAYUNLOCK_OFFSET UNITYSDK_OFFSET(0xCAC7010)
#define RPG_CLIENT_TRAINPARTYUTILS_PAUSEBACKGROUNDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCAC6A30)
#define RPG_CLIENT_TRAINPARTYUTILS_PLAYBACKGROUNDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCAC6960)
#define RPG_CLIENT_TRAINPARTYUTILS_SHOWSTREAMINGTRANSFER_OFFSET UNITYSDK_OFFSET(0xCAC6DC0)
#define RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOHEROROOM_OFFSET UNITYSDK_OFFSET(0xCAC5BE0)
#define RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOPLAYERROOM_OFFSET UNITYSDK_OFFSET(0xCAC7720)
#define RPG_CLIENT_TRAINPARTYUTILS__ONENTITYLOADFINISH_OFFSET UNITYSDK_OFFSET(0xCAC7C70)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyUtils_TypeDefinitionIndex = 63786;

	class TrainPartyUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetTrainPartyStatTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETTRAINPARTYSTATTYPECOUNT_OFFSET))();
		}

		static ::System::UInt32 GetPlayerPassengerID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETPLAYERPASSENGERID_OFFSET))();
		}

		static ::System::String* GetFemalePlayerPassengerRoundIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERROUNDICONPATH_OFFSET))();
		}

		static ::System::String* GetFemalePlayerPassengerItemIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERITEMICONPATH_OFFSET))();
		}

		static ::System::String* GetFemalePlayerPassengerMiniIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETFEMALEPLAYERPASSENGERMINIICONPATH_OFFSET))();
		}

		static ::System::UInt32 GetPassengerMaxSliderFillNums()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETPASSENGERMAXSLIDERFILLNUMS_OFFSET))();
		}

		static ::System::Single CalculateSliderFillTime(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CALCULATESLIDERFILLTIME_OFFSET))(a1);
		}

		static ::System::Single GetBuildFadeInWaitTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETBUILDFADEINWAITTIME_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreateEventBgLevelGraph(::RPG::Client::TrainParty::TrainPartySimpleTalkBgData* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::Client::TrainParty::TrainPartySimpleTalkBgData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEEVENTBGLEVELGRAPH_OFFSET))(a1);
		}

		static ::System::UInt32 GetMaxPassengerSkillCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETMAXPASSENGERSKILLCOUNT_OFFSET))();
		}

		static ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* GetMeetingRankInfoByScore(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETMEETINGRANKINFOBYSCORE_OFFSET))(a1);
		}

		static ::System::UInt32 GetStatusRankByExp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETSTATUSRANKBYEXP_OFFSET))(a1);
		}

		static ::System::Boolean TransferToHeroRoom()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOHEROROOM_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreatePamuEntity(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEPAMUENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* CreateMainEntranceUI3DPamuEntity(::UnityEngine::Transform* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEMAINENTRANCEUI3DPAMUENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* CreateBuildUI3DPamuEntity(::UnityEngine::Transform* a1, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::UnityEngine::Transform*, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CREATEBUILDUI3DPAMUENTITY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::TrainPartyStepConfigRow* GetBuildStepConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyStepConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETBUILDSTEPCONFIG_OFFSET))(a1);
		}

		static ::System::Void PlayBackGroundPerformance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_PLAYBACKGROUNDPERFORMANCE_OFFSET))();
		}

		static ::System::Void PauseBackGroundPerformance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_PAUSEBACKGROUNDPERFORMANCE_OFFSET))();
		}

		static ::System::Single GetTextMotionSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETTEXTMOTIONSPEED_OFFSET))();
		}

		static ::System::Single GetEventPerformanceClickProtectTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETEVENTPERFORMANCECLICKPROTECTTIME_OFFSET))();
		}

		static ::System::Void ShowStreamingTransfer(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_SHOWSTREAMINGTRANSFER_OFFSET))(a1);
		}

		static ::System::Boolean IsGameplayUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_ISGAMEPLAYUNLOCK_OFFSET))();
		}

		static ::System::Void CheckAndTransferToHeroRoom()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_CHECKANDTRANSFERTOHEROROOM_OFFSET))();
		}

		static ::System::String* GetDiyItemSubTypeIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GETDIYITEMSUBTYPEICONPATH_OFFSET))();
		}

		static ::System::Boolean IsActivityDiyItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_ISACTIVITYDIYITEM_OFFSET))(a1);
		}

		static ::System::Void TransferToPlayerRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_TRANSFERTOPLAYERROOM_OFFSET))(a1);
		}

		static ::System::Void _OnEntityLoadFinish(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS__ONENTITYLOADFINISH_OFFSET))(a1);
		}

		static ::RPG::Client::TrainPartyModule* get__Module()
		{
			return ((::RPG::Client::TrainPartyModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GET__MODULE_OFFSET))();
		}

		static ::System::UInt32 get__PLAYER_ROOM_ENTRANCE_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYUTILS_GET__PLAYER_ROOM_ENTRANCE_ID_OFFSET))();
		}
	};
}
