#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/Proto/RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_0_16E4307DCC419505_634;
class Class_0_16E4307DCC419505_839;
class Class_0_16E4307DCC419505_842;
class Class_1_14E02E1F6D70E487_3;
class Class_1_2250AFBBC876BF24_1;
class Class_1_55B1E96AFC09BA51;
class Class_1_5F7C2EDC42F3AA1C;
class Class_1_7BF8FDF00F218876_13;
class Class_1_886F39594BD4EAF9;
class Class_1_AFA032BCA5DAB27D;
class Class_1_BDE0598EF34BE45E;
class Class_1_C1A562AF201E3725_7;
class Class_1_D1E0AD3915BCCF29_111;
class Class_1_F82FBBCA5464FD05;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueMedalInfo; }
namespace RPG::Client { class RogueShopInfo; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ROGUEADVENTUREMODULE_CONVERTWOLFGUNTARGETINFO_OFFSET UNITYSDK_OFFSET(0xC76BE40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_DEQUEUEROGUEACTIONITEM_OFFSET UNITYSDK_OFFSET(0xC7685F0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC765DA0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISBANAEONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7684D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISLASTLEGACYROGUESUBMODEDLC_OFFSET UNITYSDK_OFFSET(0xC76B5C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISMIRACLEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC768330)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISSHOWHANDBOOKHINT_OFFSET UNITYSDK_OFFSET(0xC768430)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISTOURNGODMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC768560)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUEDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0xC76B670)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0xC76B5A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET UNITYSDK_OFFSET(0xC76B650)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_MEDALINFO_OFFSET UNITYSDK_OFFSET(0xC765A40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ROGUESHOPINFO_OFFSET UNITYSDK_OFFSET(0xC767DF0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_TIMERATIO_OFFSET UNITYSDK_OFFSET(0xC76C1D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0xC76C1B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFSHOOTINGSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0xC76C1E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_1_OFFSET UNITYSDK_OFFSET(0xC768ED0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_2_OFFSET UNITYSDK_OFFSET(0xC768F60)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_3_OFFSET UNITYSDK_OFFSET(0xC768FD0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0xC768B30)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC765AF0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEACTIONQUEUELOCKED_OFFSET UNITYSDK_OFFSET(0xC76A810)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEFUNCTIONTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0xC7683C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_MARKSELECTACTIONACTIVE_OFFSET UNITYSDK_OFFSET(0xC7686C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC766060)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_REMOVETRIGGEREDACTIONID_OFFSET UNITYSDK_OFFSET(0xC768890)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNDATA_OFFSET UNITYSDK_OFFSET(0xC76C090)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0xC76C120)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SETROGUEACTIONQUEUELOCKED_OFFSET UNITYSDK_OFFSET(0xC76A5C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUEDLCSUBMODE_OFFSET UNITYSDK_OFFSET(0xC76B680)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0xC76B5B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET UNITYSDK_OFFSET(0xC76B660)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_ROGUESHOPINFO_OFFSET UNITYSDK_OFFSET(0xC767E00)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_SET_WOLFGUNEXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0xC76C1C0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRIGGERROGUESELECTACTIONSHOW_OFFSET UNITYSDK_OFFSET(0xC76A8D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYADDROOMCHANGEDELAYNOTIFY_OFFSET UNITYSDK_OFFSET(0xC76AA50)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYINVOKEROGUEACTIONSINLOADING_OFFSET UNITYSDK_OFFSET(0xC76AC10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYSTARTACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0xC76AE40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_TRYTAKEOVERSWITCHPAGE_OFFSET UNITYSDK_OFFSET(0xC76ADE0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE_UPDATEWOLFGUNINFO_OFFSET UNITYSDK_OFFSET(0xC76BDC0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC766230)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC766A40)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDGAMBLEFUNCPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC766E00)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC766100)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7662D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_1_OFFSET UNITYSDK_OFFSET(0xC769A80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_OFFSET UNITYSDK_OFFSET(0xC769930)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGSELECTACTION_OFFSET UNITYSDK_OFFSET(0xC769120)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDROOMCHANGEDELAYNOTIFYEVENT_OFFSET UNITYSDK_OFFSET(0xC76A970)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDSHOPPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC766660)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWOLFBROGUNPLAYPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC766F90)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWORKBENCHPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC766C70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__CHECKLOCKBYINSTANTKILLTOAST_OFFSET UNITYSDK_OFFSET(0xC76A260)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC765A50)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__GETACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0xC76A060)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__INITROGUEACTIONQUEUE_OFFSET UNITYSDK_OFFSET(0xC768D10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ISMODEUSINGLEGACYACTIONRESULTEXECUTOR_OFFSET UNITYSDK_OFFSET(0xC7698E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xC768060)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPFORMULASCRSP_OFFSET UNITYSDK_OFFSET(0xC768270)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPMIRACLESCRSP_OFFSET UNITYSDK_OFFSET(0xC767E90)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPBUFFINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC767F10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPFORMULAINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC768120)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPMIRACLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC767E10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xC769E30)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEDOGAMBLESCRSP_OFFSET UNITYSDK_OFFSET(0xC76B3A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEGETGAMBLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC76B310)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC76AEB0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHHANDLEFUNCSCRSP_OFFSET UNITYSDK_OFFSET(0xC76B280)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7695D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONPENDINGACTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC769040)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xC766FD0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC767780)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC767920)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONENTERROGUETRACKMISSION_OFFSET UNITYSDK_OFFSET(0xC76BC00)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONEXCHANGEROGUEREWARDKEYSCRSP_OFFSET UNITYSDK_OFFSET(0xC767D60)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONINSTANTKILLTOASTLOCK_OFFSET UNITYSDK_OFFSET(0xC76A560)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONINTERACTPROPSCRSP_OFFSET UNITYSDK_OFFSET(0xC767C70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONLEAVEROGUETRACKMISSION_OFFSET UNITYSDK_OFFSET(0xC76BC60)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xC76AAC0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__ONUIWOLFBROSHOOTINGROGUEBONUSTARGETKILLED_OFFSET UNITYSDK_OFFSET(0xC76BCC0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__PROCESSEVENTS_OFFSET UNITYSDK_OFFSET(0xC76AB80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONLASTAREAINFO_OFFSET UNITYSDK_OFFSET(0xC767720)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0xC767520)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC7691A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKLASTMISSION_OFFSET UNITYSDK_OFFSET(0xC76BAC0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKROGUEMISSION_OFFSET UNITYSDK_OFFSET(0xC76B690)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC76C270)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC76C1F0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC76C280)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76C2E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC76C340)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule_TypeDefinitionIndex = 62996;

	class RogueAdventureModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_634*>* _CurActiveSelectActions; // 0x10
		::RPG::Client::LuaUIController* _CacheSwitchPage; // 0x18
		::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>* _EventHideScreenTransfer; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ActionQueueLocked; // 0x28
		::Class_1_5F7C2EDC42F3AA1C* _WolfGunInfo; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _WolfGunExtraRewards_k__BackingField; // 0x38
		::RPG::Client::RogueMedalInfo* _MedalInfo_k__BackingField; // 0x40
		::RPG::Client::RogueShopInfo* _RogueShopInfo_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F82FBBCA5464FD05*>* _ActionQueues; // 0x50
		::System::Collections::Generic::HashSet_1<::Enum_3_96F6662CA3713095_24>* _UnlockFunctionTypes; // 0x58
		::System::UInt32 _WolfShootingSerialNumber; // 0x60
		::System::UInt32 LockedRogueSubModeByRefreshMap; // 0x64
		::RPG::GameCore::RogueSubMode _LastLegacyRogueSubMode_k__BackingField; // 0x68
		::System::UInt32 _TargetRogueMissionID; // 0x6C
		::System::Boolean _HasMissionTrackLogicInit; // 0x70
		::System::Boolean IsBossCaseWolfGun; // 0x71
		::System::Boolean IsServerRoomChanging; // 0x72
		::System::UInt32 _LastTrackMissionID; // 0x74
		::RPG::GameCore::RogueSubMode _LastLegacyRogueDLCSubMode_k__BackingField; // 0x78
		::System::UInt32 _LockedRogueSubModeByInstantKill; // 0x7C
		::System::UInt32 _LastLegacySimulatedRogueAreaID_k__BackingField; // 0x80
		::System::Single _TimeRatio; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueMedalInfo* get_MedalInfo()
		{
			return ((::RPG::Client::RogueMedalInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_MEDALINFO_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCommonRogueQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCommonRogueUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCommonRogueVirtualItemInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCOMMONROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInteractPropScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONINTERACTPROPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnExchangeRogueRewardKeyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONEXCHANGEROGUEREWARDKEYSCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueShopInfo* get_RogueShopInfo()
		{
			return ((::RPG::Client::RogueShopInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ROGUESHOPINFO_OFFSET))(this);
		}

		::System::Void set_RogueShopInfo(::RPG::Client::RogueShopInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueShopInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_ROGUESHOPINFO_OFFSET))(this, a1);
		}

		::System::Void _AddShopPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDSHOPPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetRogueShopMiracleInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPMIRACLEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdBuyRogueShopMiracleScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPMIRACLESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueShopBuffInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPBUFFINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdBuyRogueShopBuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPBUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueShopFormulaInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDGETROGUESHOPFORMULAINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdBuyRogueShopFormulaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDBUYROGUESHOPFORMULASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsMiracleUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISMIRACLEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsShowHandbookHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISSHOWHANDBOOKHINT_OFFSET))(this);
		}

		::System::Boolean get_IsBanAeonUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISBANAEONUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsTournGodModeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISTOURNGODMODEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsRogueFunctionTypeUnlock(::Enum_3_96F6662CA3713095_24 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEFUNCTIONTYPEUNLOCK_OFFSET))(this, a1);
		}

		::System::Void _SyncRogueCommonUnlockInfo(::Class_1_886F39594BD4EAF9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_886F39594BD4EAF9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONUNLOCKINFO_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_839* DequeueRogueActionItem(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_839*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_DEQUEUEROGUEACTIONITEM_OFFSET))(this, a1);
		}

		::System::Void MarkSelectActionActive(::Class_0_16E4307DCC419505_634* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_MARKSELECTACTIONACTIVE_OFFSET))(this, a1);
		}

		::System::Void RemoveTriggeredActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_REMOVETRIGGEREDACTIONID_OFFSET))(this, a1);
		}

		::System::Void InitRogueActionQueue(::Class_1_BDE0598EF34BE45E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_OFFSET))(this, a1);
		}

		::System::Void InitRogueActionQueue_1(::Class_1_14E02E1F6D70E487_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_1_OFFSET))(this, a1);
		}

		::System::Void InitRogueActionQueue_2(::Class_1_C1A562AF201E3725_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_2_OFFSET))(this, a1);
		}

		::System::Void InitRogueActionQueue_3(::Class_1_55B1E96AFC09BA51* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_55B1E96AFC09BA51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_INITROGUEACTIONQUEUE_3_OFFSET))(this, a1);
		}

		::System::Void _InitRogueActionQueue(::System::UInt32 a1, ::Class_1_7BF8FDF00F218876_13* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7BF8FDF00F218876_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__INITROGUEACTIONQUEUE_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActionPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdSyncRogueCommonPendingActionScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONPENDINGACTIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueCommonActionResultScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean _IsModeUsingLegacyActionResultExecutor(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ISMODEUSINGLEGACYACTIONRESULTEXECUTOR_OFFSET))(a1);
		}

		::System::Void _OnCmdHandleRogueCommonPendingActionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPendingSelectAction(::System::UInt32 a1, ::Class_1_7BF8FDF00F218876_13* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7BF8FDF00F218876_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGSELECTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPendingDisplayActions(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_2250AFBBC876BF24_1*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_2250AFBBC876BF24_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPendingDisplayActions_1(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_842*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_842*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDPENDINGDISPLAYACTIONS_1_OFFSET))(this, a1, a2);
		}

		::Class_1_F82FBBCA5464FD05* _GetActionQueue(::System::UInt32 a1)
		{
			return ((::Class_1_F82FBBCA5464FD05*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__GETACTIONQUEUE_OFFSET))(this, a1);
		}

		::System::Void _TriggerAction(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__TRIGGERACTION_OFFSET))(this, a1);
		}

		::System::Boolean _CheckLockByInstantKillToast(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__CHECKLOCKBYINSTANTKILLTOAST_OFFSET))(this, a1);
		}

		::System::Void _OnInstantKillToastLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONINSTANTKILLTOASTLOCK_OFFSET))(this, a1);
		}

		::System::Void SetRogueActionQueueLocked(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SETROGUEACTIONQUEUELOCKED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsRogueActionQueueLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_ISROGUEACTIONQUEUELOCKED_OFFSET))(this, a1);
		}

		::System::Void TriggerRogueSelectActionShow(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRIGGERROGUESELECTACTIONSHOW_OFFSET))(this, a1);
		}

		::System::Boolean TryAddRoomChangeDelayNotify(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYADDROOMCHANGEDELAYNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActionNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDACTIONNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPlayScreenTransfer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _AddRoomChangeDelayNotifyEvent(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDROOMCHANGEDELAYNOTIFYEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessEvents(::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__PROCESSEVENTS_OFFSET))(this, a1);
		}

		::System::Void TryInvokeRogueActionsInLoading(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYINVOKEROGUEACTIONSINLOADING_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIController* TryTakeOverSwitchPage()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYTAKEOVERSWITCHPAGE_OFFSET))(this);
		}

		::System::Void TryStartActionQueue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_TRYSTARTACTIONQUEUE_OFFSET))(this, a1);
		}

		::System::Void _AddWorkBenchPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWORKBENCHPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdRogueWorkbenchGetInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHGETINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRogueWorkbenchHandleFuncScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEWORKBENCHHANDLEFUNCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddGambleFuncPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDGAMBLEFUNCPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdRogueGetGambleInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEGETGAMBLEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRogueDoGambleScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONCMDROGUEDOGAMBLESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncRogueCommonLastAreaInfo(::Class_1_D1E0AD3915BCCF29_111* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_111*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__SYNCROGUECOMMONLASTAREAINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueSubMode get_LastLegacyRogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUESUBMODE_OFFSET))(this);
		}

		::System::Void set_LastLegacyRogueSubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUESUBMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLastLegacyRogueSubModeDLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_ISLASTLEGACYROGUESUBMODEDLC_OFFSET))(this);
		}

		::System::UInt32 get_LastLegacySimulatedRogueAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET))(this);
		}

		::System::Void set_LastLegacySimulatedRogueAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYSIMULATEDROGUEAREAID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueSubMode get_LastLegacyRogueDLCSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_LASTLEGACYROGUEDLCSUBMODE_OFFSET))(this);
		}

		::System::Void set_LastLegacyRogueDLCSubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_LASTLEGACYROGUEDLCSUBMODE_OFFSET))(this, a1);
		}

		::System::Void _TryTrackRogueMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKROGUEMISSION_OFFSET))(this);
		}

		::System::Void _TryTrackLastMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__TRYTRACKLASTMISSION_OFFSET))(this);
		}

		::System::Void _OnEnterRogueTrackMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONENTERROGUETRACKMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnLeaveRogueTrackMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONLEAVEROGUETRACKMISSION_OFFSET))(this, a1);
		}

		::System::Void _AddWolfBroGunPlayPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ADDWOLFBROGUNPLAYPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUIWolfBroShootingRogueBonusTargetKilled(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE__ONUIWOLFBROSHOOTINGROGUEBONUSTARGETKILLED_OFFSET))(this, a1);
		}

		::System::Void UpdateWolfGunInfo(::System::Single a1, ::Class_1_5F7C2EDC42F3AA1C* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_5F7C2EDC42F3AA1C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_UPDATEWOLFGUNINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean ConvertWolfGunTargetInfo(::System::Int32 a1, ::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Proto::RogueAdventureRoomGameplayWolfGunTarget_TargetImplOneofCase&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_CONVERTWOLFGUNTARGETINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetWolfGunData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNDATA_OFFSET))(this, a1);
		}

		::System::Void ResetWolfGunExtraRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_RESETWOLFGUNEXTRAREWARDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_WolfGunExtraRewards()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFGUNEXTRAREWARDS_OFFSET))(this);
		}

		::System::Void set_WolfGunExtraRewards(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_SET_WOLFGUNEXTRAREWARDS_OFFSET))(this, a1);
		}

		::System::Single get_TimeRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_TIMERATIO_OFFSET))(this);
		}

		::System::UInt32 get_WolfShootingSerialNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE_GET_WOLFSHOOTINGSERIALNUMBER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
