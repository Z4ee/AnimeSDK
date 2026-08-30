#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_76F6F6F3F603AF89;
class Class_1_9EE357109ED696DE;
class Class_1_A2890DC722DF51C5;
class Class_1_C350877AE912EE6F;
namespace RPG::Client { class ExpeditionBattleBuffRecordViewModel; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleRankViewModel; }
namespace RPG::Client { class ExpeditionBattleRouteRecordViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xCF02CF0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_BUFFRECORDS_OFFSET UNITYSDK_OFFSET(0xCF028C0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_HASHISTORYBESTREPORT_OFFSET UNITYSDK_OFFSET(0xCF02BD0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xCF02B80)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ISRANKNEWRECORD_OFFSET UNITYSDK_OFFSET(0xCF02C10)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ISSTARNEWRECORD_OFFSET UNITYSDK_OFFSET(0xCF02C90)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xCF02B30)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0xCF02AD0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_MAXDAILYCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCF02A80)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_RANKTYPE_OFFSET UNITYSDK_OFFSET(0xCF028E0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_RANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF02880)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_REMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCF02A30)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ROUTERECORDS_OFFSET UNITYSDK_OFFSET(0xCF028A0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_STARCOUNT_OFFSET UNITYSDK_OFFSET(0xCF02930)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_STARUPCOUNT_OFFSET UNITYSDK_OFFSET(0xCF02980)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_SET_BUFFRECORDS_OFFSET UNITYSDK_OFFSET(0xCF028D0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_SET_RANKVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF02890)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_SET_ROUTERECORDS_OFFSET UNITYSDK_OFFSET(0xCF028B0)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF02D40)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__INITBUFFRECORDS_OFFSET UNITYSDK_OFFSET(0xCF03080)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__INITRANK_OFFSET UNITYSDK_OFFSET(0xCF03320)
#define RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__INITROUTERECORDS_OFFSET UNITYSDK_OFFSET(0xCF02DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleSettleViewModel_TypeDefinitionIndex = 64016;

	class ExpeditionBattleSettleViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleBuffRecordViewModel*>* _BuffRecords_k__BackingField; // 0x10
		::Class_1_A2890DC722DF51C5* _HistoryBestReportData; // 0x18
		::RPG::Client::ExpeditionBattleRankViewModel* _RankViewModel_k__BackingField; // 0x20
		::Class_1_9EE357109ED696DE* _ViewModelFactory; // 0x28
		::Class_1_A2890DC722DF51C5* _DisplayReportData; // 0x30
		::RPG::Client::ExpeditionBattleMap* _Map; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* _RouteRecords_k__BackingField; // 0x40
		::Class_1_C350877AE912EE6F* _MonsterService; // 0x48
		::System::Boolean _HasHistoryBestReport; // 0x50

		::System::Void _ctor(::RPG::Client::ExpeditionBattleMap* a1, ::Class_1_A2890DC722DF51C5* a2, ::Class_1_A2890DC722DF51C5* a3, ::System::Boolean a4, ::Class_1_C350877AE912EE6F* a5, ::Class_1_9EE357109ED696DE* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*, ::Class_1_A2890DC722DF51C5*, ::Class_1_A2890DC722DF51C5*, ::System::Boolean, ::Class_1_C350877AE912EE6F*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::ExpeditionBattleRankViewModel* get_RankViewModel()
		{
			return ((::RPG::Client::ExpeditionBattleRankViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_RANKVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_RankViewModel(::RPG::Client::ExpeditionBattleRankViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleRankViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_SET_RANKVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* get_RouteRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ROUTERECORDS_OFFSET))(this);
		}

		::System::Void set_RouteRecords(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_SET_ROUTERECORDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleBuffRecordViewModel*>* get_BuffRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleBuffRecordViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_BUFFRECORDS_OFFSET))(this);
		}

		::System::Void set_BuffRecords(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleBuffRecordViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleBuffRecordViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_SET_BUFFRECORDS_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRank get_RankType()
		{
			return ((::RPG::Client::ExpeditionBattleRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_RANKTYPE_OFFSET))(this);
		}

		::System::UInt32 get_StarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_STARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_StarUpCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_STARUPCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_RemainingChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_REMAININGCHALLENGECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxDailyChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_MAXDAILYCHALLENGECOUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_MapName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_MAPNAME_OFFSET))(this);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_MAPID_OFFSET))(this);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::Boolean get_HasHistoryBestReport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_HASHISTORYBESTREPORT_OFFSET))(this);
		}

		::System::Boolean get_IsRankNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ISRANKNEWRECORD_OFFSET))(this);
		}

		::System::Boolean get_IsStarNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_ISSTARNEWRECORD_OFFSET))(this);
		}

		::System::String* get_BGMState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void _InitRouteRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__INITROUTERECORDS_OFFSET))(this);
		}

		::System::Void _InitBuffRecords(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_76F6F6F3F603AF89*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_76F6F6F3F603AF89*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__INITBUFFRECORDS_OFFSET))(this, a1);
		}

		::System::Void _InitRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESETTLEVIEWMODEL__INITRANK_OFFSET))(this);
		}
	};
}
