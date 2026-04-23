#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_10.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_0A92C1436010F884;
class Class_1_1CBA230307F9C289_18;
class Class_1_2E57B88467AF63C8_7;
class Class_1_605EF39D29AE23EC;
class Class_1_970473F02CD5F0AB;
class Class_1_A5CB437A9230ABA0_2;
class Class_1_B4F136441499BAFA_1;
class Class_1_D1E0AD3915BCCF29_30;
class Class_1_D7F3D169C3137F53;
class Class_1_F3CA30716D4FAF92_10;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateGameBattleZoneInfo; }
namespace RPG::Client { class FateGameBroadcastInfo; }
namespace RPG::Client { class FateGameGameSettleInfo; }
namespace RPG::Client { class FateGameMasterBattleInfo; }
namespace RPG::Client { class FateGameMasterTalkInfo; }
namespace RPG::Client { class FateGamePhaseRoundInfo; }
namespace RPG::Client { class FateGameRoundSettleInfo; }
namespace RPG::Client { class FateHouguInfo; }
namespace RPG::Client { class FateReijuInfo; }
namespace RPG::Client { class FateShopInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA33BEE0)
#define RPG_CLIENT_FATEGAMEDATA_GETGAMEMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xA33F050)
#define RPG_CLIENT_FATEGAMEDATA_GETGAMETRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xA33EA30)
#define RPG_CLIENT_FATEGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA33F390)
#define RPG_CLIENT_FATEGAMEDATA_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0xA33F3B0)
#define RPG_CLIENT_FATEGAMEDATA_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xA33F480)
#define RPG_CLIENT_FATEGAMEDATA_GET_BROADCASTINFO_OFFSET UNITYSDK_OFFSET(0xA33F570)
#define RPG_CLIENT_FATEGAMEDATA_GET_BUFFTRAITINFO_OFFSET UNITYSDK_OFFSET(0xA33F5C0)
#define RPG_CLIENT_FATEGAMEDATA_GET_CURBATTLEZONEINFO_OFFSET UNITYSDK_OFFSET(0xA33F560)
#define RPG_CLIENT_FATEGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA33F520)
#define RPG_CLIENT_FATEGAMEDATA_GET_GAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA33F530)
#define RPG_CLIENT_FATEGAMEDATA_GET_HOUGUINFO_OFFSET UNITYSDK_OFFSET(0xA33F5A0)
#define RPG_CLIENT_FATEGAMEDATA_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xA33F3A0)
#define RPG_CLIENT_FATEGAMEDATA_GET_LASTGAMESETTLEINFO_OFFSET UNITYSDK_OFFSET(0xA33F5F0)
#define RPG_CLIENT_FATEGAMEDATA_GET_LASTROUNDSETTLEINFO_OFFSET UNITYSDK_OFFSET(0xA33F5E0)
#define RPG_CLIENT_FATEGAMEDATA_GET_MASTERBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xA33F580)
#define RPG_CLIENT_FATEGAMEDATA_GET_MASTERTALKINFO_OFFSET UNITYSDK_OFFSET(0xA33F590)
#define RPG_CLIENT_FATEGAMEDATA_GET_PARAMETERINFO_OFFSET UNITYSDK_OFFSET(0xA33F600)
#define RPG_CLIENT_FATEGAMEDATA_GET_PHASEROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA33F550)
#define RPG_CLIENT_FATEGAMEDATA_GET_REIJUINFO_OFFSET UNITYSDK_OFFSET(0xA33F5B0)
#define RPG_CLIENT_FATEGAMEDATA_GET_SERVERSTATUS_OFFSET UNITYSDK_OFFSET(0xA33F540)
#define RPG_CLIENT_FATEGAMEDATA_GET_SHOPINFO_OFFSET UNITYSDK_OFFSET(0xA33F5D0)
#define RPG_CLIENT_FATEGAMEDATA_GET__AREAROW_OFFSET UNITYSDK_OFFSET(0xA33EFF0)
#define RPG_CLIENT_FATEGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA33BCB0)
#define RPG_CLIENT_FATEGAMEDATA_ISSERVERSTATUSPOSTBATTLE_OFFSET UNITYSDK_OFFSET(0xA33B020)
#define RPG_CLIENT_FATEGAMEDATA_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA33BE90)
#define RPG_CLIENT_FATEGAMEDATA_RESETINPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xA33C220)
#define RPG_CLIENT_FATEGAMEDATA_SYNCGAMESETTLE_OFFSET UNITYSDK_OFFSET(0xA33E610)
#define RPG_CLIENT_FATEGAMEDATA_SYNCMASTERBATTLEPAIRS_OFFSET UNITYSDK_OFFSET(0xA33D1D0)
#define RPG_CLIENT_FATEGAMEDATA_SYNCONEMASTER_OFFSET UNITYSDK_OFFSET(0xA33CF90)
#define RPG_CLIENT_FATEGAMEDATA_SYNCONSERVERSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA33E830)
#define RPG_CLIENT_FATEGAMEDATA_SYNCPARAMREMOVE_OFFSET UNITYSDK_OFFSET(0xA33E960)
#define RPG_CLIENT_FATEGAMEDATA_SYNCPARAMUPDATE_OFFSET UNITYSDK_OFFSET(0xA33E890)
#define RPG_CLIENT_FATEGAMEDATA_SYNCPHASEROUND_OFFSET UNITYSDK_OFFSET(0xA33C7E0)
#define RPG_CLIENT_FATEGAMEDATA_SYNCROUNDSETTLE_OFFSET UNITYSDK_OFFSET(0xA33D5D0)
#define RPG_CLIENT_FATEGAMEDATA_SYNCTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xA33CDD0)
#define RPG_CLIENT_FATEGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA33C270)
#define RPG_CLIENT_FATEGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA33B780)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameData_TypeDefinitionIndex = 58897;

	class FateGameData : public ::System::Object
	{
	public:
		::RPG::Client::FateHouguInfo* _HouguInfo; // 0x10
		::RPG::Client::FateGameGameSettleInfo* _LastGameSettleInfo; // 0x18
		::Class_1_0A92C1436010F884* _ParameterInfo; // 0x20
		::RPG::Client::FateGameBroadcastInfo* _BroadcastInfo; // 0x28
		::RPG::Client::FateGameBattleZoneInfo* _CurBattleZoneInfo; // 0x30
		::RPG::Client::FateGameRoundSettleInfo* _LastRoundSettleInfo; // 0x38
		::RPG::Client::FateBuffTraitInfo* _BuffTraitInfo; // 0x40
		::RPG::Client::FateGamePhaseRoundInfo* _PhaseRoundInfo; // 0x48
		::RPG::Client::FateReijuInfo* _ReijuInfo; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _GameTrialAvatarIDs; // 0x58
		::RPG::Client::FateShopInfo* _ShopInfo; // 0x60
		::RPG::Client::FateGameMasterTalkInfo* _MasterTalkInfo; // 0x68
		::RPG::Client::FateGameMasterBattleInfo* _MasterBattleInfo; // 0x70
		::System::UInt32 _Difficulty; // 0x78
		::System::UInt32 _AreaID; // 0x7C
		::Enum_3_71AA90D596A09AC8_10 _ServerStatus; // 0x80
		::System::UInt32 _GameCount; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetInProgressInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_RESETINPROGRESSINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D7F3D169C3137F53* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void SyncPhaseRound(::Class_1_D1E0AD3915BCCF29_30* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCPHASEROUND_OFFSET))(this, proto);
		}

		::System::Void SyncOneMaster(::Class_1_F3CA30716D4FAF92_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCONEMASTER_OFFSET))(this, proto);
		}

		::System::Void SyncMasterBattlePairs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_1*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCMASTERBATTLEPAIRS_OFFSET))(this, proto);
		}

		::System::Void SyncRoundSettle(::Class_1_2E57B88467AF63C8_7* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCROUNDSETTLE_OFFSET))(this, proto);
		}

		::System::Void SyncGameSettle(::Class_1_A5CB437A9230ABA0_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5CB437A9230ABA0_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCGAMESETTLE_OFFSET))(this, proto);
		}

		::System::Void SyncOnServerStatusChanged(::Enum_3_71AA90D596A09AC8_10 serverStatus)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCONSERVERSTATUSCHANGED_OFFSET))(this, serverStatus);
		}

		::System::Void SyncParamUpdate(::Class_1_605EF39D29AE23EC* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_605EF39D29AE23EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCPARAMUPDATE_OFFSET))(this, proto);
		}

		::System::Void SyncParamRemove(::Class_1_1CBA230307F9C289_18* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCPARAMREMOVE_OFFSET))(this, proto);
		}

		::System::Void SyncTrialAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCTRIALAVATARS_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetGameTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GETGAMETRIALAVATARS_OFFSET))(this);
		}

		::System::UInt32 GetGameMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GETGAMEMONSTERLEVEL_OFFSET))(this);
		}

		::System::Boolean IsServerStatusPostBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_ISSERVERSTATUSPOSTBATTLE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_ISINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_AREANAME_OFFSET))(this);
		}

		::RPG::GameCore::FateAreaType get_AreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_AREATYPE_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_GameCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_GAMECOUNT_OFFSET))(this);
		}

		::Enum_3_71AA90D596A09AC8_10 get_ServerStatus()
		{
			return ((::Enum_3_71AA90D596A09AC8_10(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_SERVERSTATUS_OFFSET))(this);
		}

		::RPG::Client::FateGamePhaseRoundInfo* get_PhaseRoundInfo()
		{
			return ((::RPG::Client::FateGamePhaseRoundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_PHASEROUNDINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameBattleZoneInfo* get_CurBattleZoneInfo()
		{
			return ((::RPG::Client::FateGameBattleZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_CURBATTLEZONEINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameBroadcastInfo* get_BroadcastInfo()
		{
			return ((::RPG::Client::FateGameBroadcastInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_BROADCASTINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameMasterBattleInfo* get_MasterBattleInfo()
		{
			return ((::RPG::Client::FateGameMasterBattleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_MASTERBATTLEINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameMasterTalkInfo* get_MasterTalkInfo()
		{
			return ((::RPG::Client::FateGameMasterTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_MASTERTALKINFO_OFFSET))(this);
		}

		::RPG::Client::FateHouguInfo* get_HouguInfo()
		{
			return ((::RPG::Client::FateHouguInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_HOUGUINFO_OFFSET))(this);
		}

		::RPG::Client::FateReijuInfo* get_ReijuInfo()
		{
			return ((::RPG::Client::FateReijuInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_REIJUINFO_OFFSET))(this);
		}

		::RPG::Client::FateBuffTraitInfo* get_BuffTraitInfo()
		{
			return ((::RPG::Client::FateBuffTraitInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_BUFFTRAITINFO_OFFSET))(this);
		}

		::RPG::Client::FateShopInfo* get_ShopInfo()
		{
			return ((::RPG::Client::FateShopInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_SHOPINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameRoundSettleInfo* get_LastRoundSettleInfo()
		{
			return ((::RPG::Client::FateGameRoundSettleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_LASTROUNDSETTLEINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameGameSettleInfo* get_LastGameSettleInfo()
		{
			return ((::RPG::Client::FateGameGameSettleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_LASTGAMESETTLEINFO_OFFSET))(this);
		}

		::Class_1_0A92C1436010F884* get_ParameterInfo()
		{
			return ((::Class_1_0A92C1436010F884*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_PARAMETERINFO_OFFSET))(this);
		}

		::Class_1_970473F02CD5F0AB* get__AreaRow()
		{
			return ((::Class_1_970473F02CD5F0AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET__AREAROW_OFFSET))(this);
		}
	};
}
