#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_52.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/RaidConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidEnterType.h"

class Class_1_766E1CF11E204F43_10;
class Class_1_A272ECC07A17819C_2;
class Class_1_BB4B99DE4C2501EC_8;
class Class_1_EF2D3B79941AF6F8;
class Class_2_AA9239F66AD90F88_4;
namespace Proto { class ItemList; }
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RaidBattleScoringResult; }
namespace RPG::Client { class TreasureChallengeData; }
namespace RPG::Client { class TreasureChallengeInstance; }
namespace RPG::Client { class TreasureChallengeTarget; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RAIDMODULE_CANSHOWRAIDTEAMHINT_OFFSET UNITYSDK_OFFSET(0xC6B1B30)
#define RPG_CLIENT_RAIDMODULE_CHECKISHAVINGSAVE_OFFSET UNITYSDK_OFFSET(0xC6AE6D0)
#define RPG_CLIENT_RAIDMODULE_CHECKRAIDBANWITHHINT_OFFSET UNITYSDK_OFFSET(0xC6B3EE0)
#define RPG_CLIENT_RAIDMODULE_CUSTOMADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6AED20)
#define RPG_CLIENT_RAIDMODULE_CUSTOMDISPOSETREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xC6AF690)
#define RPG_CLIENT_RAIDMODULE_CUSTOMINITTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xC6AE8E0)
#define RPG_CLIENT_RAIDMODULE_CUSTOMUINITTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xC6AF580)
#define RPG_CLIENT_RAIDMODULE_GETDEFAULTRAIDTEAMWITHTRIAL_OFFSET UNITYSDK_OFFSET(0xC6B4810)
#define RPG_CLIENT_RAIDMODULE_GETLASTACTIVERAIDID_OFFSET UNITYSDK_OFFSET(0xC6B3A80)
#define RPG_CLIENT_RAIDMODULE_GETRAIDENTERTYPE_OFFSET UNITYSDK_OFFSET(0xC6B3BA0)
#define RPG_CLIENT_RAIDMODULE_GETRAIDMINWORLDLV_OFFSET UNITYSDK_OFFSET(0xC6A90F0)
#define RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGESTATUS_OFFSET UNITYSDK_OFFSET(0xC6AE5C0)
#define RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGEVALIDLEVELS_OFFSET UNITYSDK_OFFSET(0xC6ADA10)
#define RPG_CLIENT_RAIDMODULE_GETTREASUREREWARDDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0xC6AE490)
#define RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDCONFIG_OFFSET UNITYSDK_OFFSET(0xC6B4540)
#define RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDINSTANCE_OFFSET UNITYSDK_OFFSET(0xC6B2570)
#define RPG_CLIENT_RAIDMODULE_GET_FINISHTIME_OFFSET UNITYSDK_OFFSET(0xC6B2500)
#define RPG_CLIENT_RAIDMODULE_GET_ISINRAID_OFFSET UNITYSDK_OFFSET(0xC6AB360)
#define RPG_CLIENT_RAIDMODULE_GET_ISINTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xC6B2560)
#define RPG_CLIENT_RAIDMODULE_GET_ISRAIDLOCKCAPTAIN_OFFSET UNITYSDK_OFFSET(0xC6B6F30)
#define RPG_CLIENT_RAIDMODULE_GET__CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0xC6B5A00)
#define RPG_CLIENT_RAIDMODULE_GOTORAID_OFFSET UNITYSDK_OFFSET(0xC6B2780)
#define RPG_CLIENT_RAIDMODULE_INITTREASURECHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0xC6AEB20)
#define RPG_CLIENT_RAIDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC6B2580)
#define RPG_CLIENT_RAIDMODULE_ISCURRENTRAIDNEEDTOHIDESTORYLINETOAST_OFFSET UNITYSDK_OFFSET(0xC6B4030)
#define RPG_CLIENT_RAIDMODULE_ISNEXTLEVELUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC6B0360)
#define RPG_CLIENT_RAIDMODULE_ISRAIDBANNED_OFFSET UNITYSDK_OFFSET(0xC6B3E10)
#define RPG_CLIENT_RAIDMODULE_ISRAIDEXIST_OFFSET UNITYSDK_OFFSET(0xC6B29F0)
#define RPG_CLIENT_RAIDMODULE_ISRAIDFINISHED_OFFSET UNITYSDK_OFFSET(0xC6B3D50)
#define RPG_CLIENT_RAIDMODULE_ISRAIDTEAMCANEDIT_OFFSET UNITYSDK_OFFSET(0xC6B41D0)
#define RPG_CLIENT_RAIDMODULE_ISSAVERAIDTYPE_OFFSET UNITYSDK_OFFSET(0xC6AE850)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGECOMPLETED_OFFSET UNITYSDK_OFFSET(0xC6AD850)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYNORMAL_OFFSET UNITYSDK_OFFSET(0xC6ADE40)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC6ADD00)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKED_OFFSET UNITYSDK_OFFSET(0xC6ADC80)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC6AD930)
#define RPG_CLIENT_RAIDMODULE_LEAVERAID_OFFSET UNITYSDK_OFFSET(0xC6B3410)
#define RPG_CLIENT_RAIDMODULE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xC6B18A0)
#define RPG_CLIENT_RAIDMODULE_ONCMDDELSAVERAIDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC6B2110)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETALLSAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B1F30)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B0C60)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETSAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B1EB0)
#define RPG_CLIENT_RAIDMODULE_ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B1D80)
#define RPG_CLIENT_RAIDMODULE_ONCMDRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xC6B0FD0)
#define RPG_CLIENT_RAIDMODULE_ONCMDSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B1CD0)
#define RPG_CLIENT_RAIDMODULE_ONLEAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B1BC0)
#define RPG_CLIENT_RAIDMODULE_RAIDLOGINPROMISE_OFFSET UNITYSDK_OFFSET(0xC6B36A0)
#define RPG_CLIENT_RAIDMODULE_REGISTERLEAVERAIDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC6B3AC0)
#define RPG_CLIENT_RAIDMODULE_RESETTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xC6AE660)
#define RPG_CLIENT_RAIDMODULE_RESTARTRAID_OFFSET UNITYSDK_OFFSET(0xC6B3760)
#define RPG_CLIENT_RAIDMODULE_SENDTREASURECHALLENGESETTLEMENT_OFFSET UNITYSDK_OFFSET(0xC6AFD60)
#define RPG_CLIENT_RAIDMODULE_STARTRAIDBYMESSAGE_OFFSET UNITYSDK_OFFSET(0xC6B2BA0)
#define RPG_CLIENT_RAIDMODULE_STARTRAID_OFFSET UNITYSDK_OFFSET(0xC6ADFC0)
#define RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGEBYHELIOBUS_OFFSET UNITYSDK_OFFSET(0xC6AE380)
#define RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xC6A93E0)
#define RPG_CLIENT_RAIDMODULE_TRACKFIRSTSTARTMISSIONINCURRENTSNAPMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xC6B1850)
#define RPG_CLIENT_RAIDMODULE_TRYRECORDTEAMHINTFLAG_OFFSET UNITYSDK_OFFSET(0xC6B2E80)
#define RPG_CLIENT_RAIDMODULE_TRYSHOWTEAMHINT_OFFSET UNITYSDK_OFFSET(0xC6B18F0)
#define RPG_CLIENT_RAIDMODULE_TRYSWITCHCLIENTRAIDMAP_OFFSET UNITYSDK_OFFSET(0xC6B37D0)
#define RPG_CLIENT_RAIDMODULE_TRYSWITCHRAIDMAP_OFFSET UNITYSDK_OFFSET(0xC6B3860)
#define RPG_CLIENT_RAIDMODULE_TRYUPDATETREASURECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xC6AF760)
#define RPG_CLIENT_RAIDMODULE_UNREGISTERLEAVERAIDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC6B3B30)
#define RPG_CLIENT_RAIDMODULE_UPDATECURRENTTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xC6AF6F0)
#define RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGENEWSTATUS_OFFSET UNITYSDK_OFFSET(0xC6B0760)
#define RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGETARGETONRSP_OFFSET UNITYSDK_OFFSET(0xC6AF9B0)
#define RPG_CLIENT_RAIDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6B5590)
#define RPG_CLIENT_RAIDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6B5CB0)
#define RPG_CLIENT_RAIDMODULE__CACHEREWARD_OFFSET UNITYSDK_OFFSET(0xC6B66D0)
#define RPG_CLIENT_RAIDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6B7250)
#define RPG_CLIENT_RAIDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC6B6FE0)
#define RPG_CLIENT_RAIDMODULE__DISPOSECURRENTRAID_OFFSET UNITYSDK_OFFSET(0xC6B6ED0)
#define RPG_CLIENT_RAIDMODULE__DOENTERRAID_OFFSET UNITYSDK_OFFSET(0xC6B60A0)
#define RPG_CLIENT_RAIDMODULE__ENTERMAP_OFFSET UNITYSDK_OFFSET(0xC6B0BB0)
#define RPG_CLIENT_RAIDMODULE__GETCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xC6B45B0)
#define RPG_CLIENT_RAIDMODULE__GETDEFAULTRAIDTEAM_OFFSET UNITYSDK_OFFSET(0xC6B2F60)
#define RPG_CLIENT_RAIDMODULE__INITBATTLESCORINGRESULT_OFFSET UNITYSDK_OFFSET(0xC6B5AD0)
#define RPG_CLIENT_RAIDMODULE__INITRAIDTYPETABLE_OFFSET UNITYSDK_OFFSET(0xC6B2620)
#define RPG_CLIENT_RAIDMODULE__NOTIFYBATTLESCORINGRESULT_OFFSET UNITYSDK_OFFSET(0xC6B5820)
#define RPG_CLIENT_RAIDMODULE__NOTIFYFARMREWARD_OFFSET UNITYSDK_OFFSET(0xC6B5790)
#define RPG_CLIENT_RAIDMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET UNITYSDK_OFFSET(0xC6B2360)
#define RPG_CLIENT_RAIDMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B6A10)
#define RPG_CLIENT_RAIDMODULE__ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B6470)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDCOLLECTIONENTERNEXTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B6E10)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xC6B6580)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDKICKBYSERVER_OFFSET UNITYSDK_OFFSET(0xC6B2190)
#define RPG_CLIENT_RAIDMODULE__ONCMDSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6B6000)
#define RPG_CLIENT_RAIDMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xC6B56F0)
#define RPG_CLIENT_RAIDMODULE__ONRAIDBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xC6B5880)
#define RPG_CLIENT_RAIDMODULE__RAIDLOGINPROMISE_B__62_0_OFFSET UNITYSDK_OFFSET(0xC6B72E0)
#define RPG_CLIENT_RAIDMODULE__SENDGETALLSAVERAIDDATA_OFFSET UNITYSDK_OFFSET(0xC6AF340)
#define RPG_CLIENT_RAIDMODULE__SENDGETSAVERAIDDATA_OFFSET UNITYSDK_OFFSET(0xC6AF400)
#define RPG_CLIENT_RAIDMODULE__SENDSTARTRAIDREQ_OFFSET UNITYSDK_OFFSET(0xC6B3020)
#define RPG_CLIENT_RAIDMODULE__SETTRACKINGMISSIONWHENLEAVE_OFFSET UNITYSDK_OFFSET(0xC6B1270)
#define RPG_CLIENT_RAIDMODULE__SETTRACKMISSIONWHENRELOGIN_OFFSET UNITYSDK_OFFSET(0xC6B17E0)
#define RPG_CLIENT_RAIDMODULE__TRYUPDATETREASURECHALLENGESAVESTATUS_OFFSET UNITYSDK_OFFSET(0xC6AF8D0)
#define RPG_CLIENT_RAIDMODULE__UPDATERAIDDATA_OFFSET UNITYSDK_OFFSET(0xC6B68A0)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC6B7300)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6B7380)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6B73E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule_TypeDefinitionIndex = 62425;

	class RaidModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::RaidConfigType>** StaticGet_TypeNeedShowSettlePage()
		{
			return (::Il2CppArray<::RPG::GameCore::RaidConfigType>**)Il2CppClass::FromTypeDefinitionIndex(RaidModule_TypeDefinitionIndex)->GetStaticField(0x28FA0);
		}
		::RPG::Client::RaidBattleScoringResult* _CacheBattleScoringResult; // 0x10
		::RPG::Client::TreasureChallengeInstance* _CurrentRaidInstance; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _CachedRewardItems; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedRaidIDs; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _LastTeamData; // 0x30
		::System::Action* _LeaveRaidCallback; // 0x38
		::RPG::Client::Promises::Promise* _InitialNotifyPromise; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::Client::TreasureChallengeTarget*>* _TreasureChallengeTargets; // 0x48
		::RPG::Client::Promises::Promise* _InitialRaidPromise; // 0x50
		::Class_2_AA9239F66AD90F88_4* _RaidMissionTrackingStrategy; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RaidConfigType>* _RaidTypeTable; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::Client::TreasureChallengeData*>* _TreasureChallengeStatus; // 0x68
		::System::UInt32 _CurrentRaidLevel; // 0x70
		::Enum_3_DB663931210BBC27_52 _CurrentRaidStatus; // 0x74
		::System::UInt32 _CurrentRaidID; // 0x78
		::System::Boolean ShowTeamHintFlag; // 0x7C
		::System::Boolean NeedAutoTriggerRaidEntrance; // 0x7D
		::System::Boolean _WaitMissionInit; // 0x7E
		::RPG::GameCore::GameModeType _RaidGameMode; // 0x80
		::System::UInt32 _HeliobusSelectSkillID; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CCTOR_OFFSET))();
		}

		::System::Boolean IsTreasureChallengeCompleted(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGECOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTreasureChallengeRewardTaken(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGEREWARDTAKEN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTreasureChallengeValidLevels(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGEVALIDLEVELS_OFFSET))(this, a1);
		}

		::System::Boolean IsTreasureChallengeLevelLocked(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTreasureChallengeLevelLockedBySchedule(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYSCHEDULE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTreasureChallengeLevelLockedByNormal(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYNORMAL_OFFSET))(this, a1, a2);
		}

		::System::Void StartTreasureChallenge(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartTreasureChallengeByHeliobus(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGEBYHELIOBUS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetTreasureRewardDisplayDatas(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASUREREWARDDISPLAYDATAS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TreasureChallengeTarget* GetTreasureChallengeStatus(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TreasureChallengeTarget*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGESTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void ResetTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RESETTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Boolean CheckIsHavingSave(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CHECKISHAVINGSAVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsSaveRaidType(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISSAVERAIDTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void CustomInitTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMINITTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void CustomAddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SendGetAllSaveRaidData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDGETALLSAVERAIDDATA_OFFSET))(this);
		}

		::System::Void _SendGetSaveRaidData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDGETSAVERAIDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void CustomUinitTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMUINITTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void CustomDisposeTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMDISPOSETREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void UpdateCurrentTreasureChallenge(::System::UInt32 a1, ::System::UInt32 a2, ::Enum_3_DB663931210BBC27_52 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_52))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATECURRENTTREASURECHALLENGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryUpdateTreasureChallengeData(::Class_1_BB4B99DE4C2501EC_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYUPDATETREASURECHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateTreasureChallengeSaveStatus(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__TRYUPDATETREASURECHALLENGESAVESTATUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitTreasureChallengeTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_INITTREASURECHALLENGETARGETS_OFFSET))(this);
		}

		::System::Void UpdateTreasureChallengeTargetOnRsp(::Class_1_766E1CF11E204F43_10* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGETARGETONRSP_OFFSET))(this, a1);
		}

		::System::Void SendTreasureChallengeSettlement(::Class_1_BB4B99DE4C2501EC_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_SENDTREASURECHALLENGESETTLEMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsNextLevelUnlocked(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISNEXTLEVELUNLOCKED_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTreasureChallengeNewStatus(::Class_1_BB4B99DE4C2501EC_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGENEWSTATUS_OFFSET))(this, a1);
		}

		::System::Void _EnterMap(::Class_1_EF2D3B79941AF6F8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ENTERMAP_OFFSET))(this, a1);
		}

		::System::Void OnCmdGetRaidInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETRAIDINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdRaidInfoNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDRAIDINFONOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SetTrackingMissionWhenLeave(::Enum_3_DB663931210BBC27_52 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_52, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SETTRACKINGMISSIONWHENLEAVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetTrackMissionWhenReLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SETTRACKMISSIONWHENRELOGIN_OFFSET))(this);
		}

		::System::Void TrackFirstStartMissionInCurrentSnapMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRACKFIRSTSTARTMISSIONINCURRENTSNAPMISSIONLIST_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void TryShowTeamHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSHOWTEAMHINT_OFFSET))(this);
		}

		::System::Void OnLeaveRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONLEAVERAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdStartRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDSTARTRAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdHeliobusStartRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdGetSaveRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETSAVERAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdGetAllSaveRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETALLSAVERAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdDelSaveRaidScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDDELSAVERAIDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRaidKickByServer(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDKICKBYSERVER_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAdventurePhasePopupFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET))(this, a1);
		}

		::System::UInt64 get_FinishTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_FINISHTIME_OFFSET))(this);
		}

		::System::Boolean get_IsInTreasureChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_ISINTREASURECHALLENGE_OFFSET))(this);
		}

		::RPG::Client::TreasureChallengeInstance* get_CurrentRaidInstance()
		{
			return ((::RPG::Client::TreasureChallengeInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDINSTANCE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_INIT_OFFSET))(this);
		}

		::System::Boolean GoToRaid(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GOTORAID_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean StartRaidByMessage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTRAIDBYMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void StartRaid(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Boolean a5, ::RPG::GameCore::RaidConfigType a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTRAID_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void TryRecordTeamHintFlag(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYRECORDTEAMHINTFLAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanShowRaidTeamHint(::RPG::GameCore::RaidConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CANSHOWRAIDTEAMHINT_OFFSET))(this, a1);
		}

		::System::Void LeaveRaid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_LEAVERAID_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* RaidLoginPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RAIDLOGINPROMISE_OFFSET))(this);
		}

		::System::Void RestartRaid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RESTARTRAID_OFFSET))(this);
		}

		::System::Boolean TrySwitchClientRaidMap(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSWITCHCLIENTRAIDMAP_OFFSET))(this, a1);
		}

		::System::Boolean TrySwitchRaidMap(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSWITCHRAIDMAP_OFFSET))(this, a1);
		}

		::System::UInt32 GetLastActiveRaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETLASTACTIVERAIDID_OFFSET))(this);
		}

		::System::Void RegisterLeaveRaidCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_REGISTERLEAVERAIDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterLeaveRaidCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UNREGISTERLEAVERAIDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsRaidExist(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDEXIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::RaidEnterType GetRaidEnterType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RaidEnterType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETRAIDENTERTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsRaidFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 GetRaidMinWorldLv(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETRAIDMINWORLDLV_OFFSET))(this, a1);
		}

		::System::Boolean IsRaidBanned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDBANNED_OFFSET))(this, a1);
		}

		::System::Boolean CheckRaidBanWithHint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CHECKRAIDBANWITHHINT_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentRaidNeedToHideStoryLineToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISCURRENTRAIDNEEDTOHIDESTORYLINETOAST_OFFSET))(this);
		}

		::System::Boolean IsRaidTeamCanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDTEAMCANEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetCurrentTeam()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__GETCURRENTTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDefaultRaidTeamWithTrial(::RPG::GameCore::RaidConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETDEFAULTRAIDTEAMWITHTRIAL_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnRaidBattleFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONRAIDBATTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdStartRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDSTARTRAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _DoEnterRaid(::Class_1_A272ECC07A17819C_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A272ECC07A17819C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__DOENTERRAID_OFFSET))(this, a1);
		}

		::System::Void _OnCmdHeliobusStartRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRaidInfoNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDINFONOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateRaidData(::System::UInt32 a1, ::Enum_3_DB663931210BBC27_52 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_DB663931210BBC27_52))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__UPDATERAIDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRaidInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRaidCollectionEnterNextRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDCOLLECTIONENTERNEXTRAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _DisposeCurrentRaid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__DISPOSECURRENTRAID_OFFSET))(this);
		}

		::System::Void _CacheReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CACHEREWARD_OFFSET))(this, a1);
		}

		::System::Void _InitRaidTypeTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__INITRAIDTYPETABLE_OFFSET))(this);
		}

		::System::Void _InitBattleScoringResult(::RPG::Client::BattleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__INITBATTLESCORINGRESULT_OFFSET))(this, a1);
		}

		::System::Void _NotifyFarmReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__NOTIFYFARMREWARD_OFFSET))(this);
		}

		::System::Void _NotifyBattleScoringResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__NOTIFYBATTLESCORINGRESULT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDefaultRaidTeam(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__GETDEFAULTRAIDTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void _SendStartRaidReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Boolean a5, ::RPG::GameCore::RaidConfigType a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDSTARTRAIDREQ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean get_IsInRaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_ISINRAID_OFFSET))(this);
		}

		::RPG::GameCore::RaidConfigRow* get_CurrentRaidConfig()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsRaidLockCaptain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET_ISRAIDLOCKCAPTAIN_OFFSET))(this);
		}

		::RPG::GameCore::RaidConfigType get__CurrentRaidType()
		{
			return ((::RPG::GameCore::RaidConfigType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GET__CURRENTRAIDTYPE_OFFSET))(this);
		}

		::System::Void _RaidLoginPromise_b__62_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__RAIDLOGINPROMISE_B__62_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
