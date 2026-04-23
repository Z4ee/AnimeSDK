#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_455008579EB95638_23;
class Class_1_495E445F847601E8;
class Class_1_7FF19F6206AF6DD7_18;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class DiceCombatAvatar; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatFriendData; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }
namespace RPG::Client::DiceCombat { class DiceCombatRedDot; }
namespace RPG::Client::DiceCombat { class DiceCombatShopData; }
namespace RPG::Client::DiceCombat { class DiceCombatShopGoodData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }
namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2MPService; }
namespace RPG::Client::DiceCombat { class DiceCombatV2OpponentData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2RedDot; }
namespace RPG::Client::DiceCombat { class DiceCombatV2Stage; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::DiceCombat { class IDiceCombatStage; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBATMODULE_BUYMULTISHOPGOODS_OFFSET UNITYSDK_OFFSET(0xA16DA50)
#define RPG_CLIENT_DICECOMBATMODULE_BUYSHOPGOOD_OFFSET UNITYSDK_OFFSET(0xA16D6E0)
#define RPG_CLIENT_DICECOMBATMODULE_CANBUYAVATARSHOPGOODBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA16E480)
#define RPG_CLIENT_DICECOMBATMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA169930)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1CURRENTALLPVPSTAGESCORE_OFFSET UNITYSDK_OFFSET(0xA1689D0)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xA1684C0)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1SCOREREWARDMAXSCORE_OFFSET UNITYSDK_OFFSET(0xA168B80)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1STAGEDATA_OFFSET UNITYSDK_OFFSET(0xA168310)
#define RPG_CLIENT_DICECOMBATMODULE_GETALLDICESCOUNT_OFFSET UNITYSDK_OFFSET(0xA16C7D0)
#define RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVESTAGEDATAS_OFFSET UNITYSDK_OFFSET(0xA158AD0)
#define RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVPSTAGEDATAS_OFFSET UNITYSDK_OFFSET(0xA168710)
#define RPG_CLIENT_DICECOMBATMODULE_GETAVATARCONFIGINFOLIST_OFFSET UNITYSDK_OFFSET(0xA16B270)
#define RPG_CLIENT_DICECOMBATMODULE_GETAVATARGOODDATABYID_OFFSET UNITYSDK_OFFSET(0xA16ACA0)
#define RPG_CLIENT_DICECOMBATMODULE_GETCOMMUNICATEDATA_OFFSET UNITYSDK_OFFSET(0xA16CCD0)
#define RPG_CLIENT_DICECOMBATMODULE_GETCONFIGAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA166B30)
#define RPG_CLIENT_DICECOMBATMODULE_GETCURRENTPURCHASABLEDICESET_OFFSET UNITYSDK_OFFSET(0xA16E4F0)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECOMBATBATCHBUYMODE_OFFSET UNITYSDK_OFFSET(0xA16E900)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGDATA_OFFSET UNITYSDK_OFFSET(0xA166CA0)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGINFOLIST_OFFSET UNITYSDK_OFFSET(0xA16C340)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICEGOODDATABYID_OFFSET UNITYSDK_OFFSET(0xA16BAE0)
#define RPG_CLIENT_DICECOMBATMODULE_GETFRIENDDATALIST_OFFSET UNITYSDK_OFFSET(0xA16F200)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLISTBYREF_OFFSET UNITYSDK_OFFSET(0xA16A920)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLIST_OFFSET UNITYSDK_OFFSET(0xA16A8B0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLISTBYREF_OFFSET UNITYSDK_OFFSET(0xA16A7B0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLIST_OFFSET UNITYSDK_OFFSET(0xA16A6B0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA166910)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFOLIST_OFFSET UNITYSDK_OFFSET(0xA16B550)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFO_OFFSET UNITYSDK_OFFSET(0xA16BA00)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICESCOUNT_OFFSET UNITYSDK_OFFSET(0xA16C620)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVESAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA169ED0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA16A100)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERV2PVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA16A330)
#define RPG_CLIENT_DICECOMBATMODULE_GETPVESTAGE2V1_OFFSET UNITYSDK_OFFSET(0xA154EB0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPVPSTAGE2V1_OFFSET UNITYSDK_OFFSET(0xA156D80)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPDATA_OFFSET UNITYSDK_OFFSET(0xA16CE30)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATABYGOODID_OFFSET UNITYSDK_OFFSET(0xA16D060)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATA_OFFSET UNITYSDK_OFFSET(0xA16CF30)
#define RPG_CLIENT_DICECOMBATMODULE_GETSPECIALRULEDATA_OFFSET UNITYSDK_OFFSET(0xA16B640)
#define RPG_CLIENT_DICECOMBATMODULE_GETSTAGEIDBYENTITYCONFIGKEY_OFFSET UNITYSDK_OFFSET(0xA169E20)
#define RPG_CLIENT_DICECOMBATMODULE_GETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xA1681D0)
#define RPG_CLIENT_DICECOMBATMODULE_GETV2ACTIVITYPANELVIDEOID_OFFSET UNITYSDK_OFFSET(0xA169360)
#define RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0xA158530)
#define RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDS_OFFSET UNITYSDK_OFFSET(0xA168DB0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYAVATARREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xA15EE60)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYENTRANCEID_OFFSET UNITYSDK_OFFSET(0xA15FA60)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xA15ED80)
#define RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATREDDOT_OFFSET UNITYSDK_OFFSET(0xA170850)
#define RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATV2REDDOT_OFFSET UNITYSDK_OFFSET(0xA1693E0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_FINISHEDSTAGES_OFFSET UNITYSDK_OFFSET(0xA170820)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0xA170840)
#define RPG_CLIENT_DICECOMBATMODULE_GET_OFFERINGID_OFFSET UNITYSDK_OFFSET(0xA15F080)
#define RPG_CLIENT_DICECOMBATMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xA1707C0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_SORTEDSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0xA170800)
#define RPG_CLIENT_DICECOMBATMODULE_GET_V2ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xA169280)
#define RPG_CLIENT_DICECOMBATMODULE_GET_V2MPSERVICE_OFFSET UNITYSDK_OFFSET(0xA1707E0)
#define RPG_CLIENT_DICECOMBATMODULE_HASORCANBUYRECOMMENDCOLORDICEFORAVATAR_OFFSET UNITYSDK_OFFSET(0xA16B7B0)
#define RPG_CLIENT_DICECOMBATMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA169400)
#define RPG_CLIENT_DICECOMBATMODULE_ISACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA15F320)
#define RPG_CLIENT_DICECOMBATMODULE_ISAVATARCARDSHOWASPLAYER_OFFSET UNITYSDK_OFFSET(0xA16C170)
#define RPG_CLIENT_DICECOMBATMODULE_ISDICERECOMMENDFORAVATAR_OFFSET UNITYSDK_OFFSET(0xA16C040)
#define RPG_CLIENT_DICECOMBATMODULE_ISV2ACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA169190)
#define RPG_CLIENT_DICECOMBATMODULE_ISV2ALLSCOREREWARDGOT_OFFSET UNITYSDK_OFFSET(0xA168C90)
#define RPG_CLIENT_DICECOMBATMODULE_ISV2ANYSCOREREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA169070)
#define RPG_CLIENT_DICECOMBATMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA169A40)
#define RPG_CLIENT_DICECOMBATMODULE_PREPAREMISSIONDATABEFORELOADING_OFFSET UNITYSDK_OFFSET(0xA169CF0)
#define RPG_CLIENT_DICECOMBATMODULE_SENDDICECOMBATFINISHPVESTAGECSREQ_OFFSET UNITYSDK_OFFSET(0xA16CC10)
#define RPG_CLIENT_DICECOMBATMODULE_SENDV2FINISHPVESTAGECSREQ_OFFSET UNITYSDK_OFFSET(0xA167E30)
#define RPG_CLIENT_DICECOMBATMODULE_SETALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0xA16F240)
#define RPG_CLIENT_DICECOMBATMODULE_SETDICECOMBATBATCHBUYMODE_OFFSET UNITYSDK_OFFSET(0xA16E9B0)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVESAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA16A050)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA16A280)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERV2PVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA16A540)
#define RPG_CLIENT_DICECOMBATMODULE_SETPVPSTAGE2V1MAXSCORE_OFFSET UNITYSDK_OFFSET(0xA167D40)
#define RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATREDDOT_OFFSET UNITYSDK_OFFSET(0xA170860)
#define RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATV2REDDOT_OFFSET UNITYSDK_OFFSET(0xA1693F0)
#define RPG_CLIENT_DICECOMBATMODULE_SET_FINISHEDSTAGES_OFFSET UNITYSDK_OFFSET(0xA170830)
#define RPG_CLIENT_DICECOMBATMODULE_SET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0xA16F2B0)
#define RPG_CLIENT_DICECOMBATMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xA1707D0)
#define RPG_CLIENT_DICECOMBATMODULE_SET_SORTEDSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0xA170810)
#define RPG_CLIENT_DICECOMBATMODULE_SET_V2MPSERVICE_OFFSET UNITYSDK_OFFSET(0xA1707F0)
#define RPG_CLIENT_DICECOMBATMODULE_TRIGGERADVENTUREDICECOMBATGROUPCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xA16CA50)
#define RPG_CLIENT_DICECOMBATMODULE_TRYGETSTAGEINFOBYCURRENTMODE_OFFSET UNITYSDK_OFFSET(0xA168040)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATEFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xA16EA60)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATESHOPDATA_OFFSET UNITYSDK_OFFSET(0xA16D470)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATEV1FRIENDDATA_OFFSET UNITYSDK_OFFSET(0xA16EC10)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATEV2FRIENDDATA_OFFSET UNITYSDK_OFFSET(0xA16EEE0)
#define RPG_CLIENT_DICECOMBATMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA169990)
#define RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERSV2_OFFSET UNITYSDK_OFFSET(0xA1649D0)
#define RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA164760)
#define RPG_CLIENT_DICECOMBATMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA170870)
#define RPG_CLIENT_DICECOMBATMODULE__GENSHOWADDITEMDIALOGDELEGATE_OFFSET UNITYSDK_OFFSET(0xA16E1B0)
#define RPG_CLIENT_DICECOMBATMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA16F7F0)
#define RPG_CLIENT_DICECOMBATMODULE__GETFLOORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA16FBA0)
#define RPG_CLIENT_DICECOMBATMODULE__INIT_B__49_0_OFFSET UNITYSDK_OFFSET(0xA170A90)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDAVATAR_OFFSET UNITYSDK_OFFSET(0xA1654D0)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDDICE_OFFSET UNITYSDK_OFFSET(0xA165680)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSPFORMULTIBUYSHOPGOODS_OFFSET UNITYSDK_OFFSET(0xA1666E0)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSP_OFFSET UNITYSDK_OFFSET(0xA165E40)
#define RPG_CLIENT_DICECOMBATMODULE__ONADVENTUREPHASEMAPCREATED_OFFSET UNITYSDK_OFFSET(0xA16F870)
#define RPG_CLIENT_DICECOMBATMODULE__ONBUYSHOPGOODSCRSP_OFFSET UNITYSDK_OFFSET(0xA167970)
#define RPG_CLIENT_DICECOMBATMODULE__ONFINISHPVESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA167B40)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSHOPDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA167240)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATARSP_OFFSET UNITYSDK_OFFSET(0xA164A40)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATAV2SCRSP_OFFSET UNITYSDK_OFFSET(0xA165840)
#define RPG_CLIENT_DICECOMBATMODULE__ONMODIFYAVATARDICERSP_OFFSET UNITYSDK_OFFSET(0xA166790)
#define RPG_CLIENT_DICECOMBATMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xA16F300)
#define RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA166E30)
#define RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA167160)
#define RPG_CLIENT_DICECOMBATMODULE__ONUPGRADEAVATARRSP_OFFSET UNITYSDK_OFFSET(0xA1669F0)
#define RPG_CLIENT_DICECOMBATMODULE__ONV2FINISHPVESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA167F90)
#define RPG_CLIENT_DICECOMBATMODULE__REQUESTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xA16F350)
#define RPG_CLIENT_DICECOMBATMODULE__REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA16F6F0)
#define RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDAVATAR_OFFSET UNITYSDK_OFFSET(0xA1661B0)
#define RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDDICE_OFFSET UNITYSDK_OFFSET(0xA166450)
#define RPG_CLIENT_DICECOMBATMODULE__SORT2V1STAGEDATAS_OFFSET UNITYSDK_OFFSET(0xA168950)
#define RPG_CLIENT_DICECOMBATMODULE__SORTFRIENDDATALIST_OFFSET UNITYSDK_OFFSET(0xA170240)
#define RPG_CLIENT_DICECOMBATMODULE__SYNCFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xA16FC30)
#define RPG_CLIENT_DICECOMBATMODULE__UPDATESHOPDATALIST_OFFSET UNITYSDK_OFFSET(0xA1673D0)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA170D40)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA170CB0)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA170DB0)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA170D50)
#define RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA170C50)
#define RPG_CLIENT_DICECOMBATMODULE___REQUESTACTIVITYDATA_B__101_0_OFFSET UNITYSDK_OFFSET(0xA170B70)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule_TypeDefinitionIndex = 58551;

	class DiceCombatModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatShopData*>* _ShopDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombatDiceConfigData*>* _DiceDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* _CommunicateDatas; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedStages_k__BackingField; // 0x28
		::RPG::Client::Promises::Promise* _WaitBuyShopGoodRspPromise; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_495E445F847601E8*>* _PlayerDiceDatas; // 0x38
		::RPG::Client::Promises::Promise* _WaitGetItemNotifyPromise; // 0x40
		::RPG::Client::DiceCombat::DiceCombatRedDot* _DiceCombatRedDot_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>* _CachedVisiblePVEStages; // 0x50
		::RPG::Client::Promises::Promise* _WaitGetShopDataRspPromise; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _LeftGetItemIDList; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>* _FriendDatas; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatStageInfo*>* _StageInfos; // 0x70
		::RPG::Client::Promises::Promise* _WaitMultiBuyShopGoodRspPromise; // 0x78
		::RPG::Client::DiceCombat::DiceCombatV2RedDot* _DiceCombatV2RedDot_k__BackingField; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _CurFloorEntityConfigKeyToStageID; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>* _CachedAllPVEStages; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatV2Stage*>* _V2StageDatas; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _AvatarConfigInfos; // 0xA0
		::RPG::Client::Promises::Promise* _WaitMultiGetItemPromise; // 0xA8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FinishedV2PveStages; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _PlayerAvatarInfos; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*>* _SpecialRuleDatas; // 0xC0
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* _SortedShopDataList_k__BackingField; // 0xC8
		::RPG::Client::DiceCombat::DiceCombatPVPManager* _PVPMgr_k__BackingField; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatV2OpponentData*>* _V2OpponentDatas; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* _V2ScoreRewardQuestDatas; // 0xE0
		::RPG::Client::DiceCombat::DiceCombatV2MPService* _V2MPService_k__BackingField; // 0xE8
		::System::Int32 _LeftBuyShopGoodRspCount; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetSystemDataRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATARSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAddItemRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAddItemRspForMultiBuyShopGoods(::System::Nullable_1<::System::UInt32> itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSPFORMULTIBUYSHOPGOODS_OFFSET))(this, itemID);
		}

		::System::Void _OnModifyAvatarDiceRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMODIFYAVATARDICERSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUpgradeAvatarRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONUPGRADEAVATARRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAddAvatar(::System::UInt32 avatarID, ::Proto::DiceCombatAvatar* protoAvatar, ::System::Int64 unlockTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Proto::DiceCombatAvatar*, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDAVATAR_OFFSET))(this, avatarID, protoAvatar, unlockTime);
		}

		::System::Void _OnAddDice(::System::UInt32 diceID, ::System::Int64 unlockTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDDICE_OFFSET))(this, diceID, unlockTime);
		}

		::System::Void _ShowGetItemDialogOnAddAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _ShowGetItemDialogOnAddDice(::System::UInt32 diceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDDICE_OFFSET))(this, diceID);
		}

		::System::Void _OnMultiplayerGetMatchPlayDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultiplayerMatchPlayDataChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetShopDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSHOPDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnBuyShopGoodScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONBUYSHOPGOODSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFinishPveStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONFINISHPVESTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateShopDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_18*>* shopDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_18*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__UPDATESHOPDATALIST_OFFSET))(this, shopDataList);
		}

		::System::Void _AddPacketHandlersV2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERSV2_OFFSET))(this);
		}

		::System::Void _OnGetSystemDataV2ScRsp(::Class_1_455008579EB95638_23* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATAV2SCRSP_OFFSET))(this, rsp);
		}

		::System::Void SendV2FinishPveStageCsReq(::System::UInt32 stageID, ::System::Boolean isWin, ::System::Boolean isFullHp, ::System::UInt32 diceExchangeCount, ::System::UInt32 totalTacticsCardUseCount, ::System::UInt32 maxTacticsCardUseCountInTurn, ::System::UInt32 maxAttackDamageInTurn)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SENDV2FINISHPVESTAGECSREQ_OFFSET))(this, stageID, isWin, isFullHp, diceExchangeCount, totalTacticsCardUseCount, maxTacticsCardUseCountInTurn, maxAttackDamageInTurn);
		}

		::System::Void _OnV2FinishPveStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONV2FINISHPVESTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::DiceCombat::IDiceCombatStage* TryGetStageInfoByCurrentMode(::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_TRYGETSTAGEINFOBYCURRENTMODE_OFFSET))(this, stageID);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvEStage* GetPvEStage2v1(::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPVESTAGE2V1_OFFSET))(this, stageID);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvPStage* GetPvPStage2v1(::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPVPSTAGE2V1_OFFSET))(this, stageID);
		}

		::RPG::Client::DiceCombat::DiceCombatV2Stage* Get2v1StageData(::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2Stage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1STAGEDATA_OFFSET))(this, stageID);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* Get2v1OpponentData(::System::UInt32 opponentID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1OPPONENTDATA_OFFSET))(this, opponentID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>* GetAllSorted2v1PVEStageDatas(::System::Boolean includeStageHideInPVEStagePage)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVESTAGEDATAS_OFFSET))(this, includeStageHideInPVEStagePage);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPStage*>* GetAllSorted2v1PVPStageDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVPSTAGEDATAS_OFFSET))(this);
		}

		::System::Int32 _Sort2v1StageDatas(::RPG::Client::DiceCombat::DiceCombatV2Stage* stageA, ::RPG::Client::DiceCombat::DiceCombatV2Stage* stageB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2Stage*, ::RPG::Client::DiceCombat::DiceCombatV2Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SORT2V1STAGEDATAS_OFFSET))(this, stageA, stageB);
		}

		::System::Void SetPVPStage2v1MaxScore(::System::UInt32 stageID, ::System::UInt32 maxScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPVPSTAGE2V1MAXSCORE_OFFSET))(this, stageID, maxScore);
		}

		::System::UInt32 Get2V1CurrentAllPVPStageScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1CURRENTALLPVPSTAGESCORE_OFFSET))(this);
		}

		::System::UInt32 Get2V1ScoreRewardMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1SCOREREWARDMAXSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetV2ScoreRewardQuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDQUESTDATALIST_OFFSET))(this);
		}

		::System::Boolean IsV2AllScoreRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISV2ALLSCOREREWARDGOT_OFFSET))(this);
		}

		::System::Void GetV2ScoreRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDS_OFFSET))(this);
		}

		::System::Boolean IsV2AnyScoreRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISV2ANYSCOREREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean IsV2ActivityInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISV2ACTIVITYINSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 GetV2ActivityPanelVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETV2ACTIVITYPANELVIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_V2ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_V2ACTIVITYID_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2RedDot* get_DiceCombatV2RedDot()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2RedDot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATV2REDDOT_OFFSET))(this);
		}

		::System::Void set_DiceCombatV2RedDot(::RPG::Client::DiceCombat::DiceCombatV2RedDot* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2RedDot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATV2REDDOT_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void PrepareMissionDataBeforeLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_PREPAREMISSIONDATABEFORELOADING_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatStageInfo* GetStageInfo(::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSTAGEINFO_OFFSET))(this, stageID);
		}

		::System::Boolean IsActivityInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISACTIVITYINSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 GetStageIDByEntityConfigKey(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSTAGEIDBYENTITYCONFIGKEY_OFFSET))(this, groupID, instanceID);
		}

		::System::UInt32 GetPlayerPVESavedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVESAVEDAVATARID_OFFSET))(this);
		}

		::System::Void SetPlayerPVESavedAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVESAVEDAVATARID_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetPlayerPVPSavedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVPSAVEDAVATARID_OFFSET))(this);
		}

		::System::Void SetPlayerPVPSavedAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVPSAVEDAVATARID_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetPlayerV2PVPSavedAvatarID(::System::UInt32 stageID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERV2PVPSAVEDAVATARID_OFFSET))(this, stageID);
		}

		::System::Void SetPlayerV2PVPSavedAvatarID(::System::UInt32 stageID, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERV2PVPSAVEDAVATARID_OFFSET))(this, stageID, avatarID);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetPlayerAvatarInfo(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFO_OFFSET))(this, avatarID);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetConfigAvatarInfo(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCONFIGAVATARINFO_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetPlayerAvatarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLIST_OFFSET))(this);
		}

		::System::Void GetPlayerAvatarInfoListByRef(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* avatarInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLISTBYREF_OFFSET))(this, avatarInfoList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetPlayerAndCanBuyAvatarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLIST_OFFSET))(this);
		}

		::System::Void GetPlayerAndCanBuyAvatarInfoListByRef(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* avatarInfoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLISTBYREF_OFFSET))(this, avatarInfoList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetAvatarConfigInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETAVATARCONFIGINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_495E445F847601E8*>* GetPlayerDiceInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_495E445F847601E8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFOLIST_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* GetSpecialRuleData(::System::UInt32 ruleID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSPECIALRULEDATA_OFFSET))(this, ruleID);
		}

		::System::Boolean HasOrCanBuyRecommendColorDiceForAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_HASORCANBUYRECOMMENDCOLORDICEFORAVATAR_OFFSET))(this, avatarID);
		}

		::System::Boolean IsDiceRecommendForAvatar(::System::UInt32 avatarID, ::System::UInt32 diceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISDICERECOMMENDFORAVATAR_OFFSET))(this, avatarID, diceID);
		}

		::System::Boolean IsAvatarCardShowAsPlayer(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISAVATARCARDSHOWASPLAYER_OFFSET))(this, avatarID);
		}

		::RPG::Client::DiceCombatDiceConfigData* GetDiceConfigData(::System::UInt32 diceID)
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGDATA_OFFSET))(this, diceID);
		}

		::Class_1_495E445F847601E8* GetPlayerDiceInfo(::System::UInt32 diceID)
		{
			return ((::Class_1_495E445F847601E8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFO_OFFSET))(this, diceID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetDiceConfigInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGINFOLIST_OFFSET))(this);
		}

		::System::Int32 GetPlayerDicesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICESCOUNT_OFFSET))(this);
		}

		::System::Int32 GetAllDicesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETALLDICESCOUNT_OFFSET))(this);
		}

		::System::Void TriggerAdventureDiceCombatGroupCustomEvent(::System::UInt32 groupID, ::System::String* eventMsg, ::System::Action* groupEntityNullCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_TRIGGERADVENTUREDICECOMBATGROUPCUSTOMEVENT_OFFSET))(this, groupID, eventMsg, groupEntityNullCallBack);
		}

		::System::Void SendDiceCombatFinishPveStageCsReq(::System::UInt32 stageID, ::System::Boolean isWin, ::System::Boolean isFullHp, ::System::UInt32 damage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SENDDICECOMBATFINISHPVESTAGECSREQ_OFFSET))(this, stageID, isWin, isFullHp, damage);
		}

		::RPG::Client::DiceCombat::DiceCombatCommunicateData* GetCommunicateData(::System::UInt32 communicateConfigID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCommunicateData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCOMMUNICATEDATA_OFFSET))(this, communicateConfigID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopData* GetShopData(::System::UInt32 shopID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPDATA_OFFSET))(this, shopID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetShopGoodData(::System::UInt32 shopID, ::System::UInt32 goodID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATA_OFFSET))(this, shopID, goodID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetShopGoodDataByGoodID(::System::UInt32 goodID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATABYGOODID_OFFSET))(this, goodID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetDiceGoodDataByID(::System::UInt32 diceID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICEGOODDATABYID_OFFSET))(this, diceID);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetAvatarGoodDataByID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETAVATARGOODDATABYID_OFFSET))(this, avatarID);
		}

		::RPG::Client::Promises::IPromise* UpdateShopData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATESHOPDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BuyShopGood(::System::UInt32 shopID, ::System::UInt32 goodID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_BUYSHOPGOOD_OFFSET))(this, shopID, goodID);
		}

		::RPG::Client::Promises::IPromise* BuyMultiShopGoods(::System::UInt32 shopID, ::System::Collections::Generic::List_1<::System::UInt32>* goodIDs)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_BUYMULTISHOPGOODS_OFFSET))(this, shopID, goodIDs);
		}

		::System::Boolean CanBuyAvatarShopGoodByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_CANBUYAVATARSHOPGOODBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetCurrentPurchasableDiceSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCURRENTPURCHASABLEDICESET_OFFSET))(this);
		}

		::System::Boolean GetDiceCombatBatchBuyMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECOMBATBATCHBUYMODE_OFFSET))(this);
		}

		::System::Void SetDiceCombatBatchBuyMode(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETDICECOMBATBATCHBUYMODE_OFFSET))(this, enable);
		}

		::RPG::Client::Promises::IPromise* UpdateFriendData(::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATEFRIENDDATA_OFFSET))(this, gameMode);
		}

		::RPG::Client::Promises::IPromise* UpdateV1FriendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATEV1FRIENDDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* UpdateV2FriendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATEV2FRIENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>* GetFriendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETFRIENDDATALIST_OFFSET))(this);
		}

		::System::Void SetAllowPVPInvitation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETALLOWPVPINVITATION_OFFSET))(this, value);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _RequestActivityData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__REQUESTACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _RequestMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__REQUESTMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseMapCreated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADVENTUREPHASEMAPCREATED_OFFSET))(this, arg);
		}

		::System::String* _GetFloorConfigPath(::System::UInt32 floorID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GETFLOORCONFIGPATH_OFFSET))(this, floorID);
		}

		::System::Void _SyncFriendData(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* friendDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SYNCFRIENDDATA_OFFSET))(this, friendDataList);
		}

		::System::Int32 _SortFriendDataList(::RPG::Client::DiceCombat::DiceCombatFriendData* a, ::RPG::Client::DiceCombat::DiceCombatFriendData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatFriendData*, ::RPG::Client::DiceCombat::DiceCombatFriendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SORTFRIENDDATALIST_OFFSET))(this, a, b);
		}

		::System::Action* _GenShowAddItemDialogDelegate(::System::UInt32 goodID)
		{
			return ((::System::Action*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GENSHOWADDITEMDIALOGDELEGATE_OFFSET))(this, goodID);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_OfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_OFFERINGID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityAvatarRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYAVATARREWARDQUESTID_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatPVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::RPG::Client::DiceCombat::DiceCombatPVPManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_PVPMGR_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatV2MPService* get_V2MPService()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2MPService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_V2MPSERVICE_OFFSET))(this);
		}

		::System::Void set_V2MPService(::RPG::Client::DiceCombat::DiceCombatV2MPService* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2MPService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_V2MPSERVICE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* get_SortedShopDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_SORTEDSHOPDATALIST_OFFSET))(this);
		}

		::System::Void set_SortedShopDataList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_SORTEDSHOPDATALIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FinishedStages()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_FINISHEDSTAGES_OFFSET))(this);
		}

		::System::Void set_FinishedStages(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_FINISHEDSTAGES_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowPVPInvitation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ISALLOWPVPINVITATION_OFFSET))(this);
		}

		::System::Void set_IsAllowPVPInvitation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_ISALLOWPVPINVITATION_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatRedDot* get_DiceCombatRedDot()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRedDot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATREDDOT_OFFSET))(this);
		}

		::System::Void set_DiceCombatRedDot(::RPG::Client::DiceCombat::DiceCombatRedDot* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRedDot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATREDDOT_OFFSET))(this, value);
		}

		::System::Void _Init_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__INIT_B__49_0_OFFSET))(this);
		}

		::System::Void __RequestActivityData_b__101_0(::RPG::Client::ScheduleData* _)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___REQUESTACTIVITYDATA_B__101_0_OFFSET))(this, _);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
