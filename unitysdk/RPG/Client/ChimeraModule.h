#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_24.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ChimeraGameModeType.h"

namespace RPG::Client { class ChimeraArrangementInfo; }
namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraDoingRoundData; }
namespace RPG::Client { class ChimeraEndlessManager; }
namespace RPG::Client { class ChimeraGalleryInfo; }
namespace RPG::Client { class ChimeraInfo; }
namespace RPG::Client { class ChimeraPhaseInfo; }
namespace RPG::Client { class ChimeraSettleManager; }
namespace RPG::Client { class ChimeraTalkManager; }
namespace RPG::Client { class ChimeraTeamRankManager; }
namespace RPG::Client { class ChimeraWorkInfo; }
namespace RPG::Client { class ChimeraWorkRoundInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA034F30)
#define RPG_CLIENT_CHIMERAMODULE_FINISHENDLESSGAME_OFFSET UNITYSDK_OFFSET(0xA031840)
#define RPG_CLIENT_CHIMERAMODULE_FINISHFINALROUND_OFFSET UNITYSDK_OFFSET(0xA031710)
#define RPG_CLIENT_CHIMERAMODULE_FINISHORDINARYROUND_OFFSET UNITYSDK_OFFSET(0xA0313F0)
#define RPG_CLIENT_CHIMERAMODULE_GETCHIMERADATA_OFFSET UNITYSDK_OFFSET(0xA030CA0)
#define RPG_CLIENT_CHIMERAMODULE_GETCURRENTROUNDID_OFFSET UNITYSDK_OFFSET(0xA030880)
#define RPG_CLIENT_CHIMERAMODULE_GETWORKIDARRAY_OFFSET UNITYSDK_OFFSET(0xA030600)
#define RPG_CLIENT_CHIMERAMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xA034600)
#define RPG_CLIENT_CHIMERAMODULE_GET_ARRANGEMENTINFO_OFFSET UNITYSDK_OFFSET(0xA0346B0)
#define RPG_CLIENT_CHIMERAMODULE_GET_AVATARSELECTQUESTID_OFFSET UNITYSDK_OFFSET(0xA034620)
#define RPG_CLIENT_CHIMERAMODULE_GET_BATTLEVIEW_OFFSET UNITYSDK_OFFSET(0xA034630)
#define RPG_CLIENT_CHIMERAMODULE_GET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xA034650)
#define RPG_CLIENT_CHIMERAMODULE_GET_CURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xA031CC0)
#define RPG_CLIENT_CHIMERAMODULE_GET_DOINGROUND_OFFSET UNITYSDK_OFFSET(0xA034790)
#define RPG_CLIENT_CHIMERAMODULE_GET_ENDLESSMANAGER_OFFSET UNITYSDK_OFFSET(0xA034730)
#define RPG_CLIENT_CHIMERAMODULE_GET_GALLERYINFO_OFFSET UNITYSDK_OFFSET(0xA034770)
#define RPG_CLIENT_CHIMERAMODULE_GET_ISINBATTLEEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0xA0347B0)
#define RPG_CLIENT_CHIMERAMODULE_GET_LIMITACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xA034610)
#define RPG_CLIENT_CHIMERAMODULE_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xA034690)
#define RPG_CLIENT_CHIMERAMODULE_GET_RANKMANAGER_OFFSET UNITYSDK_OFFSET(0xA034710)
#define RPG_CLIENT_CHIMERAMODULE_GET_SETTLEMANAGER_OFFSET UNITYSDK_OFFSET(0xA0346F0)
#define RPG_CLIENT_CHIMERAMODULE_GET_TALKMANAGER_OFFSET UNITYSDK_OFFSET(0xA034750)
#define RPG_CLIENT_CHIMERAMODULE_GET_WORKINFO_OFFSET UNITYSDK_OFFSET(0xA0346D0)
#define RPG_CLIENT_CHIMERAMODULE_GET_WORKROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA034670)
#define RPG_CLIENT_CHIMERAMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA034830)
#define RPG_CLIENT_CHIMERAMODULE_ISENDLESSFAIL_OFFSET UNITYSDK_OFFSET(0xA030E60)
#define RPG_CLIENT_CHIMERAMODULE_ISENDLESSOVER_OFFSET UNITYSDK_OFFSET(0xA030E10)
#define RPG_CLIENT_CHIMERAMODULE_ISINENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xA030DC0)
#define RPG_CLIENT_CHIMERAMODULE_SENDCHIMERAQUITENDLESSBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA034450)
#define RPG_CLIENT_CHIMERAMODULE_SET_ARRANGEMENTINFO_OFFSET UNITYSDK_OFFSET(0xA0346C0)
#define RPG_CLIENT_CHIMERAMODULE_SET_BATTLEVIEW_OFFSET UNITYSDK_OFFSET(0xA034640)
#define RPG_CLIENT_CHIMERAMODULE_SET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xA034660)
#define RPG_CLIENT_CHIMERAMODULE_SET_CURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xA031CD0)
#define RPG_CLIENT_CHIMERAMODULE_SET_DOINGROUND_OFFSET UNITYSDK_OFFSET(0xA0347A0)
#define RPG_CLIENT_CHIMERAMODULE_SET_ENDLESSMANAGER_OFFSET UNITYSDK_OFFSET(0xA034740)
#define RPG_CLIENT_CHIMERAMODULE_SET_GALLERYINFO_OFFSET UNITYSDK_OFFSET(0xA034780)
#define RPG_CLIENT_CHIMERAMODULE_SET_ISINBATTLEEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0xA0347C0)
#define RPG_CLIENT_CHIMERAMODULE_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xA0346A0)
#define RPG_CLIENT_CHIMERAMODULE_SET_RANKMANAGER_OFFSET UNITYSDK_OFFSET(0xA034720)
#define RPG_CLIENT_CHIMERAMODULE_SET_SETTLEMANAGER_OFFSET UNITYSDK_OFFSET(0xA034700)
#define RPG_CLIENT_CHIMERAMODULE_SET_TALKMANAGER_OFFSET UNITYSDK_OFFSET(0xA034760)
#define RPG_CLIENT_CHIMERAMODULE_SET_WORKINFO_OFFSET UNITYSDK_OFFSET(0xA0346E0)
#define RPG_CLIENT_CHIMERAMODULE_SET_WORKROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA034680)
#define RPG_CLIENT_CHIMERAMODULE_STARTENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xA031980)
#define RPG_CLIENT_CHIMERAMODULE_STARTWORK_OFFSET UNITYSDK_OFFSET(0xA030F70)
#define RPG_CLIENT_CHIMERAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA031CE0)
#define RPG_CLIENT_CHIMERAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA035600)
#define RPG_CLIENT_CHIMERAMODULE__GETENDLESSWORKROUNDID_OFFSET UNITYSDK_OFFSET(0xA030B90)
#define RPG_CLIENT_CHIMERAMODULE__GETWORKROUNDID_OFFSET UNITYSDK_OFFSET(0xA030A30)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERADOFINALROUNDSCRSP_OFFSET UNITYSDK_OFFSET(0xA033D00)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHENDLESSROUNDSCRSP_OFFSET UNITYSDK_OFFSET(0xA0336B0)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHROUND_OFFSET UNITYSDK_OFFSET(0xA032EE0)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERAQUITENDLESSSCRSP_OFFSET UNITYSDK_OFFSET(0xA033A30)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERASTARTENDLESSSCRSP_OFFSET UNITYSDK_OFFSET(0xA033540)
#define RPG_CLIENT_CHIMERAMODULE__ONGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA031E60)
#define RPG_CLIENT_CHIMERAMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xA0354F0)
#define RPG_CLIENT_CHIMERAMODULE__STARTWORK_OFFSET UNITYSDK_OFFSET(0xA0310A0)
#define RPG_CLIENT_CHIMERAMODULE__TRYRESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xA031C60)
#define RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xA031B30)
#define RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTWORKREMAINHP_OFFSET UNITYSDK_OFFSET(0xA031B90)
#define RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA035710)
#define RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA035680)
#define RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA035620)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraModule_TypeDefinitionIndex = 58421;

	class ChimeraModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ChimeraWorkRoundInfo* _WorkRoundInfo_k__BackingField; // 0x10
		::RPG::Client::ChimeraWorkInfo* _WorkInfo_k__BackingField; // 0x18
		::RPG::Client::ChimeraInfo* _ChimeraInfo_k__BackingField; // 0x20
		::RPG::Client::Promises::Promise* _FinishFinalRoundPromise; // 0x28
		::RPG::Client::Promises::Promise* _FinishEndlessRoundPromise; // 0x30
		::RPG::Client::ChimeraDoingRoundData* _DoingRound_k__BackingField; // 0x38
		::RPG::Client::Promises::Promise* _QuitEndlessPromise; // 0x40
		::RPG::Client::ChimeraEndlessManager* _EndlessManager_k__BackingField; // 0x48
		::RPG::Client::ChimeraArrangementInfo* _ArrangementInfo_k__BackingField; // 0x50
		::RPG::Client::ChimeraPhaseInfo* _PhaseInfo_k__BackingField; // 0x58
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* _BattleView_k__BackingField; // 0x60
		::RPG::Client::ChimeraTeamRankManager* _RankManager_k__BackingField; // 0x68
		::RPG::Client::ChimeraGalleryInfo* _GalleryInfo_k__BackingField; // 0x70
		::RPG::Client::Promises::Promise_1<::System::UInt32>* _StartEndlessPromise; // 0x78
		::RPG::Client::ChimeraTalkManager* _TalkManager_k__BackingField; // 0x80
		::RPG::Client::Promises::Promise* _FinishOrdinaryRoundPromise; // 0x88
		::RPG::Client::ChimeraSettleManager* _SettleManager_k__BackingField; // 0x90
		::RPG::Client::ChimeraGameModeType _CurrentGameMode_k__BackingField; // 0x98
		::System::Boolean _IsInBattleExitTransition; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetWorkIDArray(::System::UInt32 roundID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GETWORKIDARRAY_OFFSET))(this, roundID);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* GetCurrentRoundID()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GETCURRENTROUNDID_OFFSET))(this);
		}

		::RPG::Client::ChimeraData* GetChimeraData(::System::UInt32 chimeraID)
		{
			return ((::RPG::Client::ChimeraData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GETCHIMERADATA_OFFSET))(this, chimeraID);
		}

		::System::Boolean IsInEndlessMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_ISINENDLESSMODE_OFFSET))(this);
		}

		::System::Boolean IsEndlessOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_ISENDLESSOVER_OFFSET))(this);
		}

		::System::Boolean IsEndlessFail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_ISENDLESSFAIL_OFFSET))(this);
		}

		::System::Void StartWork(::System::UInt32 roundID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_STARTWORK_OFFSET))(this, roundID);
		}

		::System::Void _StartWork(::Il2CppArray<::System::UInt32>* team, ::System::UInt32 leader, ::System::UInt32 roundID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__STARTWORK_OFFSET))(this, team, leader, roundID);
		}

		::RPG::Client::Promises::IPromise* FinishOrdinaryRound(::Enum_3_DB663931210BBC27_24 endReason)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Enum_3_DB663931210BBC27_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_FINISHORDINARYROUND_OFFSET))(this, endReason);
		}

		::RPG::Client::Promises::IPromise* FinishFinalRound(::System::Boolean isLeave)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_FINISHFINALROUND_OFFSET))(this, isLeave);
		}

		::RPG::Client::Promises::IPromise* FinishEndlessGame(::System::Boolean isLeave, ::System::Collections::Generic::List_1<::System::UInt32>* finishWorkIDs, ::System::Single workRemainHp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_FINISHENDLESSGAME_OFFSET))(this, isLeave, finishWorkIDs, workRemainHp);
		}

		::RPG::Client::Promises::Promise_1<::System::UInt32>* StartEndlessMode()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_STARTENDLESSMODE_OFFSET))(this);
		}

		::System::Void _UpdateCurrentGameMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTGAMEMODE_OFFSET))(this);
		}

		::System::Void _UpdateCurrentWorkRemainHp(::System::UInt32 workRemainHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTWORKREMAINHP_OFFSET))(this, workRemainHp);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* _GetEndlessWorkRoundID()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__GETENDLESSWORKROUNDID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* _GetWorkRoundID()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__GETWORKROUNDID_OFFSET))(this);
		}

		::System::Boolean _TryResolvePromise(::RPG::Client::Promises::Promise* promise)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__TRYRESOLVEPROMISE_OFFSET))(this, promise);
		}

		::RPG::Client::ChimeraGameModeType get_CurrentGameMode()
		{
			return ((::RPG::Client::ChimeraGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_CURRENTGAMEMODE_OFFSET))(this);
		}

		::System::Void set_CurrentGameMode(::RPG::Client::ChimeraGameModeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_CURRENTGAMEMODE_OFFSET))(this, value);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraFinishRound(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHROUND_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraStartEndlessScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERASTARTENDLESSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraFinishEndlessRoundScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHENDLESSROUNDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraQuitEndlessScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERAQUITENDLESSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraDoFinalRoundScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERADOFINALROUNDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::Promises::IPromise* SendChimeraQuitEndlessByPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SENDCHIMERAQUITENDLESSBYPROMISE_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_LimitActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_LIMITACTIVITYREWARDID_OFFSET))(this);
		}

		::System::UInt32 get_AvatarSelectQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_AVATARSELECTQUESTID_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* get_BattleView()
		{
			return ((::RPG::Client::Prop::ChimeraBattlePuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_BATTLEVIEW_OFFSET))(this);
		}

		::System::Void set_BattleView(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_BATTLEVIEW_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraInfo* get_ChimeraInfo()
		{
			return ((::RPG::Client::ChimeraInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_CHIMERAINFO_OFFSET))(this);
		}

		::System::Void set_ChimeraInfo(::RPG::Client::ChimeraInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_CHIMERAINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraWorkRoundInfo* get_WorkRoundInfo()
		{
			return ((::RPG::Client::ChimeraWorkRoundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_WORKROUNDINFO_OFFSET))(this);
		}

		::System::Void set_WorkRoundInfo(::RPG::Client::ChimeraWorkRoundInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_WORKROUNDINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraPhaseInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChimeraPhaseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChimeraPhaseInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_PHASEINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraArrangementInfo* get_ArrangementInfo()
		{
			return ((::RPG::Client::ChimeraArrangementInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_ARRANGEMENTINFO_OFFSET))(this);
		}

		::System::Void set_ArrangementInfo(::RPG::Client::ChimeraArrangementInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraArrangementInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_ARRANGEMENTINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraWorkInfo* get_WorkInfo()
		{
			return ((::RPG::Client::ChimeraWorkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_WORKINFO_OFFSET))(this);
		}

		::System::Void set_WorkInfo(::RPG::Client::ChimeraWorkInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_WORKINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraSettleManager* get_SettleManager()
		{
			return ((::RPG::Client::ChimeraSettleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_SETTLEMANAGER_OFFSET))(this);
		}

		::System::Void set_SettleManager(::RPG::Client::ChimeraSettleManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraSettleManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_SETTLEMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraTeamRankManager* get_RankManager()
		{
			return ((::RPG::Client::ChimeraTeamRankManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_RANKMANAGER_OFFSET))(this);
		}

		::System::Void set_RankManager(::RPG::Client::ChimeraTeamRankManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraTeamRankManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_RANKMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraEndlessManager* get_EndlessManager()
		{
			return ((::RPG::Client::ChimeraEndlessManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_ENDLESSMANAGER_OFFSET))(this);
		}

		::System::Void set_EndlessManager(::RPG::Client::ChimeraEndlessManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraEndlessManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_ENDLESSMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraTalkManager* get_TalkManager()
		{
			return ((::RPG::Client::ChimeraTalkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_TALKMANAGER_OFFSET))(this);
		}

		::System::Void set_TalkManager(::RPG::Client::ChimeraTalkManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraTalkManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_TALKMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraGalleryInfo* get_GalleryInfo()
		{
			return ((::RPG::Client::ChimeraGalleryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_GALLERYINFO_OFFSET))(this);
		}

		::System::Void set_GalleryInfo(::RPG::Client::ChimeraGalleryInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGalleryInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_GALLERYINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDoingRoundData* get_DoingRound()
		{
			return ((::RPG::Client::ChimeraDoingRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_DOINGROUND_OFFSET))(this);
		}

		::System::Void set_DoingRound(::RPG::Client::ChimeraDoingRoundData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_DOINGROUND_OFFSET))(this, value);
		}

		::System::Boolean get_IsInBattleExitTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_ISINBATTLEEXITTRANSITION_OFFSET))(this);
		}

		::System::Void set_IsInBattleExitTransition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_ISINBATTLEEXITTRANSITION_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
