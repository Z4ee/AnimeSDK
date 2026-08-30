#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ClientPunkLordShareType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D17272E82AE804C2_12;
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class PunkLordInstance; }
namespace RPG::Client { class SettledPunkLordData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORDWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x1801DF20)
#define RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORD_OFFSET UNITYSDK_OFFSET(0x1801DFA0)
#define RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHSETTLEDPUNKLORDDATAWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x1801DD70)
#define RPG_CLIENT_PUNKLORDMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1801A070)
#define RPG_CLIENT_PUNKLORDMODULE_ENTERRAID_OFFSET UNITYSDK_OFFSET(0x1801DB00)
#define RPG_CLIENT_PUNKLORDMODULE_GETALLPUNKLORDTOTALSCORECANTAKE_OFFSET UNITYSDK_OFFSET(0x1801E150)
#define RPG_CLIENT_PUNKLORDMODULE_GET_CURPUNKLORDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1801EB60)
#define RPG_CLIENT_PUNKLORDMODULE_GET_PUNKLORDDATAS_OFFSET UNITYSDK_OFFSET(0x1801E5F0)
#define RPG_CLIENT_PUNKLORDMODULE_GET_SETTLEDPUNKLORDDATALIST_OFFSET UNITYSDK_OFFSET(0x1801E720)
#define RPG_CLIENT_PUNKLORDMODULE_GET_SHOWREDDOTQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1801EBA0)
#define RPG_CLIENT_PUNKLORDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x18019C70)
#define RPG_CLIENT_PUNKLORDMODULE_REFRESHMONSTERLIST_OFFSET UNITYSDK_OFFSET(0x1801B740)
#define RPG_CLIENT_PUNKLORDMODULE_REFRESHPUNKLORDPOINT_OFFSET UNITYSDK_OFFSET(0x1801E070)
#define RPG_CLIENT_PUNKLORDMODULE_SETAUTOSHOWONEXITPUNKLORD_OFFSET UNITYSDK_OFFSET(0x1801E2B0)
#define RPG_CLIENT_PUNKLORDMODULE_SHARE_OFFSET UNITYSDK_OFFSET(0x1801D9B0)
#define RPG_CLIENT_PUNKLORDMODULE_SUMMONMONSTER_OFFSET UNITYSDK_OFFSET(0x1801D8D0)
#define RPG_CLIENT_PUNKLORDMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1801DC50)
#define RPG_CLIENT_PUNKLORDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1801E460)
#define RPG_CLIENT_PUNKLORDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1801D7B0)
#define RPG_CLIENT_PUNKLORDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1801A2D0)
#define RPG_CLIENT_PUNKLORDMODULE__ADDPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x1801AF20)
#define RPG_CLIENT_PUNKLORDMODULE__ADDSETTLEDPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x1801CCF0)
#define RPG_CLIENT_PUNKLORDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1801EBF0)
#define RPG_CLIENT_PUNKLORDMODULE__GETPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x1801AE60)
#define RPG_CLIENT_PUNKLORDMODULE__GETSETTLEDPUNKLORDDATA_OFFSET UNITYSDK_OFFSET(0x1801CDD0)
#define RPG_CLIENT_PUNKLORDMODULE__ISCURINPROGRESSPUNKLORD_OFFSET UNITYSDK_OFFSET(0x1801C590)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETKILLEDPUNKLORDMONSTERDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1801CA60)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDBATTLERECORDSCRSP_OFFSET UNITYSDK_OFFSET(0x1801D5F0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1801C1B0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDMONSTERDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1801ABE0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDLEAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x1801C750)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDBATTLERESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1801C870)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x1801D3A0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1801C2C0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERKILLEDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1801CE90)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDSHAREPUNKLORDMONSTERSCRSP_OFFSET UNITYSDK_OFFSET(0x1801B820)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDSTARTPUNKLORDRAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x1801B2E0)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDSUMMONPUNKLORDMONSTERSCRSP_OFFSET UNITYSDK_OFFSET(0x1801B980)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEKILLEDPUNKLORDMONSTERSCORESCRSP_OFFSET UNITYSDK_OFFSET(0x1801D250)
#define RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEPUNKLORDPOINTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1801BB30)
#define RPG_CLIENT_PUNKLORDMODULE__ONGAMECONTEXTSTART_OFFSET UNITYSDK_OFFSET(0x1801D880)
#define RPG_CLIENT_PUNKLORDMODULE__ONPUNKLORDRAIDTIMEOUTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1801C610)
#define RPG_CLIENT_PUNKLORDMODULE__PREPARERELATEDUSERINFO_OFFSET UNITYSDK_OFFSET(0x1801B000)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHQUESTREDDOT_OFFSET UNITYSDK_OFFSET(0x1801E850)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHRECORDREDDOT_OFFSET UNITYSDK_OFFSET(0x1801D0F0)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1801BD50)
#define RPG_CLIENT_PUNKLORDMODULE__REFRESHSUMMONANDSUPPORTREDDOT_OFFSET UNITYSDK_OFFSET(0x1801D4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordModule_TypeDefinitionIndex = 66755;

	class PunkLordModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::SettledPunkLordData*>* _SettledPunkLordDatas; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DailyQuestList; // 0x18
		::RPG::Client::PunkLordInstance* _CurPunkLordInstance; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::PunkLordData*>* _PunkLordDatas; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ShowRedDotQuestIDList; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetBattleRecordPromise; // 0x38
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* DeadMonsterRecord; // 0x40
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* AppearedMonsterRecord; // 0x48
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetSettledDataPromise; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* PunkLordRewardTakenList; // 0x58
		::Class_1_D17272E82AE804C2_12* _TempPunkLordMonsterKey; // 0x60
		::System::UInt32 ConsumeStaminaCount; // 0x68
		::System::UInt32 OverBonusRewardLimit; // 0x6C
		::System::Boolean ShowSupportRedDot; // 0x70
		::System::Boolean ShowSummonRedDot; // 0x71
		::System::UInt32 _OriginFloorID; // 0x74
		::System::Boolean ShowRewardRedDot; // 0x78
		::System::Boolean ShowRecordRedDot; // 0x79
		::System::Boolean _WaitAutoShow; // 0x7A
		::System::Boolean SettledPunkLordDataDirty; // 0x7B
		::System::UInt32 _OriginPlaneID; // 0x7C
		::System::UInt32 RaidTimeLimit; // 0x80
		::System::UInt32 PunkLordSupportItemConfigID; // 0x84
		::System::UInt32 PunkLordSupportRecoverLimit; // 0x88
		::System::Int64 SupportRefreshTime; // 0x90
		::System::UInt32 OverBonusRewardPoint; // 0x98
		::System::UInt32 SummonLeftCount; // 0x9C
		::System::UInt32 PunkLordPoint; // 0xA0
		::System::UInt32 OverBonusRewardTakenTime; // 0xA4
		::System::UInt32 SupportLeftTimes; // 0xA8
		::System::UInt32 GMSummonPlayerUID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetPunkLordMonsterDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDMONSTERDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStartPunkLordRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDSTARTPUNKLORDRAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSharePunkLordMonsterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDSHAREPUNKLORDMONSTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSummonPunkLordMonsterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDSUMMONPUNKLORDMONSTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakePunkLordPointRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEPUNKLORDPOINTREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetPunkLordDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPunkLordMonsterInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPunkLordRaidTimeOutScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONPUNKLORDRAIDTIMEOUTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLeaveRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDLEAVERAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPunkLordBattleResultScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDBATTLERESULTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetKilledPunkLordMonsterDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETKILLEDPUNKLORDMONSTERDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPunkLordMonsterKilledNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDMONSTERKILLEDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeKilledPunkLordMonsterScoreScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDTAKEKILLEDPUNKLORDMONSTERSCORESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPunkLordDataChangeNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDPUNKLORDDATACHANGENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetPunkLordBattleRecordScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONCMDGETPUNKLORDBATTLERECORDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGameContextStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ONGAMECONTEXTSTART_OFFSET))(this, a1);
		}

		::System::Void SummonMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_SUMMONMONSTER_OFFSET))(this);
		}

		::System::Void Share(::RPG::Client::PunkLordData* a1, ::RPG::Client::ClientPunkLordShareType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*, ::RPG::Client::ClientPunkLordShareType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_SHARE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshMonsterList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_REFRESHMONSTERLIST_OFFSET))(this);
		}

		::System::Void EnterRaid(::RPG::Client::PunkLordData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ENTERRAID_OFFSET))(this, a1, a2);
		}

		::System::Void TakeReward(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_TAKEREWARD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AsyncRefreshSettledPunkLordDataWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHSETTLEDPUNKLORDDATAWITHPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Boolean>* AsyncRefreshRecordWithPromise(::RPG::Client::PunkLordData* a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORDWITHPROMISE_OFFSET))(this, a1);
		}

		::System::Void AsyncRefreshRecord(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_ASYNCREFRESHRECORD_OFFSET))(this, a1);
		}

		::System::Void RefreshPunkLordPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_REFRESHPUNKLORDPOINT_OFFSET))(this);
		}

		::System::UInt32 GetAllPunkLordTotalScoreCanTake()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GETALLPUNKLORDTOTALSCORECANTAKE_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitPunkLord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_SETAUTOSHOWONEXITPUNKLORD_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::RPG::Client::PunkLordData* _GetPunkLordData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PunkLordData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__GETPUNKLORDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _AddSettledPunkLordData(::RPG::Client::SettledPunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDSETTLEDPUNKLORDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SettledPunkLordData* _GetSettledPunkLordData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::SettledPunkLordData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__GETSETTLEDPUNKLORDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPunkLordData(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ADDPUNKLORDDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsCurInProgressPunkLord(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__ISCURINPROGRESSPUNKLORD_OFFSET))(this, a1, a2);
		}

		::System::Void _PrepareRelatedUserInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__PREPARERELATEDUSERINFO_OFFSET))(this);
		}

		::System::Void _RefreshRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshQuestRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHQUESTREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshRecordRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHRECORDREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshSummonAndSupportRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE__REFRESHSUMMONANDSUPPORTREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PunkLordData*>* get_PunkLordDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PunkLordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_PUNKLORDDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SettledPunkLordData*>* get_SettledPunkLordDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SettledPunkLordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_SETTLEDPUNKLORDDATALIST_OFFSET))(this);
		}

		::RPG::Client::PunkLordInstance* get_CurPunkLordInstance()
		{
			return ((::RPG::Client::PunkLordInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_CURPUNKLORDINSTANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ShowRedDotQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDMODULE_GET_SHOWREDDOTQUESTIDLIST_OFFSET))(this);
		}
	};
}
