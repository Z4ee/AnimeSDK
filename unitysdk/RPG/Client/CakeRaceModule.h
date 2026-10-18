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

#define RPG_CLIENT_CAKERACEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC91B610)
#define RPG_CLIENT_CAKERACEMODULE_GETITEMCOUNTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0xC91C6A0)
#define RPG_CLIENT_CAKERACEMODULE_GET_BATTLEITEMINFO_OFFSET UNITYSDK_OFFSET(0xC91AEC0)
#define RPG_CLIENT_CAKERACEMODULE_GET_CATINFO_OFFSET UNITYSDK_OFFSET(0xC91AE00)
#define RPG_CLIENT_CAKERACEMODULE_GET_CHATINFO_OFFSET UNITYSDK_OFFSET(0xC91AE80)
#define RPG_CLIENT_CAKERACEMODULE_GET_EFFECTINFO_OFFSET UNITYSDK_OFFSET(0xC91AEA0)
#define RPG_CLIENT_CAKERACEMODULE_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0xC91ADA0)
#define RPG_CLIENT_CAKERACEMODULE_GET_FRIENDINFO_OFFSET UNITYSDK_OFFSET(0xC91ADE0)
#define RPG_CLIENT_CAKERACEMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0xC91AEE0)
#define RPG_CLIENT_CAKERACEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC8FDF60)
#define RPG_CLIENT_CAKERACEMODULE_GET_PERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0xC91AE60)
#define RPG_CLIENT_CAKERACEMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xC91AF20)
#define RPG_CLIENT_CAKERACEMODULE_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xC91AF40)
#define RPG_CLIENT_CAKERACEMODULE_GET_PVPMODULEID_OFFSET UNITYSDK_OFFSET(0xC91AC90)
#define RPG_CLIENT_CAKERACEMODULE_GET_TITLEINFO_OFFSET UNITYSDK_OFFSET(0xC91ADC0)
#define RPG_CLIENT_CAKERACEMODULE_GET_TRIGGERCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0xC91AE40)
#define RPG_CLIENT_CAKERACEMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0xC91AE20)
#define RPG_CLIENT_CAKERACEMODULE_GET_UI3DUTILS_OFFSET UNITYSDK_OFFSET(0xC91AF00)
#define RPG_CLIENT_CAKERACEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC91B000)
#define RPG_CLIENT_CAKERACEMODULE_ISPVPINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC8FDFE0)
#define RPG_CLIENT_CAKERACEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xC91B510)
#define RPG_CLIENT_CAKERACEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC91B550)
#define RPG_CLIENT_CAKERACEMODULE_REQUESTCAKERACEGETDATA_OFFSET UNITYSDK_OFFSET(0xC919E30)
#define RPG_CLIENT_CAKERACEMODULE_REQUESTLOAN_OFFSET UNITYSDK_OFFSET(0xC91A480)
#define RPG_CLIENT_CAKERACEMODULE_SET_BATTLEITEMINFO_OFFSET UNITYSDK_OFFSET(0xC91AED0)
#define RPG_CLIENT_CAKERACEMODULE_SET_CATINFO_OFFSET UNITYSDK_OFFSET(0xC91AE10)
#define RPG_CLIENT_CAKERACEMODULE_SET_CHATINFO_OFFSET UNITYSDK_OFFSET(0xC91AE90)
#define RPG_CLIENT_CAKERACEMODULE_SET_EFFECTINFO_OFFSET UNITYSDK_OFFSET(0xC91AEB0)
#define RPG_CLIENT_CAKERACEMODULE_SET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0xC91ADB0)
#define RPG_CLIENT_CAKERACEMODULE_SET_FRIENDINFO_OFFSET UNITYSDK_OFFSET(0xC91ADF0)
#define RPG_CLIENT_CAKERACEMODULE_SET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0xC91AEF0)
#define RPG_CLIENT_CAKERACEMODULE_SET_PERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0xC91AE70)
#define RPG_CLIENT_CAKERACEMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xC91AF30)
#define RPG_CLIENT_CAKERACEMODULE_SET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xC91AF50)
#define RPG_CLIENT_CAKERACEMODULE_SET_TITLEINFO_OFFSET UNITYSDK_OFFSET(0xC91ADD0)
#define RPG_CLIENT_CAKERACEMODULE_SET_TRIGGERCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0xC91AE50)
#define RPG_CLIENT_CAKERACEMODULE_SET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0xC91AE30)
#define RPG_CLIENT_CAKERACEMODULE_SET_UI3DUTILS_OFFSET UNITYSDK_OFFSET(0xC91AF10)
#define RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_1_OFFSET UNITYSDK_OFFSET(0xC91BD80)
#define RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_OFFSET UNITYSDK_OFFSET(0xC91BD20)
#define RPG_CLIENT_CAKERACEMODULE__ACCEPTINVITATION_OFFSET UNITYSDK_OFFSET(0xC91C530)
#define RPG_CLIENT_CAKERACEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC91B4D0)
#define RPG_CLIENT_CAKERACEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC9194F0)
#define RPG_CLIENT_CAKERACEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC91AF60)
#define RPG_CLIENT_CAKERACEMODULE__GETCOINCOUNTINGAMESTART_OFFSET UNITYSDK_OFFSET(0xC91E3F0)
#define RPG_CLIENT_CAKERACEMODULE__GETCURRENTGUESSTICKETCOUNT_OFFSET UNITYSDK_OFFSET(0xC91C850)
#define RPG_CLIENT_CAKERACEMODULE__HANDLEPROMISEONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC919B20)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACECOINSCORECHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC91A380)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEFINISHFIELDREWARDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC919B80)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDAILYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0xC91AB00)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC91A090)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETFRIENDRANKINGINFOLISTSCRSP_OFFSET UNITYSDK_OFFSET(0xC91A940)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETHANDBOOKSCRSP_OFFSET UNITYSDK_OFFSET(0xC91ABB0)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACELIKEFRIENDRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC91A9F0)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACELOANSCRSP_OFFSET UNITYSDK_OFFSET(0xC91A710)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACESTARTPVESCRSP_OFFSET UNITYSDK_OFFSET(0xC919D30)
#define RPG_CLIENT_CAKERACEMODULE__ONCAKERACEUPDATEPVESCRSP_OFFSET UNITYSDK_OFFSET(0xC919DB0)
#define RPG_CLIENT_CAKERACEMODULE__TRYACCEPTINVITED_OFFSET UNITYSDK_OFFSET(0xC91BFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceModule_TypeDefinitionIndex = 63009;

	class CakeRaceModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::CakeRaceFriendInfo* _FriendInfo_k__BackingField; // 0x10
		::RPG::Client::Progress::CakeRaceProgressInfo* _ProgressInfo_k__BackingField; // 0x18
		::Class_1_021A9A70FAB9077F* _TriggerConditionInfo_k__BackingField; // 0x20
		::RPG::Client::CakeRaceHandbookInfo* _HandbookInfo_k__BackingField; // 0x28
		::RPG::Client::CakeRaceBattleItemInfo* _BattleItemInfo_k__BackingField; // 0x30
		::RPG::Client::CakeRaceCatInfo* _CatInfo_k__BackingField; // 0x38
		::RPG::Client::CakeRace::CakeRacePerformanceInfo* _PerformanceInfo_k__BackingField; // 0x40
		::RPG::Client::CakeRaceEffectInfo* _EffectInfo_k__BackingField; // 0x48
		::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* _TriggerEventInfo_k__BackingField; // 0x50
		::RPG::Client::CakeRaceTitleInfo* _TitleInfo_k__BackingField; // 0x58
		::RPG::Client::CakeRace::CakeRacePlayerData* _PlayerData_k__BackingField; // 0x60
		::RPG::Client::CakeRaceUI3DUtils* _UI3DUtils_k__BackingField; // 0x68
		::RPG::Client::CakeRaceInviteToastService* InviteToastService; // 0x70
		::RPG::Client::CakeRaceFieldInfo* _FieldInfo_k__BackingField; // 0x78
		::RPG::Client::Promises::Promise_1<::Class_1_8F58629771D14EB4*>* _RequestLoanPromise; // 0x80
		::RPG::Client::CakeRaceChatInfo* _ChatInfo_k__BackingField; // 0x88
		::RPG::Client::Promises::Promise* _RequestGetDataPromise; // 0x90

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

		::System::Void _OnCakeRaceFinishFieldRewardScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEFINISHFIELDREWARDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCakeRaceStartPveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACESTARTPVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCakeRaceUpdatePveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEUPDATEPVESCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* RequestCakeRaceGetData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_REQUESTCAKERACEGETDATA_OFFSET))(this);
		}

		::System::Void _OnCakeRaceGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCakeRaceCoinScoreChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACECOINSCORECHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>* RequestLoan(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_REQUESTLOAN_OFFSET))(this, a1);
		}

		::System::Void _OnCakeRaceLoanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACELOANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCakeRaceGetFriendRankingInfoListScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETFRIENDRANKINGINFOLISTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCakeRaceLikeFriendRankingInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACELIKEFRIENDRANKINGINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCakeRaceGetDailyLikeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETDAILYLIKESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCakeRaceGetHandbookScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ONCAKERACEGETHANDBOOKSCRSP_OFFSET))(this, a1, a2);
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

		::System::Void set_FieldInfo(::RPG::Client::CakeRaceFieldInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_FIELDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceTitleInfo* get_TitleInfo()
		{
			return ((::RPG::Client::CakeRaceTitleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_TITLEINFO_OFFSET))(this);
		}

		::System::Void set_TitleInfo(::RPG::Client::CakeRaceTitleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceTitleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_TITLEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceFriendInfo* get_FriendInfo()
		{
			return ((::RPG::Client::CakeRaceFriendInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_FRIENDINFO_OFFSET))(this);
		}

		::System::Void set_FriendInfo(::RPG::Client::CakeRaceFriendInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFriendInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_FRIENDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceCatInfo* get_CatInfo()
		{
			return ((::RPG::Client::CakeRaceCatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_CATINFO_OFFSET))(this);
		}

		::System::Void set_CatInfo(::RPG::Client::CakeRaceCatInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_CATINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* get_TriggerEventInfo()
		{
			return ((::RPG::Client::CakeRace::CakeRaceTriggerEventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_TRIGGEREVENTINFO_OFFSET))(this);
		}

		::System::Void set_TriggerEventInfo(::RPG::Client::CakeRace::CakeRaceTriggerEventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceTriggerEventInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_TRIGGEREVENTINFO_OFFSET))(this, a1);
		}

		::Class_1_021A9A70FAB9077F* get_TriggerConditionInfo()
		{
			return ((::Class_1_021A9A70FAB9077F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_TRIGGERCONDITIONINFO_OFFSET))(this);
		}

		::System::Void set_TriggerConditionInfo(::Class_1_021A9A70FAB9077F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_021A9A70FAB9077F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_TRIGGERCONDITIONINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRacePerformanceInfo* get_PerformanceInfo()
		{
			return ((::RPG::Client::CakeRace::CakeRacePerformanceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_PERFORMANCEINFO_OFFSET))(this);
		}

		::System::Void set_PerformanceInfo(::RPG::Client::CakeRace::CakeRacePerformanceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_PERFORMANCEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceChatInfo* get_ChatInfo()
		{
			return ((::RPG::Client::CakeRaceChatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_CHATINFO_OFFSET))(this);
		}

		::System::Void set_ChatInfo(::RPG::Client::CakeRaceChatInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_CHATINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceEffectInfo* get_EffectInfo()
		{
			return ((::RPG::Client::CakeRaceEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_EFFECTINFO_OFFSET))(this);
		}

		::System::Void set_EffectInfo(::RPG::Client::CakeRaceEffectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceEffectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_EFFECTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceBattleItemInfo* get_BattleItemInfo()
		{
			return ((::RPG::Client::CakeRaceBattleItemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_BATTLEITEMINFO_OFFSET))(this);
		}

		::System::Void set_BattleItemInfo(::RPG::Client::CakeRaceBattleItemInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_BATTLEITEMINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::CakeRaceHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::System::Void set_HandbookInfo(::RPG::Client::CakeRaceHandbookInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceHandbookInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_HANDBOOKINFO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceUI3DUtils* get_UI3DUtils()
		{
			return ((::RPG::Client::CakeRaceUI3DUtils*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_UI3DUTILS_OFFSET))(this);
		}

		::System::Void set_UI3DUtils(::RPG::Client::CakeRaceUI3DUtils* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceUI3DUtils*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_UI3DUTILS_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRace::CakeRacePlayerData* get_PlayerData()
		{
			return ((::RPG::Client::CakeRace::CakeRacePlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::CakeRace::CakeRacePlayerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_PLAYERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Progress::CakeRaceProgressInfo* get_ProgressInfo()
		{
			return ((::RPG::Client::Progress::CakeRaceProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GET_PROGRESSINFO_OFFSET))(this);
		}

		::System::Void set_ProgressInfo(::RPG::Client::Progress::CakeRaceProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Progress::CakeRaceProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_SET_PROGRESSINFO_OFFSET))(this, a1);
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

		::System::Void TryAcceptInvited(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_OFFSET))(this, a1);
		}

		::System::Void TryAcceptInvited_1(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_TRYACCEPTINVITED_1_OFFSET))(this, a1, a2);
		}

		::System::Void _TryAcceptInvited(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__TRYACCEPTINVITED_OFFSET))(this, a1, a2);
		}

		::System::Void _AcceptInvitation(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__ACCEPTINVITATION_OFFSET))(this, a1);
		}

		::System::Int32 GetItemCountByConfigID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE_GETITEMCOUNTBYCONFIGID_OFFSET))(this, a1);
		}

		::System::Int32 _GetCurrentGuessTicketCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__GETCURRENTGUESSTICKETCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetCoinCountInGameStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEMODULE__GETCOINCOUNTINGAMESTART_OFFSET))(this);
		}
	};
}
