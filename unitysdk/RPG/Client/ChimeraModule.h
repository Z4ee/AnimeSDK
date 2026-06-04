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

#define RPG_CLIENT_CHIMERAMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6B2AD0)
#define RPG_CLIENT_CHIMERAMODULE_FINISHENDLESSGAME_OFFSET UNITYSDK_OFFSET(0xB6AE4E0)
#define RPG_CLIENT_CHIMERAMODULE_FINISHFINALROUND_OFFSET UNITYSDK_OFFSET(0xB6AE3B0)
#define RPG_CLIENT_CHIMERAMODULE_FINISHORDINARYROUND_OFFSET UNITYSDK_OFFSET(0xB6AE0A0)
#define RPG_CLIENT_CHIMERAMODULE_GETCHIMERADATA_OFFSET UNITYSDK_OFFSET(0xB6AD970)
#define RPG_CLIENT_CHIMERAMODULE_GETCURRENTROUNDID_OFFSET UNITYSDK_OFFSET(0xB6AD5F0)
#define RPG_CLIENT_CHIMERAMODULE_GETWORKIDARRAY_OFFSET UNITYSDK_OFFSET(0xB6AD2D0)
#define RPG_CLIENT_CHIMERAMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB6B1BC0)
#define RPG_CLIENT_CHIMERAMODULE_GET_ARRANGEMENTINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C70)
#define RPG_CLIENT_CHIMERAMODULE_GET_AVATARSELECTQUESTID_OFFSET UNITYSDK_OFFSET(0xB6B1BE0)
#define RPG_CLIENT_CHIMERAMODULE_GET_BATTLEVIEW_OFFSET UNITYSDK_OFFSET(0xB6B1BF0)
#define RPG_CLIENT_CHIMERAMODULE_GET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C10)
#define RPG_CLIENT_CHIMERAMODULE_GET_CURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xB6AEA10)
#define RPG_CLIENT_CHIMERAMODULE_GET_DOINGROUND_OFFSET UNITYSDK_OFFSET(0xB6B1D50)
#define RPG_CLIENT_CHIMERAMODULE_GET_ENDLESSMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1CF0)
#define RPG_CLIENT_CHIMERAMODULE_GET_GALLERYINFO_OFFSET UNITYSDK_OFFSET(0xB6B1D30)
#define RPG_CLIENT_CHIMERAMODULE_GET_ISINBATTLEEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0xB6B1D70)
#define RPG_CLIENT_CHIMERAMODULE_GET_LIMITACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xB6B1BD0)
#define RPG_CLIENT_CHIMERAMODULE_GET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C50)
#define RPG_CLIENT_CHIMERAMODULE_GET_RANKMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1CD0)
#define RPG_CLIENT_CHIMERAMODULE_GET_SETTLEMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1CB0)
#define RPG_CLIENT_CHIMERAMODULE_GET_TALKMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1D10)
#define RPG_CLIENT_CHIMERAMODULE_GET_WORKINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C90)
#define RPG_CLIENT_CHIMERAMODULE_GET_WORKROUNDINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C30)
#define RPG_CLIENT_CHIMERAMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB6B1DF0)
#define RPG_CLIENT_CHIMERAMODULE_ISENDLESSFAIL_OFFSET UNITYSDK_OFFSET(0xB6ADB00)
#define RPG_CLIENT_CHIMERAMODULE_ISENDLESSOVER_OFFSET UNITYSDK_OFFSET(0xB6ADAB0)
#define RPG_CLIENT_CHIMERAMODULE_ISINENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xB6ADA60)
#define RPG_CLIENT_CHIMERAMODULE_SENDCHIMERAQUITENDLESSBYPROMISE_OFFSET UNITYSDK_OFFSET(0xB6B1A10)
#define RPG_CLIENT_CHIMERAMODULE_SET_ARRANGEMENTINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C80)
#define RPG_CLIENT_CHIMERAMODULE_SET_BATTLEVIEW_OFFSET UNITYSDK_OFFSET(0xB6B1C00)
#define RPG_CLIENT_CHIMERAMODULE_SET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C20)
#define RPG_CLIENT_CHIMERAMODULE_SET_CURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xB6AEA20)
#define RPG_CLIENT_CHIMERAMODULE_SET_DOINGROUND_OFFSET UNITYSDK_OFFSET(0xB6B1D60)
#define RPG_CLIENT_CHIMERAMODULE_SET_ENDLESSMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1D00)
#define RPG_CLIENT_CHIMERAMODULE_SET_GALLERYINFO_OFFSET UNITYSDK_OFFSET(0xB6B1D40)
#define RPG_CLIENT_CHIMERAMODULE_SET_ISINBATTLEEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0xB6B1D80)
#define RPG_CLIENT_CHIMERAMODULE_SET_PHASEINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C60)
#define RPG_CLIENT_CHIMERAMODULE_SET_RANKMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1CE0)
#define RPG_CLIENT_CHIMERAMODULE_SET_SETTLEMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1CC0)
#define RPG_CLIENT_CHIMERAMODULE_SET_TALKMANAGER_OFFSET UNITYSDK_OFFSET(0xB6B1D20)
#define RPG_CLIENT_CHIMERAMODULE_SET_WORKINFO_OFFSET UNITYSDK_OFFSET(0xB6B1CA0)
#define RPG_CLIENT_CHIMERAMODULE_SET_WORKROUNDINFO_OFFSET UNITYSDK_OFFSET(0xB6B1C40)
#define RPG_CLIENT_CHIMERAMODULE_STARTENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xB6AE620)
#define RPG_CLIENT_CHIMERAMODULE_STARTWORK_OFFSET UNITYSDK_OFFSET(0xB6ADC10)
#define RPG_CLIENT_CHIMERAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB6AEA30)
#define RPG_CLIENT_CHIMERAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B32D0)
#define RPG_CLIENT_CHIMERAMODULE__GETENDLESSWORKROUNDID_OFFSET UNITYSDK_OFFSET(0xB6AD860)
#define RPG_CLIENT_CHIMERAMODULE__GETWORKROUNDID_OFFSET UNITYSDK_OFFSET(0xB6AD6A0)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERADOFINALROUNDSCRSP_OFFSET UNITYSDK_OFFSET(0xB6B12B0)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHENDLESSROUNDSCRSP_OFFSET UNITYSDK_OFFSET(0xB6B0C80)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHROUND_OFFSET UNITYSDK_OFFSET(0xB6B0110)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERAQUITENDLESSSCRSP_OFFSET UNITYSDK_OFFSET(0xB6B0FE0)
#define RPG_CLIENT_CHIMERAMODULE__ONCHIMERASTARTENDLESSSCRSP_OFFSET UNITYSDK_OFFSET(0xB6B0930)
#define RPG_CLIENT_CHIMERAMODULE__ONGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB6AEE10)
#define RPG_CLIENT_CHIMERAMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xB6B31C0)
#define RPG_CLIENT_CHIMERAMODULE__STARTWORK_OFFSET UNITYSDK_OFFSET(0xB6ADD50)
#define RPG_CLIENT_CHIMERAMODULE__TRYRESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0xB6AE9B0)
#define RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xB6AE7D0)
#define RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTWORKREMAINHP_OFFSET UNITYSDK_OFFSET(0xB6AE830)
#define RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6B33D0)
#define RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB6B3350)
#define RPG_CLIENT_CHIMERAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB6B32F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraModule_TypeDefinitionIndex = 59351;

	class ChimeraModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ChimeraTeamRankManager* _RankManager_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _FinishEndlessRoundPromise; // 0x18
		::RPG::Client::Promises::Promise* _QuitEndlessPromise; // 0x20
		::RPG::Client::Promises::Promise_1<::System::UInt32>* _StartEndlessPromise; // 0x28
		::RPG::Client::ChimeraPhaseInfo* _PhaseInfo_k__BackingField; // 0x30
		::RPG::Client::ChimeraGalleryInfo* _GalleryInfo_k__BackingField; // 0x38
		::RPG::Client::ChimeraDoingRoundData* _DoingRound_k__BackingField; // 0x40
		::RPG::Client::ChimeraInfo* _ChimeraInfo_k__BackingField; // 0x48
		::RPG::Client::ChimeraWorkRoundInfo* _WorkRoundInfo_k__BackingField; // 0x50
		::RPG::Client::ChimeraWorkInfo* _WorkInfo_k__BackingField; // 0x58
		::RPG::Client::Promises::Promise* _FinishOrdinaryRoundPromise; // 0x60
		::RPG::Client::ChimeraEndlessManager* _EndlessManager_k__BackingField; // 0x68
		::RPG::Client::ChimeraArrangementInfo* _ArrangementInfo_k__BackingField; // 0x70
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* _BattleView_k__BackingField; // 0x78
		::RPG::Client::ChimeraTalkManager* _TalkManager_k__BackingField; // 0x80
		::RPG::Client::ChimeraSettleManager* _SettleManager_k__BackingField; // 0x88
		::RPG::Client::Promises::Promise* _FinishFinalRoundPromise; // 0x90
		::System::Boolean _IsInBattleExitTransition; // 0x98
		::RPG::Client::ChimeraGameModeType _CurrentGameMode_k__BackingField; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetWorkIDArray(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GETWORKIDARRAY_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* GetCurrentRoundID()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GETCURRENTROUNDID_OFFSET))(this);
		}

		::RPG::Client::ChimeraData* GetChimeraData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GETCHIMERADATA_OFFSET))(this, a1);
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

		::System::Void StartWork(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_STARTWORK_OFFSET))(this, a1);
		}

		::System::Void _StartWork(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__STARTWORK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* FinishOrdinaryRound(::Enum_3_DB663931210BBC27_24 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Enum_3_DB663931210BBC27_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_FINISHORDINARYROUND_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FinishFinalRound(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_FINISHFINALROUND_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FinishEndlessGame(::System::Boolean a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Single a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_FINISHENDLESSGAME_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::Promise_1<::System::UInt32>* StartEndlessMode()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_STARTENDLESSMODE_OFFSET))(this);
		}

		::System::Void _UpdateCurrentGameMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTGAMEMODE_OFFSET))(this);
		}

		::System::Void _UpdateCurrentWorkRemainHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__UPDATECURRENTWORKREMAINHP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* _GetEndlessWorkRoundID()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__GETENDLESSWORKROUNDID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* _GetWorkRoundID()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__GETWORKROUNDID_OFFSET))(this);
		}

		::System::Boolean _TryResolvePromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__TRYRESOLVEPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraGameModeType get_CurrentGameMode()
		{
			return ((::RPG::Client::ChimeraGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_CURRENTGAMEMODE_OFFSET))(this);
		}

		::System::Void set_CurrentGameMode(::RPG::Client::ChimeraGameModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_CURRENTGAMEMODE_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraFinishRound(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHROUND_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraStartEndlessScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERASTARTENDLESSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraFinishEndlessRoundScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERAFINISHENDLESSROUNDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraQuitEndlessScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERAQUITENDLESSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDoFinalRoundScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE__ONCHIMERADOFINALROUNDSCRSP_OFFSET))(this, a1, a2);
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

		::System::Void set_BattleView(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_BATTLEVIEW_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraInfo* get_ChimeraInfo()
		{
			return ((::RPG::Client::ChimeraInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_CHIMERAINFO_OFFSET))(this);
		}

		::System::Void set_ChimeraInfo(::RPG::Client::ChimeraInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_CHIMERAINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraWorkRoundInfo* get_WorkRoundInfo()
		{
			return ((::RPG::Client::ChimeraWorkRoundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_WORKROUNDINFO_OFFSET))(this);
		}

		::System::Void set_WorkRoundInfo(::RPG::Client::ChimeraWorkRoundInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_WORKROUNDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraPhaseInfo* get_PhaseInfo()
		{
			return ((::RPG::Client::ChimeraPhaseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_PHASEINFO_OFFSET))(this);
		}

		::System::Void set_PhaseInfo(::RPG::Client::ChimeraPhaseInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_PHASEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraArrangementInfo* get_ArrangementInfo()
		{
			return ((::RPG::Client::ChimeraArrangementInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_ARRANGEMENTINFO_OFFSET))(this);
		}

		::System::Void set_ArrangementInfo(::RPG::Client::ChimeraArrangementInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraArrangementInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_ARRANGEMENTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraWorkInfo* get_WorkInfo()
		{
			return ((::RPG::Client::ChimeraWorkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_WORKINFO_OFFSET))(this);
		}

		::System::Void set_WorkInfo(::RPG::Client::ChimeraWorkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_WORKINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraSettleManager* get_SettleManager()
		{
			return ((::RPG::Client::ChimeraSettleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_SETTLEMANAGER_OFFSET))(this);
		}

		::System::Void set_SettleManager(::RPG::Client::ChimeraSettleManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraSettleManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_SETTLEMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraTeamRankManager* get_RankManager()
		{
			return ((::RPG::Client::ChimeraTeamRankManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_RANKMANAGER_OFFSET))(this);
		}

		::System::Void set_RankManager(::RPG::Client::ChimeraTeamRankManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraTeamRankManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_RANKMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraEndlessManager* get_EndlessManager()
		{
			return ((::RPG::Client::ChimeraEndlessManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_ENDLESSMANAGER_OFFSET))(this);
		}

		::System::Void set_EndlessManager(::RPG::Client::ChimeraEndlessManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraEndlessManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_ENDLESSMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraTalkManager* get_TalkManager()
		{
			return ((::RPG::Client::ChimeraTalkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_TALKMANAGER_OFFSET))(this);
		}

		::System::Void set_TalkManager(::RPG::Client::ChimeraTalkManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraTalkManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_TALKMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraGalleryInfo* get_GalleryInfo()
		{
			return ((::RPG::Client::ChimeraGalleryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_GALLERYINFO_OFFSET))(this);
		}

		::System::Void set_GalleryInfo(::RPG::Client::ChimeraGalleryInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGalleryInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_GALLERYINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDoingRoundData* get_DoingRound()
		{
			return ((::RPG::Client::ChimeraDoingRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_DOINGROUND_OFFSET))(this);
		}

		::System::Void set_DoingRound(::RPG::Client::ChimeraDoingRoundData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_DOINGROUND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInBattleExitTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_GET_ISINBATTLEEXITTRANSITION_OFFSET))(this);
		}

		::System::Void set_IsInBattleExitTransition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAMODULE_SET_ISINBATTLEEXITTRANSITION_OFFSET))(this, a1);
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
