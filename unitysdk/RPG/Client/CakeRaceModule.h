#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_021A9A70FAB9077F;
class Class_1_8F58629771D14EB4;
namespace RPG::Client { class CakeRaceBattleItemInfo; }
namespace RPG::Client { class CakeRaceCatInfo; }
namespace RPG::Client { class CakeRaceChatInfo; }
namespace RPG::Client { class CakeRaceEffectInfo; }
namespace RPG::Client { class CakeRaceFieldInfo; }
namespace RPG::Client { class CakeRaceFriendInfo; }
namespace RPG::Client { class CakeRaceHandbookInfo; }
namespace RPG::Client { class CakeRaceInviteToastService; }
namespace RPG::Client { class CakeRaceTitleInfo; }
namespace RPG::Client { class CakeRaceUI3DUtils; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::CakeRace { class CakeRacePerformanceInfo; }
namespace RPG::Client::CakeRace { class CakeRacePlayerData; }
namespace RPG::Client::CakeRace { class CakeRaceTriggerEventInfo; }
namespace RPG::Client::Progress { class CakeRaceProgressInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92481A0)
#define RPG_CLIENT_CAKERACEMODULE_GETITEMCOUNTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x92493A0)
#define RPG_CLIENT_CAKERACEMODULE_GET_BATTLEITEMINFO_OFFSET UNITYSDK_OFFSET(0x9247A50)
#define RPG_CLIENT_CAKERACEMODULE_GET_CATINFO_OFFSET UNITYSDK_OFFSET(0x9247990)
#define RPG_CLIENT_CAKERACEMODULE_GET_CHATINFO_OFFSET UNITYSDK_OFFSET(0x9247A10)
#define RPG_CLIENT_CAKERACEMODULE_GET_EFFECTINFO_OFFSET UNITYSDK_OFFSET(0x9247A30)
#define RPG_CLIENT_CAKERACEMODULE_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x9247930)
#define RPG_CLIENT_CAKERACEMODULE_GET_FRIENDINFO_OFFSET UNITYSDK_OFFSET(0x9247970)
#define RPG_CLIENT_CAKERACEMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x9247A70)
#define RPG_CLIENT_CAKERACEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9238450)
#define RPG_CLIENT_CAKERACEMODULE_GET_PERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x92479F0)
#define RPG_CLIENT_CAKERACEMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9247AB0)
#define RPG_CLIENT_CAKERACEMODULE_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x9247AD0)
#define RPG_CLIENT_CAKERACEMODULE_GET_PVPMODULEID_OFFSET UNITYSDK_OFFSET(0x9247820)
#define RPG_CLIENT_CAKERACEMODULE_GET_TITLEINFO_OFFSET UNITYSDK_OFFSET(0x9247950)
#define RPG_CLIENT_CAKERACEMODULE_GET_TRIGGERCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x92479D0)
#define RPG_CLIENT_CAKERACEMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0x92479B0)
#define RPG_CLIENT_CAKERACEMODULE_GET_UI3DUTILS_OFFSET UNITYSDK_OFFSET(0x9247A90)
#define RPG_CLIENT_CAKERACEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9247B90)
#define RPG_CLIENT_CAKERACEMODULE_ISPVPINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x92489E0)
#define RPG_CLIENT_CAKERACEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x92480A0)
#define RPG_CLIENT_CAKERACEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x92480E0)
#define RPG_CLIENT_CAKERACEMODULE_REQUESTCAKERACEGETDATA_OFFSET UNITYSDK_OFFSET(0x9246960)
#define RPG_CLIENT_CAKERACEMODULE_REQUESTLOAN_OFFSET UNITYSDK_OFFSET(0x9246FB0)
#define RPG_CLIENT_CAKERACEMODULE_SET_BATTLEITEMINFO_OFFSET UNITYSDK_OFFSET(0x9247A60)
#define RPG_CLIENT_CAKERACEMODULE_SET_CATINFO_OFFSET UNITYSDK_OFFSET(0x92479A0)
#define RPG_CLIENT_CAKERACEMODULE_SET_CHATINFO_OFFSET UNITYSDK_OFFSET(0x9247A20)
#define RPG_CLIENT_CAKERACEMODULE_SET_EFFECTINFO_OFFSET UNITYSDK_OFFSET(0x9247A40)
#define RPG_CLIENT_CAKERACEMODULE_SET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x9247940)
#define RPG_CLIENT_CAKERACEMODULE_SET_FRIENDINFO_OFFSET UNITYSDK_OFFSET(0x9247980)
#define RPG_CLIENT_CAKERACEMODULE_SET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x9247A80)
#define RPG_CLIENT_CAKERACEMODULE_SET_PERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x9247A00)
#define RPG_CLIENT_CAKERACEMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9247AC0)
#define RPG_CLIENT_CAKERACEMODULE_SET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x9247AE0)
#define RPG_CLIENT_CAKERACEMODULE_SET_TITLEINFO_OFFSET UNITYSDK_OFFSET(0x9247960)
#define RPG_CLIENT_CAKERACEMODULE_SET_TRIGGERCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x92479E0)
#define RPG_CLIENT_CAKERACEMODULE_SET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0x92479C0)
#define RPG_CLIENT_CAKERACEMODULE_SET_UI3DUTILS_OFFSET UNITYSDK_OFFSET(0x9247AA0)
#define RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_1_OFFSET UNITYSDK_OFFSET(0x9248B30)
#define RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_OFFSET UNITYSDK_OFFSET(0x9248AD0)
#define RPG_CLIENT_CAKERACEMODULE__ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0x9249250)
#define RPG_CLIENT_CAKERACEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9248060)
#define RPG_CLIENT_CAKERACEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x92463D0)
#define RPG_CLIENT_CAKERACEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9247AF0)
#define RPG_CLIENT_CAKERACEMODULE__GETCOINCOUNTINGAMESTART_OFFSET UNITYSDK_OFFSET(0x924A890)
#define RPG_CLIENT_CAKERACEMODULE__GETCURRENTGUESSTICKETCOUNT_OFFSET UNITYSDK_OFFSET(0x92494B0)
#define RPG_CLIENT_CAKERACEMODULE__HANDLEPROMISEONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9246630)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACECOINSCORECHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9246EA0)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEFINISHFIELDREWARDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9246680)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDAILYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x9247690)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9246BE0)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETFRIENDRANKINGINFOLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x92474D0)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETHANDBOOKSCRSP_OFFSET UNITYSDK_OFFSET(0x9247740)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACELIKEFRIENDRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9247580)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACELOANSCRSP_OFFSET UNITYSDK_OFFSET(0x9247260)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACESTARTPVESCRSP_OFFSET UNITYSDK_OFFSET(0x9246860)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEUPDATEPVESCRSP_OFFSET UNITYSDK_OFFSET(0x92468E0)
#define RPG_CLIENT_CAKERACEMODULE__TRYACCEPTINVITED_OFFSET UNITYSDK_OFFSET(0x9248D20)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x924AC90)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x924AAE0)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x924ABD0)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x924AC30)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x924AB70)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x924AA80)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceModule_TypeDefinitionIndex = 51121;

	class CakeRaceModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _RequestGetDataPromise; // 0x10
		::RPG::Client::Progress::CakeRaceProgressInfo* _ProgressInfo_k__BackingField; // 0x18
		::RPG::Client::CakeRace::CakeRacePlayerData* _PlayerData_k__BackingField; // 0x20
		::RPG::Client::CakeRaceTitleInfo* _TitleInfo_k__BackingField; // 0x28
		::RPG::Client::CakeRaceBattleItemInfo* _BattleItemInfo_k__BackingField; // 0x30
		::RPG::Client::CakeRace::CakeRacePerformanceInfo* _PerformanceInfo_k__BackingField; // 0x38
		::RPG::Client::CakeRaceChatInfo* _ChatInfo_k__BackingField; // 0x40
		::RPG::Client::CakeRaceInviteToastService* InviteToastService; // 0x48
		::RPG::Client::CakeRaceFieldInfo* _FieldInfo_k__BackingField; // 0x50
		::RPG::Client::Promises::Promise_1<::Class_1_8F58629771D14EB4*>* _RequestLoanPromise; // 0x58
		::RPG::Client::CakeRaceEffectInfo* _EffectInfo_k__BackingField; // 0x60
		::RPG::Client::CakeRaceCatInfo* _CatInfo_k__BackingField; // 0x68
		::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* _TriggerEventInfo_k__BackingField; // 0x70
		::RPG::Client::CakeRaceFriendInfo* _FriendInfo_k__BackingField; // 0x78
		::RPG::Client::CakeRaceHandbookInfo* _HandbookInfo_k__BackingField; // 0x80
		::Class_1_021A9A70FAB9077F* _TriggerConditionInfo_k__BackingField; // 0x88
		::RPG::Client::CakeRaceUI3DUtils* _UI3DUtils_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _HandlePromiseOnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__HANDLEPROMISEONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnCakeRaceFinishFieldRewardScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEFINISHFIELDREWARDSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnCakeRaceStartPveScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACESTARTPVESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCakeRaceUpdatePveScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEUPDATEPVESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::Promises::Promise* RequestCakeRaceGetData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_REQUESTCAKERACEGETDATA_OFFSET))(this);
		}

		::System::Void _OnCakeRaceGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCakeRaceCoinScoreChangeScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACECOINSCORECHANGESCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>* RequestLoan(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_REQUESTLOAN_OFFSET))(this, prepareData);
		}

		::System::Void _OnCakeRaceLoanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACELOANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCakeRaceGetFriendRankingInfoListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETFRIENDRANKINGINFOLISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCakeRaceLikeFriendRankingInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACELIKEFRIENDRANKINGINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCakeRaceGetDailyLikeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDAILYLIKESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCakeRaceGetHandbookScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETHANDBOOKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		static ::RPG::Client::CakeRaceModule* get_Instance()
		{
			return ((::RPG::Client::CakeRaceModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::UInt32 get_PvpModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_PVPMODULEID_OFFSET))(this);
		}

		::RPG::Client::CakeRaceFieldInfo* get_FieldInfo()
		{
			return ((::RPG::Client::CakeRaceFieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_FIELDINFO_OFFSET))(this);
		}

		::System::Void set_FieldInfo(::RPG::Client::CakeRaceFieldInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_FIELDINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceTitleInfo* get_TitleInfo()
		{
			return ((::RPG::Client::CakeRaceTitleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_TITLEINFO_OFFSET))(this);
		}

		::System::Void set_TitleInfo(::RPG::Client::CakeRaceTitleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceTitleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_TITLEINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceFriendInfo* get_FriendInfo()
		{
			return ((::RPG::Client::CakeRaceFriendInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_FRIENDINFO_OFFSET))(this);
		}

		::System::Void set_FriendInfo(::RPG::Client::CakeRaceFriendInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFriendInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_FRIENDINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceCatInfo* get_CatInfo()
		{
			return ((::RPG::Client::CakeRaceCatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_CATINFO_OFFSET))(this);
		}

		::System::Void set_CatInfo(::RPG::Client::CakeRaceCatInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_CATINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* get_TriggerEventInfo()
		{
			return ((::RPG::Client::CakeRace::CakeRaceTriggerEventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_TRIGGEREVENTINFO_OFFSET))(this);
		}

		::System::Void set_TriggerEventInfo(::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceTriggerEventInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_TRIGGEREVENTINFO_OFFSET))(this, value);
		}

		::Class_1_021A9A70FAB9077F* get_TriggerConditionInfo()
		{
			return ((::Class_1_021A9A70FAB9077F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_TRIGGERCONDITIONINFO_OFFSET))(this);
		}

		::System::Void set_TriggerConditionInfo(::Class_1_021A9A70FAB9077F* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_021A9A70FAB9077F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_TRIGGERCONDITIONINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRace::CakeRacePerformanceInfo* get_PerformanceInfo()
		{
			return ((::RPG::Client::CakeRace::CakeRacePerformanceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_PERFORMANCEINFO_OFFSET))(this);
		}

		::System::Void set_PerformanceInfo(::RPG::Client::CakeRace::CakeRacePerformanceInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_PERFORMANCEINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceChatInfo* get_ChatInfo()
		{
			return ((::RPG::Client::CakeRaceChatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_CHATINFO_OFFSET))(this);
		}

		::System::Void set_ChatInfo(::RPG::Client::CakeRaceChatInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_CHATINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceEffectInfo* get_EffectInfo()
		{
			return ((::RPG::Client::CakeRaceEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_EFFECTINFO_OFFSET))(this);
		}

		::System::Void set_EffectInfo(::RPG::Client::CakeRaceEffectInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceEffectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_EFFECTINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceBattleItemInfo* get_BattleItemInfo()
		{
			return ((::RPG::Client::CakeRaceBattleItemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_BATTLEITEMINFO_OFFSET))(this);
		}

		::System::Void set_BattleItemInfo(::RPG::Client::CakeRaceBattleItemInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_BATTLEITEMINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::CakeRaceHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::System::Void set_HandbookInfo(::RPG::Client::CakeRaceHandbookInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceHandbookInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_HANDBOOKINFO_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceUI3DUtils* get_UI3DUtils()
		{
			return ((::RPG::Client::CakeRaceUI3DUtils*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_UI3DUTILS_OFFSET))(this);
		}

		::System::Void set_UI3DUtils(::RPG::Client::CakeRaceUI3DUtils* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceUI3DUtils*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_UI3DUTILS_OFFSET))(this, value);
		}

		::RPG::Client::CakeRace::CakeRacePlayerData* get_PlayerData()
		{
			return ((::RPG::Client::CakeRace::CakeRacePlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::CakeRace::CakeRacePlayerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_PLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::Progress::CakeRaceProgressInfo* get_ProgressInfo()
		{
			return ((::RPG::Client::Progress::CakeRaceProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_PROGRESSINFO_OFFSET))(this);
		}

		::System::Void set_ProgressInfo(::RPG::Client::Progress::CakeRaceProgressInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Progress::CakeRaceProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_PROGRESSINFO_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPvpInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_ISPVPINSCHEDULE_OFFSET))(this);
		}

		::System::Void TryAcceptInvited(::RPG::Client::ChatMessageInviteData* inviteData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_OFFSET))(this, inviteData);
		}

		::System::Void TryAcceptInvited_1(::System::UInt64 lobbyID, ::System::Collections::Generic::List_1<::System::UInt32>* gameParamList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_1_OFFSET))(this, lobbyID, gameParamList);
		}

		::System::Void _TryAcceptInvited(::System::UInt64 lobbyID, ::System::Collections::Generic::List_1<::System::UInt32>* gameParamList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__TRYACCEPTINVITED_OFFSET))(this, lobbyID, gameParamList);
		}

		::System::Void _AcceptInvitation(::System::UInt64 lobbyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ACCEPTINVITATION_OFFSET))(this, lobbyID);
		}

		::System::Int32 GetItemCountByConfigID(::System::UInt32 configID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GETITEMCOUNTBYCONFIGID_OFFSET))(this, configID);
		}

		::System::Int32 _GetCurrentGuessTicketCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__GETCURRENTGUESSTICKETCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetCoinCountInGameStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__GETCOINCOUNTINGAMESTART_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
