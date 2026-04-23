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

#define RPG_CLIENT_CAKERACEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F0B740)
#define RPG_CLIENT_CAKERACEMODULE_GETITEMCOUNTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x9F0C6B0)
#define RPG_CLIENT_CAKERACEMODULE_GET_BATTLEITEMINFO_OFFSET UNITYSDK_OFFSET(0x9F0B000)
#define RPG_CLIENT_CAKERACEMODULE_GET_CATINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF40)
#define RPG_CLIENT_CAKERACEMODULE_GET_CHATINFO_OFFSET UNITYSDK_OFFSET(0x9F0AFC0)
#define RPG_CLIENT_CAKERACEMODULE_GET_EFFECTINFO_OFFSET UNITYSDK_OFFSET(0x9F0AFE0)
#define RPG_CLIENT_CAKERACEMODULE_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x9F0AEE0)
#define RPG_CLIENT_CAKERACEMODULE_GET_FRIENDINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF20)
#define RPG_CLIENT_CAKERACEMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x9F0B020)
#define RPG_CLIENT_CAKERACEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9EFBA00)
#define RPG_CLIENT_CAKERACEMODULE_GET_PERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x9F0AFA0)
#define RPG_CLIENT_CAKERACEMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9F0B060)
#define RPG_CLIENT_CAKERACEMODULE_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x9F0B080)
#define RPG_CLIENT_CAKERACEMODULE_GET_PVPMODULEID_OFFSET UNITYSDK_OFFSET(0x9F0ADD0)
#define RPG_CLIENT_CAKERACEMODULE_GET_TITLEINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF00)
#define RPG_CLIENT_CAKERACEMODULE_GET_TRIGGERCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF80)
#define RPG_CLIENT_CAKERACEMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF60)
#define RPG_CLIENT_CAKERACEMODULE_GET_UI3DUTILS_OFFSET UNITYSDK_OFFSET(0x9F0B040)
#define RPG_CLIENT_CAKERACEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9F0B140)
#define RPG_CLIENT_CAKERACEMODULE_ISPVPINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F0BDC0)
#define RPG_CLIENT_CAKERACEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9F0B650)
#define RPG_CLIENT_CAKERACEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F0B690)
#define RPG_CLIENT_CAKERACEMODULE_REQUESTCAKERACEGETDATA_OFFSET UNITYSDK_OFFSET(0x9F09F10)
#define RPG_CLIENT_CAKERACEMODULE_REQUESTLOAN_OFFSET UNITYSDK_OFFSET(0x9F0A560)
#define RPG_CLIENT_CAKERACEMODULE_SET_BATTLEITEMINFO_OFFSET UNITYSDK_OFFSET(0x9F0B010)
#define RPG_CLIENT_CAKERACEMODULE_SET_CATINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF50)
#define RPG_CLIENT_CAKERACEMODULE_SET_CHATINFO_OFFSET UNITYSDK_OFFSET(0x9F0AFD0)
#define RPG_CLIENT_CAKERACEMODULE_SET_EFFECTINFO_OFFSET UNITYSDK_OFFSET(0x9F0AFF0)
#define RPG_CLIENT_CAKERACEMODULE_SET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x9F0AEF0)
#define RPG_CLIENT_CAKERACEMODULE_SET_FRIENDINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF30)
#define RPG_CLIENT_CAKERACEMODULE_SET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x9F0B030)
#define RPG_CLIENT_CAKERACEMODULE_SET_PERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x9F0AFB0)
#define RPG_CLIENT_CAKERACEMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9F0B070)
#define RPG_CLIENT_CAKERACEMODULE_SET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x9F0B090)
#define RPG_CLIENT_CAKERACEMODULE_SET_TITLEINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF10)
#define RPG_CLIENT_CAKERACEMODULE_SET_TRIGGERCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF90)
#define RPG_CLIENT_CAKERACEMODULE_SET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0x9F0AF70)
#define RPG_CLIENT_CAKERACEMODULE_SET_UI3DUTILS_OFFSET UNITYSDK_OFFSET(0x9F0B050)
#define RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_1_OFFSET UNITYSDK_OFFSET(0x9F0BF10)
#define RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_OFFSET UNITYSDK_OFFSET(0x9F0BEB0)
#define RPG_CLIENT_CAKERACEMODULE__ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0x9F0C560)
#define RPG_CLIENT_CAKERACEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F0B610)
#define RPG_CLIENT_CAKERACEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F09980)
#define RPG_CLIENT_CAKERACEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0B0A0)
#define RPG_CLIENT_CAKERACEMODULE__GETCOINCOUNTINGAMESTART_OFFSET UNITYSDK_OFFSET(0x9F0DBA0)
#define RPG_CLIENT_CAKERACEMODULE__GETCURRENTGUESSTICKETCOUNT_OFFSET UNITYSDK_OFFSET(0x9F0C7C0)
#define RPG_CLIENT_CAKERACEMODULE__HANDLEPROMISEONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F09BE0)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACECOINSCORECHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F0A450)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEFINISHFIELDREWARDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9F09C30)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDAILYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x9F0AC40)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9F0A190)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETFRIENDRANKINGINFOLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x9F0AA80)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETHANDBOOKSCRSP_OFFSET UNITYSDK_OFFSET(0x9F0ACF0)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACELIKEFRIENDRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9F0AB30)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACELOANSCRSP_OFFSET UNITYSDK_OFFSET(0x9F0A810)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACESTARTPVESCRSP_OFFSET UNITYSDK_OFFSET(0x9F09E10)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEUPDATEPVESCRSP_OFFSET UNITYSDK_OFFSET(0x9F09E90)
#define RPG_CLIENT_CAKERACEMODULE__TRYACCEPTINVITED_OFFSET UNITYSDK_OFFSET(0x9F0C100)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F0DFA0)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9F0DDF0)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9F0DEE0)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9F0DF40)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F0DE80)
#define RPG_CLIENT_CAKERACEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F0DD90)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceModule_TypeDefinitionIndex = 58041;

	class CakeRaceModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::CakeRaceHandbookInfo* _HandbookInfo_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _RequestGetDataPromise; // 0x18
		::RPG::Client::Progress::CakeRaceProgressInfo* _ProgressInfo_k__BackingField; // 0x20
		::RPG::Client::CakeRaceBattleItemInfo* _BattleItemInfo_k__BackingField; // 0x28
		::RPG::Client::CakeRaceFieldInfo* _FieldInfo_k__BackingField; // 0x30
		::RPG::Client::Promises::Promise_1<::Class_1_8F58629771D14EB4*>* _RequestLoanPromise; // 0x38
		::RPG::Client::CakeRaceFriendInfo* _FriendInfo_k__BackingField; // 0x40
		::RPG::Client::CakeRace::CakeRacePlayerData* _PlayerData_k__BackingField; // 0x48
		::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* _TriggerEventInfo_k__BackingField; // 0x50
		::RPG::Client::CakeRaceUI3DUtils* _UI3DUtils_k__BackingField; // 0x58
		::RPG::Client::CakeRaceChatInfo* _ChatInfo_k__BackingField; // 0x60
		::RPG::Client::CakeRaceCatInfo* _CatInfo_k__BackingField; // 0x68
		::RPG::Client::CakeRaceTitleInfo* _TitleInfo_k__BackingField; // 0x70
		::RPG::Client::CakeRaceInviteToastService* InviteToastService; // 0x78
		::RPG::Client::CakeRace::CakeRacePerformanceInfo* _PerformanceInfo_k__BackingField; // 0x80
		::Class_1_021A9A70FAB9077F* _TriggerConditionInfo_k__BackingField; // 0x88
		::RPG::Client::CakeRaceEffectInfo* _EffectInfo_k__BackingField; // 0x90

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
