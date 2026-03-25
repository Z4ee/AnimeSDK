#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_47.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/RaidConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidEnterType.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_B3B48B7EEC81A99A_6;
class Class_1_C2029720BB7172FE_2;
class Class_1_DAA5A9E9FAA73ED5;
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

#define RPG_CLIENT_RAIDMODULE_CANSHOWRAIDTEAMHINT_OFFSET UNITYSDK_OFFSET(0xA27DCF0)
#define RPG_CLIENT_RAIDMODULE_CHECKISHAVINGSAVE_OFFSET UNITYSDK_OFFSET(0xA27AAC0)
#define RPG_CLIENT_RAIDMODULE_CHECKRAIDBANWITHHINT_OFFSET UNITYSDK_OFFSET(0xA280130)
#define RPG_CLIENT_RAIDMODULE_CUSTOMADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA27B0F0)
#define RPG_CLIENT_RAIDMODULE_CUSTOMDISPOSETREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA27B6F0)
#define RPG_CLIENT_RAIDMODULE_CUSTOMINITTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA27AD10)
#define RPG_CLIENT_RAIDMODULE_CUSTOMUINITTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA27B5C0)
#define RPG_CLIENT_RAIDMODULE_GETDEFAULTRAIDTEAMWITHTRIAL_OFFSET UNITYSDK_OFFSET(0xA2809E0)
#define RPG_CLIENT_RAIDMODULE_GETLASTACTIVERAIDID_OFFSET UNITYSDK_OFFSET(0xA27FD00)
#define RPG_CLIENT_RAIDMODULE_GETRAIDENTERTYPE_OFFSET UNITYSDK_OFFSET(0xA27FE30)
#define RPG_CLIENT_RAIDMODULE_GETRAIDMINWORLDLV_OFFSET UNITYSDK_OFFSET(0xA275690)
#define RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGESTATUS_OFFSET UNITYSDK_OFFSET(0xA27A990)
#define RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGEVALIDLEVELS_OFFSET UNITYSDK_OFFSET(0xA279D50)
#define RPG_CLIENT_RAIDMODULE_GETTREASUREREWARDDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0xA27A7A0)
#define RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDCONFIG_OFFSET UNITYSDK_OFFSET(0xA2807B0)
#define RPG_CLIENT_RAIDMODULE_GET_CURRENTRAIDINSTANCE_OFFSET UNITYSDK_OFFSET(0xA27E7C0)
#define RPG_CLIENT_RAIDMODULE_GET_FINISHTIME_OFFSET UNITYSDK_OFFSET(0xA27E750)
#define RPG_CLIENT_RAIDMODULE_GET_ISINRAID_OFFSET UNITYSDK_OFFSET(0xA277940)
#define RPG_CLIENT_RAIDMODULE_GET_ISINTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA27E7B0)
#define RPG_CLIENT_RAIDMODULE_GET_ISRAIDLOCKCAPTAIN_OFFSET UNITYSDK_OFFSET(0xA282B00)
#define RPG_CLIENT_RAIDMODULE_GET__CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0xA2819B0)
#define RPG_CLIENT_RAIDMODULE_GOTORAID_OFFSET UNITYSDK_OFFSET(0xA27E970)
#define RPG_CLIENT_RAIDMODULE_INITTREASURECHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0xA27AF40)
#define RPG_CLIENT_RAIDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA27E7D0)
#define RPG_CLIENT_RAIDMODULE_ISCURRENTRAIDNEEDTOHIDESTORYLINETOAST_OFFSET UNITYSDK_OFFSET(0xA280280)
#define RPG_CLIENT_RAIDMODULE_ISNEXTLEVELUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA27C430)
#define RPG_CLIENT_RAIDMODULE_ISRAIDBANNED_OFFSET UNITYSDK_OFFSET(0xA280050)
#define RPG_CLIENT_RAIDMODULE_ISRAIDEXIST_OFFSET UNITYSDK_OFFSET(0xA27EC20)
#define RPG_CLIENT_RAIDMODULE_ISRAIDFINISHED_OFFSET UNITYSDK_OFFSET(0xA27FFF0)
#define RPG_CLIENT_RAIDMODULE_ISRAIDTEAMCANEDIT_OFFSET UNITYSDK_OFFSET(0xA280420)
#define RPG_CLIENT_RAIDMODULE_ISSAVERAIDTYPE_OFFSET UNITYSDK_OFFSET(0xA27AC80)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGECOMPLETED_OFFSET UNITYSDK_OFFSET(0xA279B20)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYNORMAL_OFFSET UNITYSDK_OFFSET(0xA27A100)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA279FB0)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKED_OFFSET UNITYSDK_OFFSET(0xA279F30)
#define RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA279C30)
#define RPG_CLIENT_RAIDMODULE_LEAVERAID_OFFSET UNITYSDK_OFFSET(0xA27F6A0)
#define RPG_CLIENT_RAIDMODULE_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA27DA60)
#define RPG_CLIENT_RAIDMODULE_ONCMDDELSAVERAIDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA27E3A0)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETALLSAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA27E1C0)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA27CD00)
#define RPG_CLIENT_RAIDMODULE_ONCMDGETSAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA27E140)
#define RPG_CLIENT_RAIDMODULE_ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA27DF40)
#define RPG_CLIENT_RAIDMODULE_ONCMDRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xA27D190)
#define RPG_CLIENT_RAIDMODULE_ONCMDSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA27DE90)
#define RPG_CLIENT_RAIDMODULE_ONLEAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA27DD80)
#define RPG_CLIENT_RAIDMODULE_RAIDLOGINPROMISE_OFFSET UNITYSDK_OFFSET(0xA27F930)
#define RPG_CLIENT_RAIDMODULE_REGISTERLEAVERAIDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA27FD50)
#define RPG_CLIENT_RAIDMODULE_RESETTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA27AA60)
#define RPG_CLIENT_RAIDMODULE_RESTARTRAID_OFFSET UNITYSDK_OFFSET(0xA27F9E0)
#define RPG_CLIENT_RAIDMODULE_SENDTREASURECHALLENGESETTLEMENT_OFFSET UNITYSDK_OFFSET(0xA27BE90)
#define RPG_CLIENT_RAIDMODULE_STARTRAIDBYMESSAGE_OFFSET UNITYSDK_OFFSET(0xA27EDD0)
#define RPG_CLIENT_RAIDMODULE_STARTRAID_OFFSET UNITYSDK_OFFSET(0xA27A2E0)
#define RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGEBYHELIOBUS_OFFSET UNITYSDK_OFFSET(0xA27A690)
#define RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA275990)
#define RPG_CLIENT_RAIDMODULE_TRACKFIRSTSTARTMISSIONINCURRENTSNAPMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA27DA10)
#define RPG_CLIENT_RAIDMODULE_TRYRECORDTEAMHINTFLAG_OFFSET UNITYSDK_OFFSET(0xA27F120)
#define RPG_CLIENT_RAIDMODULE_TRYSHOWTEAMHINT_OFFSET UNITYSDK_OFFSET(0xA27DAB0)
#define RPG_CLIENT_RAIDMODULE_TRYSWITCHCLIENTRAIDMAP_OFFSET UNITYSDK_OFFSET(0xA27FA50)
#define RPG_CLIENT_RAIDMODULE_TRYSWITCHRAIDMAP_OFFSET UNITYSDK_OFFSET(0xA27FAE0)
#define RPG_CLIENT_RAIDMODULE_TRYUPDATETREASURECHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xA27B7C0)
#define RPG_CLIENT_RAIDMODULE_UNREGISTERLEAVERAIDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA27FDC0)
#define RPG_CLIENT_RAIDMODULE_UPDATECURRENTTREASURECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA27B750)
#define RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGENEWSTATUS_OFFSET UNITYSDK_OFFSET(0xA27C830)
#define RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGETARGETONRSP_OFFSET UNITYSDK_OFFSET(0xA27BA80)
#define RPG_CLIENT_RAIDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA2815F0)
#define RPG_CLIENT_RAIDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA281C20)
#define RPG_CLIENT_RAIDMODULE__CACHEREWARD_OFFSET UNITYSDK_OFFSET(0xA282470)
#define RPG_CLIENT_RAIDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA282E30)
#define RPG_CLIENT_RAIDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA282BC0)
#define RPG_CLIENT_RAIDMODULE__DISPOSECURRENTRAID_OFFSET UNITYSDK_OFFSET(0xA282AA0)
#define RPG_CLIENT_RAIDMODULE__DOENTERRAID_OFFSET UNITYSDK_OFFSET(0xA281E50)
#define RPG_CLIENT_RAIDMODULE__ENTERMAP_OFFSET UNITYSDK_OFFSET(0xA27CC50)
#define RPG_CLIENT_RAIDMODULE__GETCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xA280820)
#define RPG_CLIENT_RAIDMODULE__GETDEFAULTRAIDTEAM_OFFSET UNITYSDK_OFFSET(0xA27F200)
#define RPG_CLIENT_RAIDMODULE__INITBATTLESCORINGRESULT_OFFSET UNITYSDK_OFFSET(0xA281A30)
#define RPG_CLIENT_RAIDMODULE__INITRAIDTYPETABLE_OFFSET UNITYSDK_OFFSET(0xA27E870)
#define RPG_CLIENT_RAIDMODULE__NOTIFYBATTLESCORINGRESULT_OFFSET UNITYSDK_OFFSET(0xA281840)
#define RPG_CLIENT_RAIDMODULE__NOTIFYFARMREWARD_OFFSET UNITYSDK_OFFSET(0xA2817B0)
#define RPG_CLIENT_RAIDMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET UNITYSDK_OFFSET(0xA27E5E0)
#define RPG_CLIENT_RAIDMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA282690)
#define RPG_CLIENT_RAIDMODULE__ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA282210)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDCOLLECTIONENTERNEXTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA2829E0)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xA282320)
#define RPG_CLIENT_RAIDMODULE__ONCMDRAIDKICKBYSERVER_OFFSET UNITYSDK_OFFSET(0xA27E420)
#define RPG_CLIENT_RAIDMODULE__ONCMDSTARTRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xA281D70)
#define RPG_CLIENT_RAIDMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA281710)
#define RPG_CLIENT_RAIDMODULE__ONRAIDBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xA2818A0)
#define RPG_CLIENT_RAIDMODULE__RAIDLOGINPROMISE_B__62_0_OFFSET UNITYSDK_OFFSET(0xA282EC0)
#define RPG_CLIENT_RAIDMODULE__SENDGETALLSAVERAIDDATA_OFFSET UNITYSDK_OFFSET(0xA27B380)
#define RPG_CLIENT_RAIDMODULE__SENDGETSAVERAIDDATA_OFFSET UNITYSDK_OFFSET(0xA27B440)
#define RPG_CLIENT_RAIDMODULE__SENDSTARTRAIDREQ_OFFSET UNITYSDK_OFFSET(0xA27F2C0)
#define RPG_CLIENT_RAIDMODULE__SETTRACKINGMISSIONWHENLEAVE_OFFSET UNITYSDK_OFFSET(0xA27D430)
#define RPG_CLIENT_RAIDMODULE__SETTRACKMISSIONWHENRELOGIN_OFFSET UNITYSDK_OFFSET(0xA27D9A0)
#define RPG_CLIENT_RAIDMODULE__TRYUPDATETREASURECHALLENGESAVESTATUS_OFFSET UNITYSDK_OFFSET(0xA27B970)
#define RPG_CLIENT_RAIDMODULE__UPDATERAIDDATA_OFFSET UNITYSDK_OFFSET(0xA2825B0)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA282EE0)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA282F70)
#define RPG_CLIENT_RAIDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA282FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule_TypeDefinitionIndex = 54329;

	class RaidModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::RaidConfigType>** StaticGet_TypeNeedShowSettlePage()
		{
			return (::Il2CppArray<::RPG::GameCore::RaidConfigType>**)Il2CppClass::FromTypeDefinitionIndex(RaidModule_TypeDefinitionIndex)->GetStaticField(0x11E20);
		}
		::RPG::Client::RaidBattleScoringResult* _CacheBattleScoringResult; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::Client::TreasureChallengeTarget*>* _TreasureChallengeTargets; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::Client::TreasureChallengeData*>* _TreasureChallengeStatus; // 0x20
		::RPG::Client::Promises::Promise* _InitialRaidPromise; // 0x28
		::RPG::Client::Promises::Promise* _InitialNotifyPromise; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _CachedRewardItems; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _LastTeamData; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedRaidIDs; // 0x48
		::RPG::Client::TreasureChallengeInstance* _CurrentRaidInstance; // 0x50
		::System::Action* _LeaveRaidCallback; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RaidConfigType>* _RaidTypeTable; // 0x60
		::Class_2_AA9239F66AD90F88_4* _RaidMissionTrackingStrategy; // 0x68
		::Enum_3_DB663931210BBC27_47 _CurrentRaidStatus; // 0x70
		::System::Boolean NeedAutoTriggerRaidEntrance; // 0x74
		::System::Boolean _WaitMissionInit; // 0x75
		::System::Boolean ShowTeamHintFlag; // 0x76
		::System::UInt32 _HeliobusSelectSkillID; // 0x78
		::System::UInt32 _CurrentRaidLevel; // 0x7C
		::System::UInt32 _CurrentRaidID; // 0x80
		::RPG::GameCore::GameModeType _RaidGameMode; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CCTOR_OFFSET))();
		}

		::System::Boolean IsTreasureChallengeCompleted(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGECOMPLETED_OFFSET))(this, raidID, level);
		}

		::System::Boolean IsTreasureChallengeRewardTaken(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGEREWARDTAKEN_OFFSET))(this, raidID, level);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTreasureChallengeValidLevels(::System::UInt32 raidID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGEVALIDLEVELS_OFFSET))(this, raidID);
		}

		::System::Boolean IsTreasureChallengeLevelLocked(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKED_OFFSET))(this, raidID, level);
		}

		::System::Boolean IsTreasureChallengeLevelLockedBySchedule(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYSCHEDULE_OFFSET))(this, raidID, level);
		}

		::System::Boolean IsTreasureChallengeLevelLockedByNormal(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISTREASURECHALLENGELEVELLOCKEDBYNORMAL_OFFSET))(this, raidID, level);
		}

		::System::Void StartTreasureChallenge(::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 level, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGE_OFFSET))(this, propEntityID, raidID, level, avatarIDList, isSave);
		}

		::System::Void StartTreasureChallengeByHeliobus(::System::UInt32 skillID, ::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 level, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTTREASURECHALLENGEBYHELIOBUS_OFFSET))(this, skillID, propEntityID, raidID, level, avatarIDList, isSave);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetTreasureRewardDisplayDatas(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASUREREWARDDISPLAYDATAS_OFFSET))(this, raidID, level);
		}

		::RPG::Client::TreasureChallengeTarget* GetTreasureChallengeStatus(::System::UInt32 raidID, ::System::UInt32 level)
		{
			return ((::RPG::Client::TreasureChallengeTarget*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETTREASURECHALLENGESTATUS_OFFSET))(this, raidID, level);
		}

		::System::Void ResetTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RESETTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Boolean CheckIsHavingSave(::System::UInt32 raidID, ::System::UInt32 hardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CHECKISHAVINGSAVE_OFFSET))(this, raidID, hardLevel);
		}

		::System::Boolean IsSaveRaidType(::System::UInt32 raidID, ::System::UInt32 hardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISSAVERAIDTYPE_OFFSET))(this, raidID, hardLevel);
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

		::System::Void _SendGetSaveRaidData(::System::UInt32 raidID, ::System::UInt32 hardLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDGETSAVERAIDDATA_OFFSET))(this, raidID, hardLevel);
		}

		::System::Void CustomUinitTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMUINITTREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void CustomDisposeTreasureChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CUSTOMDISPOSETREASURECHALLENGE_OFFSET))(this);
		}

		::System::Void UpdateCurrentTreasureChallenge(::System::UInt32 currentRaidID, ::System::UInt32 currentRaidLevel, ::Enum_3_DB663931210BBC27_47 currentRaidStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_47))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATECURRENTTREASURECHALLENGE_OFFSET))(this, currentRaidID, currentRaidLevel, currentRaidStatus);
		}

		::System::Void TryUpdateTreasureChallengeData(::Class_1_DAA5A9E9FAA73ED5* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DAA5A9E9FAA73ED5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYUPDATETREASURECHALLENGEDATA_OFFSET))(this, ntf);
		}

		::System::Void _TryUpdateTreasureChallengeSaveStatus(::System::UInt32 raidID, ::System::UInt32 hardLevel, ::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__TRYUPDATETREASURECHALLENGESAVESTATUS_OFFSET))(this, raidID, hardLevel, isSave);
		}

		::System::Void InitTreasureChallengeTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_INITTREASURECHALLENGETARGETS_OFFSET))(this);
		}

		::System::Void UpdateTreasureChallengeTargetOnRsp(::Class_1_B3B48B7EEC81A99A_6* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3B48B7EEC81A99A_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGETARGETONRSP_OFFSET))(this, info);
		}

		::System::Void SendTreasureChallengeSettlement(::Class_1_DAA5A9E9FAA73ED5* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DAA5A9E9FAA73ED5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_SENDTREASURECHALLENGESETTLEMENT_OFFSET))(this, ntf);
		}

		::System::Boolean IsNextLevelUnlocked(::System::UInt32 id, ::System::UInt32 lv)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISNEXTLEVELUNLOCKED_OFFSET))(this, id, lv);
		}

		::System::Void UpdateTreasureChallengeNewStatus(::Class_1_DAA5A9E9FAA73ED5* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DAA5A9E9FAA73ED5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UPDATETREASURECHALLENGENEWSTATUS_OFFSET))(this, ntf);
		}

		::System::Void _EnterMap(::Class_1_14E02E1F6D70E487_1* sceneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ENTERMAP_OFFSET))(this, sceneInfo);
		}

		::System::Void OnCmdGetRaidInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETRAIDINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnCmdRaidInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDRAIDINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SetTrackingMissionWhenLeave(::Enum_3_DB663931210BBC27_47 currentStatus, ::System::UInt32 raidID, ::System::UInt32 raidLevel)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_47, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SETTRACKINGMISSIONWHENLEAVE_OFFSET))(this, currentStatus, raidID, raidLevel);
		}

		::System::Void _SetTrackMissionWhenReLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SETTRACKMISSIONWHENRELOGIN_OFFSET))(this);
		}

		::System::Void TrackFirstStartMissionInCurrentSnapMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRACKFIRSTSTARTMISSIONINCURRENTSNAPMISSIONLIST_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseEntered(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONADVENTUREPHASEENTERED_OFFSET))(this, o);
		}

		::System::Void TryShowTeamHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSHOWTEAMHINT_OFFSET))(this);
		}

		::System::Void OnLeaveRaidScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONLEAVERAIDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void OnCmdStartRaidScRsp(::System::UInt16 cmdid, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDSTARTRAIDSCRSP_OFFSET))(this, cmdid, rspObject);
		}

		::System::Void OnCmdHeliobusStartRaidScRsp(::System::UInt16 cmdid, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET))(this, cmdid, rspObject);
		}

		::System::Void OnCmdGetSaveRaidScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETSAVERAIDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void OnCmdGetAllSaveRaidScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDGETALLSAVERAIDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void OnCmdDelSaveRaidScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ONCMDDELSAVERAIDSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdRaidKickByServer(::System::UInt16 cmdID, ::System::Object* ntfObejct)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDKICKBYSERVER_OFFSET))(this, cmdID, ntfObejct);
		}

		::System::Void _OnAdventurePhasePopupFinish(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET))(this, o);
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

		::System::Boolean GoToRaid(::System::UInt32 raidID, ::System::UInt32 propEntityID, ::System::Boolean skipUI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GOTORAID_OFFSET))(this, raidID, propEntityID, skipUI);
		}

		::System::Boolean StartRaidByMessage(::System::UInt32 raidID, ::System::Boolean skipUI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTRAIDBYMESSAGE_OFFSET))(this, raidID, skipUI);
		}

		::System::Void StartRaid(::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 worldLevel, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean useSave, ::RPG::GameCore::RaidConfigType raidType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_STARTRAID_OFFSET))(this, propEntityID, raidID, worldLevel, avatarIDList, useSave, raidType);
		}

		::System::Void TryRecordTeamHintFlag(::System::UInt32 raidID, ::System::UInt32 worldLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYRECORDTEAMHINTFLAG_OFFSET))(this, raidID, worldLevel);
		}

		::System::Boolean CanShowRaidTeamHint(::RPG::GameCore::RaidConfigRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CANSHOWRAIDTEAMHINT_OFFSET))(this, row);
		}

		::System::Void LeaveRaid(::System::Boolean isSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_LEAVERAID_OFFSET))(this, isSave);
		}

		::RPG::Client::Promises::Promise* RaidLoginPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RAIDLOGINPROMISE_OFFSET))(this);
		}

		::System::Void RestartRaid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_RESTARTRAID_OFFSET))(this);
		}

		::System::Boolean TrySwitchClientRaidMap(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSWITCHCLIENTRAIDMAP_OFFSET))(this, entranceID);
		}

		::System::Boolean TrySwitchRaidMap(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_TRYSWITCHRAIDMAP_OFFSET))(this, entranceID);
		}

		::System::UInt32 GetLastActiveRaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETLASTACTIVERAIDID_OFFSET))(this);
		}

		::System::Void RegisterLeaveRaidCallBack(::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_REGISTERLEAVERAIDCALLBACK_OFFSET))(this, callBack);
		}

		::System::Void UnregisterLeaveRaidCallBack(::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_UNREGISTERLEAVERAIDCALLBACK_OFFSET))(this, callBack);
		}

		::System::Boolean IsRaidExist(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDEXIST_OFFSET))(this, raidID);
		}

		::RPG::GameCore::RaidEnterType GetRaidEnterType(::System::UInt32 raidID)
		{
			return ((::RPG::GameCore::RaidEnterType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETRAIDENTERTYPE_OFFSET))(this, raidID);
		}

		::System::Boolean IsRaidFinished(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDFINISHED_OFFSET))(this, raidID);
		}

		::System::UInt32 GetRaidMinWorldLv(::System::UInt32 raidID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETRAIDMINWORLDLV_OFFSET))(this, raidID);
		}

		::System::Boolean IsRaidBanned(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_ISRAIDBANNED_OFFSET))(this, raidID);
		}

		::System::Boolean CheckRaidBanWithHint(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_CHECKRAIDBANWITHHINT_OFFSET))(this, raidID);
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

		::System::Collections::Generic::List_1<::System::UInt32>* GetDefaultRaidTeamWithTrial(::RPG::GameCore::RaidConfigRow* raidRow, ::System::UInt32 worldLevel)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE_GETDEFAULTRAIDTEAMWITHTRIAL_OFFSET))(this, raidRow, worldLevel);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnRaidBattleFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONRAIDBATTLEFINISH_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdStartRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDSTARTRAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _DoEnterRaid(::Class_1_C2029720BB7172FE_2* scene)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2029720BB7172FE_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__DOENTERRAID_OFFSET))(this, scene);
		}

		::System::Void _OnCmdHeliobusStartRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDHELIOBUSSTARTRAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRaidInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateRaidData(::System::UInt32 raidID, ::Enum_3_DB663931210BBC27_47 status)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_DB663931210BBC27_47))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__UPDATERAIDDATA_OFFSET))(this, raidID, status);
		}

		::System::Void _OnCmdGetRaidInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDGETRAIDINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRaidCollectionEnterNextRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__ONCMDRAIDCOLLECTIONENTERNEXTRAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _DisposeCurrentRaid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__DISPOSECURRENTRAID_OFFSET))(this);
		}

		::System::Void _CacheReward(::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__CACHEREWARD_OFFSET))(this, itemList);
		}

		::System::Void _InitRaidTypeTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__INITRAIDTYPETABLE_OFFSET))(this);
		}

		::System::Void _InitBattleScoringResult(::RPG::Client::BattleResultInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__INITBATTLESCORINGRESULT_OFFSET))(this, info);
		}

		::System::Void _NotifyFarmReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__NOTIFYFARMREWARD_OFFSET))(this);
		}

		::System::Void _NotifyBattleScoringResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__NOTIFYBATTLESCORINGRESULT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetDefaultRaidTeam(::System::UInt32 raidID, ::System::UInt32 worldLevel)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__GETDEFAULTRAIDTEAM_OFFSET))(this, raidID, worldLevel);
		}

		::System::Void _SendStartRaidReq(::System::UInt32 propEntityID, ::System::UInt32 raidID, ::System::UInt32 worldLevel, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Boolean useSave, ::RPG::GameCore::RaidConfigType raidType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE__SENDSTARTRAIDREQ_OFFSET))(this, propEntityID, raidID, worldLevel, avatarIDList, useSave, raidType);
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
