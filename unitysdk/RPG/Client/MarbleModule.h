#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_2E87F4599236B73D;
class Class_1_594023CBCBC95203;
class Class_2_FCB9A1A95B2AB574;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client { class MarbleBattleResult; }
namespace RPG::Client { class MarbleBattleSealData; }
namespace RPG::Client { class MarbleHexInfo; }
namespace RPG::Client::ActivityMarble { class IMarblePlayer; }
namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace RPG::Client::ActivityMarble { class MarblePlayerManager; }
namespace RPG::Client::ActivityMarble { class MarblePlayerProgressInfo; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealManager; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace RPG::GameCore { class MarbleEmojiRow; }
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MARBLEMODULE_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xBEFEBD0)
#define RPG_CLIENT_MARBLEMODULE_CHANGEDISPLAYMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0xBEFF450)
#define RPG_CLIENT_MARBLEMODULE_CLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xBEFCCB0)
#define RPG_CLIENT_MARBLEMODULE_DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xBEFEC60)
#define RPG_CLIENT_MARBLEMODULE_DISPOSEPVEGAME_OFFSET UNITYSDK_OFFSET(0xBEFF130)
#define RPG_CLIENT_MARBLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEFE7D0)
#define RPG_CLIENT_MARBLEMODULE_ENTERMARBLEMATCH_OFFSET UNITYSDK_OFFSET(0xBF00040)
#define RPG_CLIENT_MARBLEMODULE_EXITMARBLEMATCH_OFFSET UNITYSDK_OFFSET(0xBF001D0)
#define RPG_CLIENT_MARBLEMODULE_FORCEUNLOADGAMEAREA_OFFSET UNITYSDK_OFFSET(0xBEFEDA0)
#define RPG_CLIENT_MARBLEMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xBEFF310)
#define RPG_CLIENT_MARBLEMODULE_GETALLYBATTLESEALS_OFFSET UNITYSDK_OFFSET(0xBEF2760)
#define RPG_CLIENT_MARBLEMODULE_GETALLYSUBSEALS_OFFSET UNITYSDK_OFFSET(0xBEFC6A0)
#define RPG_CLIENT_MARBLEMODULE_GETALLYTEAMINDEXBYENTITYID_OFFSET UNITYSDK_OFFSET(0xBEF6450)
#define RPG_CLIENT_MARBLEMODULE_GETAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xBEFFBD0)
#define RPG_CLIENT_MARBLEMODULE_GETBALL_OFFSET UNITYSDK_OFFSET(0xBEFA420)
#define RPG_CLIENT_MARBLEMODULE_GETBATTLESEAL_OFFSET UNITYSDK_OFFSET(0xBEF6530)
#define RPG_CLIENT_MARBLEMODULE_GETCURRENTBATTLEHEXINFO_OFFSET UNITYSDK_OFFSET(0xBEFD1A0)
#define RPG_CLIENT_MARBLEMODULE_GETDISPLAYMARBLESEALIDLIST_OFFSET UNITYSDK_OFFSET(0xBEFFAA0)
#define RPG_CLIENT_MARBLEMODULE_GETEARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0xBF015F0)
#define RPG_CLIENT_MARBLEMODULE_GETEMOJIS_OFFSET UNITYSDK_OFFSET(0xBEFD300)
#define RPG_CLIENT_MARBLEMODULE_GETEMOJI_OFFSET UNITYSDK_OFFSET(0xBEFD550)
#define RPG_CLIENT_MARBLEMODULE_GETENEMYBATTLESEALS_OFFSET UNITYSDK_OFFSET(0xBEFCA20)
#define RPG_CLIENT_MARBLEMODULE_GETENEMYSUBSEALS_OFFSET UNITYSDK_OFFSET(0xBEFC780)
#define RPG_CLIENT_MARBLEMODULE_GETENTITYIDBYALLYTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xBEF5F90)
#define RPG_CLIENT_MARBLEMODULE_GETFIRSTALLYBATTLESEAL_OFFSET UNITYSDK_OFFSET(0xBEFC540)
#define RPG_CLIENT_MARBLEMODULE_GETFIRSTENEMYBATTLESEAL_OFFSET UNITYSDK_OFFSET(0xBEFC5F0)
#define RPG_CLIENT_MARBLEMODULE_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xBEF97A0)
#define RPG_CLIENT_MARBLEMODULE_GETISMARBLELIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xBF016B0)
#define RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xBEFF3B0)
#define RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYEARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0xBF01650)
#define RPG_CLIENT_MARBLEMODULE_GETSIMULATINGENTITYID_OFFSET UNITYSDK_OFFSET(0xBEFCAC0)
#define RPG_CLIENT_MARBLEMODULE_GET_ALLYSCORE_OFFSET UNITYSDK_OFFSET(0xBEFD040)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLEGAMEMODE_OFFSET UNITYSDK_OFFSET(0xBEFD230)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLINGALLYPLAYER_OFFSET UNITYSDK_OFFSET(0xBF01F70)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLINGENEMYPLAYER_OFFSET UNITYSDK_OFFSET(0xBF01FD0)
#define RPG_CLIENT_MARBLEMODULE_GET_BATTLINGMATCHINFO_OFFSET UNITYSDK_OFFSET(0xBF01F10)
#define RPG_CLIENT_MARBLEMODULE_GET_COUNTDOWNENDTIME_OFFSET UNITYSDK_OFFSET(0xBEFD210)
#define RPG_CLIENT_MARBLEMODULE_GET_CURLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xBF02030)
#define RPG_CLIENT_MARBLEMODULE_GET_CURMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xBF020C0)
#define RPG_CLIENT_MARBLEMODULE_GET_ENEMYSCORE_OFFSET UNITYSDK_OFFSET(0xBEFD0C0)
#define RPG_CLIENT_MARBLEMODULE_GET_FUNDS_OFFSET UNITYSDK_OFFSET(0xBF020E0)
#define RPG_CLIENT_MARBLEMODULE_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBEFC520)
#define RPG_CLIENT_MARBLEMODULE_GET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0xBF021E0)
#define RPG_CLIENT_MARBLEMODULE_GET_ISCOUNTINGDOWN_OFFSET UNITYSDK_OFFSET(0xBEFD1F0)
#define RPG_CLIENT_MARBLEMODULE_GET_ISCURRENTBATTLEPVP_OFFSET UNITYSDK_OFFSET(0xBEFA480)
#define RPG_CLIENT_MARBLEMODULE_GET_ISINPVEPROGRESS_OFFSET UNITYSDK_OFFSET(0xBF021C0)
#define RPG_CLIENT_MARBLEMODULE_GET_MAINSUBPVPMGR_OFFSET UNITYSDK_OFFSET(0xBF01EF0)
#define RPG_CLIENT_MARBLEMODULE_GET_MARBLESEALMGR_OFFSET UNITYSDK_OFFSET(0xBF01E90)
#define RPG_CLIENT_MARBLEMODULE_GET_PLAYERMANAGER_OFFSET UNITYSDK_OFFSET(0xBF01EB0)
#define RPG_CLIENT_MARBLEMODULE_GET_PROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xBF01E80)
#define RPG_CLIENT_MARBLEMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xBF01ED0)
#define RPG_CLIENT_MARBLEMODULE_GET_WINNINGSCORELINE_OFFSET UNITYSDK_OFFSET(0xBEFD250)
#define RPG_CLIENT_MARBLEMODULE_GET__FUNDSITEMID_OFFSET UNITYSDK_OFFSET(0xBEFE6F0)
#define RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMAINPAGE_OFFSET UNITYSDK_OFFSET(0xBEF1940)
#define RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0xBF01510)
#define RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERPAGE_OFFSET UNITYSDK_OFFSET(0xBEF1AA0)
#define RPG_CLIENT_MARBLEMODULE_HIDEGAMEAREA_OFFSET UNITYSDK_OFFSET(0xBEFEE60)
#define RPG_CLIENT_MARBLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBEFE430)
#define RPG_CLIENT_MARBLEMODULE_ISENEMY_OFFSET UNITYSDK_OFFSET(0xBEF4DF0)
#define RPG_CLIENT_MARBLEMODULE_ISINENEMYPHASE_OFFSET UNITYSDK_OFFSET(0xBEFB000)
#define RPG_CLIENT_MARBLEMODULE_ISINGAMEAREA_OFFSET UNITYSDK_OFFSET(0xBF01440)
#define RPG_CLIENT_MARBLEMODULE_ISINPVEGAME_OFFSET UNITYSDK_OFFSET(0xBEFF2B0)
#define RPG_CLIENT_MARBLEMODULE_ISNEXTROUNDENEMY_OFFSET UNITYSDK_OFFSET(0xBEFCB10)
#define RPG_CLIENT_MARBLEMODULE_ISUSEMULTIPLAYGROUPID_OFFSET UNITYSDK_OFFSET(0xBEFFD50)
#define RPG_CLIENT_MARBLEMODULE_LOADGAMEAREA_OFFSET UNITYSDK_OFFSET(0xBEFECE0)
#define RPG_CLIENT_MARBLEMODULE_ONBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0xBEFD140)
#define RPG_CLIENT_MARBLEMODULE_ONENTERMARBLEBATTLE_OFFSET UNITYSDK_OFFSET(0xBF01140)
#define RPG_CLIENT_MARBLEMODULE_ONEXITMARBLEBATTLE_OFFSET UNITYSDK_OFFSET(0xBF01260)
#define RPG_CLIENT_MARBLEMODULE_ONGAMEAREASTREAMINGFINISH_OFFSET UNITYSDK_OFFSET(0xBEFEF50)
#define RPG_CLIENT_MARBLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBEFE8D0)
#define RPG_CLIENT_MARBLEMODULE_ONTECHUICLOSE_OFFSET UNITYSDK_OFFSET(0xBF002A0)
#define RPG_CLIENT_MARBLEMODULE_RANDOMLAUNCH_OFFSET UNITYSDK_OFFSET(0xBF010F0)
#define RPG_CLIENT_MARBLEMODULE_REMOVEGAMEAREAUSAGE_OFFSET UNITYSDK_OFFSET(0xBEFED50)
#define RPG_CLIENT_MARBLEMODULE_RESUMEGAMEAREA_OFFSET UNITYSDK_OFFSET(0xBEFEEF0)
#define RPG_CLIENT_MARBLEMODULE_RESUMEPVEGAME_OFFSET UNITYSDK_OFFSET(0xBEFF1B0)
#define RPG_CLIENT_MARBLEMODULE_SAVEPVEGAME_OFFSET UNITYSDK_OFFSET(0xBEFEAA0)
#define RPG_CLIENT_MARBLEMODULE_SENDEMOJI_OFFSET UNITYSDK_OFFSET(0xBEFD5C0)
#define RPG_CLIENT_MARBLEMODULE_SETALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0xBF01380)
#define RPG_CLIENT_MARBLEMODULE_SETDYNAMICFLOATINGPARAMID_OFFSET UNITYSDK_OFFSET(0xBEFF0D0)
#define RPG_CLIENT_MARBLEMODULE_SETISINPVE_OFFSET UNITYSDK_OFFSET(0xBF01330)
#define RPG_CLIENT_MARBLEMODULE_SETMARBLELIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xBF01870)
#define RPG_CLIENT_MARBLEMODULE_SETMARBLEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xBEFEA50)
#define RPG_CLIENT_MARBLEMODULE_SETWATERSURFACE_OFFSET UNITYSDK_OFFSET(0xBEFEFB0)
#define RPG_CLIENT_MARBLEMODULE_SETWAVEENABLE_OFFSET UNITYSDK_OFFSET(0xBF014B0)
#define RPG_CLIENT_MARBLEMODULE_SET_COUNTDOWNENDTIME_OFFSET UNITYSDK_OFFSET(0xBEFD220)
#define RPG_CLIENT_MARBLEMODULE_SET_CURMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xBF020D0)
#define RPG_CLIENT_MARBLEMODULE_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBEFC530)
#define RPG_CLIENT_MARBLEMODULE_SET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0xBF013F0)
#define RPG_CLIENT_MARBLEMODULE_SET_ISCOUNTINGDOWN_OFFSET UNITYSDK_OFFSET(0xBEFD200)
#define RPG_CLIENT_MARBLEMODULE_SET_ISINPVEPROGRESS_OFFSET UNITYSDK_OFFSET(0xBF021D0)
#define RPG_CLIENT_MARBLEMODULE_SET_MAINSUBPVPMGR_OFFSET UNITYSDK_OFFSET(0xBF01F00)
#define RPG_CLIENT_MARBLEMODULE_SET_MARBLESEALMGR_OFFSET UNITYSDK_OFFSET(0xBF01EA0)
#define RPG_CLIENT_MARBLEMODULE_SET_PLAYERMANAGER_OFFSET UNITYSDK_OFFSET(0xBF01EC0)
#define RPG_CLIENT_MARBLEMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xBF01EE0)
#define RPG_CLIENT_MARBLEMODULE_SHOWBATTLESCORERESULT_OFFSET UNITYSDK_OFFSET(0xBEFCD00)
#define RPG_CLIENT_MARBLEMODULE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xBEFCC40)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_1_OFFSET UNITYSDK_OFFSET(0xBF00730)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_2_OFFSET UNITYSDK_OFFSET(0xBF00DB0)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_OFFSET UNITYSDK_OFFSET(0xBF00330)
#define RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVPGAME_OFFSET UNITYSDK_OFFSET(0xBF00A70)
#define RPG_CLIENT_MARBLEMODULE_TRIGGERADVENTUREMARBLEGROUPCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xBEFFEA0)
#define RPG_CLIENT_MARBLEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBF01CA0)
#define RPG_CLIENT_MARBLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBEFD620)
#define RPG_CLIENT_MARBLEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF02290)
#define RPG_CLIENT_MARBLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBF021F0)
#define RPG_CLIENT_MARBLEMODULE__ENTITYIDS2BATTLESEALS_OFFSET UNITYSDK_OFFSET(0xBEFC860)
#define RPG_CLIENT_MARBLEMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xBF01B00)
#define RPG_CLIENT_MARBLEMODULE__GETPVPMGR_OFFSET UNITYSDK_OFFSET(0xBEFE240)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMAINPAGE_B__93_0_OFFSET UNITYSDK_OFFSET(0xBF02400)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_0_OFFSET UNITYSDK_OFFSET(0xBF02AC0)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_1_OFFSET UNITYSDK_OFFSET(0xBF02B50)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_2_OFFSET UNITYSDK_OFFSET(0xBF02DD0)
#define RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERPAGE_B__94_0_OFFSET UNITYSDK_OFFSET(0xBF02760)
#define RPG_CLIENT_MARBLEMODULE__INIT_B__54_0_OFFSET UNITYSDK_OFFSET(0xBF022D0)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xBEFDAA0)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEPVPDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBEFDDC0)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLESHOPBUYSCRSP_OFFSET UNITYSDK_OFFSET(0xBEFDCD0)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEUNLOCKSEALSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBEFDC50)
#define RPG_CLIENT_MARBLEMODULE__ONMARBLEUPDATESHOWNSEALSCRSP_OFFSET UNITYSDK_OFFSET(0xBEFDD50)
#define RPG_CLIENT_MARBLEMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xBF018D0)
#define RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xBEFDE90)
#define RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBEFE2A0)
#define RPG_CLIENT_MARBLEMODULE__ONSTARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xBEFCB80)
#define RPG_CLIENT_MARBLEMODULE__REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xBF01A00)
#define RPG_CLIENT_MARBLEMODULE__RESUMEPVEGAME_B__69_0_OFFSET UNITYSDK_OFFSET(0xBF023B0)
#define RPG_CLIENT_MARBLEMODULE__UPDATEDISPLAYMARBLESEALIDS_OFFSET UNITYSDK_OFFSET(0xBEFDB90)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF03020)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBF02FA0)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBF03030)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBF03090)
#define RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBF02F40)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleModule_TypeDefinitionIndex = 61523;

	class MarbleModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::String** StaticGet_ICE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule_TypeDefinitionIndex)->GetStaticField(0x54630);
		}
		static ::System::String** StaticGet_BLOCK_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule_TypeDefinitionIndex)->GetStaticField(0x54638);
		}
		static ::System::String** StaticGet_WATER_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule_TypeDefinitionIndex)->GetStaticField(0x54640);
		}
		// static const ::System::Int32 RESIDENT_ACTIVITY_ID = 0xC36D; // 0x0
		// static const ::System::Int32 MULTIPLAY_ACTIVITY_ID = 0xC393; // 0x0
		// static const ::System::Int32 OFFERING_ID = 0x7; // 0x0
		::RPG::Client::ActivityMarble::MarblePVPManager* _PVPMgr_k__BackingField; // 0x10
		::RPG::Client::ActivityMarble::MarbleSealManager* _MarbleSealMgr_k__BackingField; // 0x18
		::RPG::Client::ActivityMarble::MarbleMatchContext* _CurMatchContext_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayMarbleSealIDs; // 0x28
		::Class_1_594023CBCBC95203* BattleData; // 0x30
		::RPG::Client::ActivityMarble::MarblePlayerManager* _PlayerManager_k__BackingField; // 0x38
		::Class_2_FCB9A1A95B2AB574* _GameInstance_k__BackingField; // 0x40
		::Class_1_2E87F4599236B73D* _GameArea; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MarbleBattleSealData*>* AllSealData; // 0x50
		::RPG::Client::ItemData* CoinItemData; // 0x58
		::RPG::Client::ActivityMarble::MarblePVPManager* _MainSubPVPMgr_k__BackingField; // 0x60
		::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* _ProgressInfo; // 0x68
		::System::Boolean _IsCountingDown_k__BackingField; // 0x70
		::System::Boolean _IsInPVEProgress_k__BackingField; // 0x71
		::System::Nullable_1<::System::Boolean> _IsMarbleLimitRewardSeen; // 0x72
		::System::Single _CountDownEndTime_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__CCTOR_OFFSET))();
		}

		::Class_2_FCB9A1A95B2AB574* get_GameInstance()
		{
			return ((::Class_2_FCB9A1A95B2AB574*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_GAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameInstance(::Class_2_FCB9A1A95B2AB574* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FCB9A1A95B2AB574*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_GAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::Int32 GetAllyTeamIndexByEntityID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETALLYTEAMINDEXBYENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 GetEntityIDByAllyTeamIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETENTITYIDBYALLYTEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBattleSealData* GetBattleSeal(::System::UInt32 a1)
		{
			return ((::RPG::Client::MarbleBattleSealData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETBATTLESEAL_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBattleSealData* GetFirstAllyBattleSeal()
		{
			return ((::RPG::Client::MarbleBattleSealData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETFIRSTALLYBATTLESEAL_OFFSET))(this);
		}

		::RPG::Client::MarbleBattleSealData* GetFirstEnemyBattleSeal()
		{
			return ((::RPG::Client::MarbleBattleSealData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETFIRSTENEMYBATTLESEAL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllySubSeals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETALLYSUBSEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEnemySubSeals()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETENEMYSUBSEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>* GetAllyBattleSeals()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETALLYBATTLESEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>* GetEnemyBattleSeals()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETENEMYBATTLESEALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>* _EntityIds2BattleSeals(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleBattleSealData*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ENTITYIDS2BATTLESEALS_OFFSET))(this, a1);
		}

		::System::Boolean IsEnemy(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISENEMY_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetGameObject(::System::UInt32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean IsInEnemyPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISINENEMYPHASE_OFFSET))(this);
		}

		::System::UInt32 GetSimulatingEntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETSIMULATINGENTITYID_OFFSET))(this);
		}

		::System::Boolean IsNextRoundEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISNEXTROUNDENEMY_OFFSET))(this);
		}

		::System::Void _OnStartCountDown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONSTARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void StartCountDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void ClearCountDown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_CLEARCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void ShowBattleScoreResult(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SHOWBATTLESCORERESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBattleFinished(::RPG::Client::MarbleBattleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MarbleBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONBATTLEFINISHED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleHexInfo*>* GetCurrentBattleHexInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleHexInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETCURRENTBATTLEHEXINFO_OFFSET))(this);
		}

		::System::Boolean get_IsCountingDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISCOUNTINGDOWN_OFFSET))(this);
		}

		::System::Void set_IsCountingDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_ISCOUNTINGDOWN_OFFSET))(this, a1);
		}

		::System::Single get_CountDownEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_COUNTDOWNENDTIME_OFFSET))(this);
		}

		::System::Void set_CountDownEndTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_COUNTDOWNENDTIME_OFFSET))(this, a1);
		}

		::Enum_3_A35B38E5F9115A76_2 get_BattleGameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLEGAMEMODE_OFFSET))(this);
		}

		::System::UInt32 get_AllyScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ALLYSCORE_OFFSET))(this);
		}

		::System::UInt32 get_EnemyScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ENEMYSCORE_OFFSET))(this);
		}

		::System::UInt32 get_WinningScoreLine()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_WINNINGSCORELINE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MarbleEmojiRow*>* GetEmojis(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MarbleEmojiRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETEMOJIS_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleEmojiRow* GetEmoji(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleEmojiRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETEMOJI_OFFSET))(this, a1);
		}

		::System::Void SendEmoji(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SENDEMOJI_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMarbleGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMarbleUnlockSealScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEUNLOCKSEALSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMarbleShopBuyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLESHOPBUYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMarbleUpdateShownSealScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEUPDATESHOWNSEALSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMarblePvpDataUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMARBLEPVPDATAUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMultiplayerGetMatchPlayDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMultiplayerMatchPlayDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void ActiveCamera(::RPG::GameCore::LevelAreaManager* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ACTIVECAMERA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DeactiveCamera(::RPG::GameCore::LevelAreaManager* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_DEACTIVECAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadGameArea(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_LOADGAMEAREA_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveGameAreaUsage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_REMOVEGAMEAREAUSAGE_OFFSET))(this);
		}

		::System::Void ForceUnloadGameArea(::System::Action* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_FORCEUNLOADGAMEAREA_OFFSET))(this, a1, a2);
		}

		::System::Void HideGameArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_HIDEGAMEAREA_OFFSET))(this);
		}

		::System::Void ResumeGameArea(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_RESUMEGAMEAREA_OFFSET))(this, a1);
		}

		::System::Void OnGameAreaStreamingFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONGAMEAREASTREAMINGFINISH_OFFSET))(this);
		}

		::System::Void SetWaterSurface(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETWATERSURFACE_OFFSET))(this, a1);
		}

		::System::Void SetDynamicFloatingParamID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETDYNAMICFLOATINGPARAMID_OFFSET))(this, a1);
		}

		::System::Void DisposePVEGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_DISPOSEPVEGAME_OFFSET))(this);
		}

		::System::Void SavePVEGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SAVEPVEGAME_OFFSET))(this);
		}

		::System::Void ResumePVEGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_RESUMEPVEGAME_OFFSET))(this);
		}

		::System::Boolean IsInPVEGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISINPVEGAME_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetMultiplayActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYACTIVITYDATA_OFFSET))(this);
		}

		::System::Void ChangeDisplayMarbleSealList(::System::Collections::Generic::IList_1<::RPG::Client::ActivityMarble::MarbleSealData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::ActivityMarble::MarbleSealData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_CHANGEDISPLAYMARBLESEALLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayMarbleSealIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETDISPLAYMARBLESEALIDLIST_OFFSET))(this);
		}

		::RPG::Client::MarbleBall* GetBall(::System::UInt32 a1)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETBALL_OFFSET))(this, a1);
		}

		::System::Void SetMarbleMatchContext(::RPG::Client::ActivityMarble::MarbleMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETMARBLEMATCHCONTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 GetAreaGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETAREAGROUPID_OFFSET))(this);
		}

		::System::Void TriggerAdventureMarbleGroupCustomEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_TRIGGERADVENTUREMARBLEGROUPCUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void EnterMarbleMatch(::RPG::Client::ActivityMarble::MarbleMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ENTERMARBLEMATCH_OFFSET))(this, a1);
		}

		::System::Void ExitMarbleMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_EXITMARBLEMATCH_OFFSET))(this);
		}

		::System::Void OnTechUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONTECHUICLOSE_OFFSET))(this);
		}

		::System::Void StartMarblePveGame(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a1, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection* a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartMarblePveGame_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartMarblePvpGame(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVPGAME_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartMarblePveGame_2(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_STARTMARBLEPVEGAME_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RandomLaunch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_RANDOMLAUNCH_OFFSET))(this);
		}

		::System::Void OnEnterMarbleBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONENTERMARBLEBATTLE_OFFSET))(this);
		}

		::System::Void OnExitMarbleBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ONEXITMARBLEBATTLE_OFFSET))(this);
		}

		::System::Void SetIsInPVE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETISINPVE_OFFSET))(this, a1);
		}

		::System::Void SetAllowPVPInvitation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETALLOWPVPINVITATION_OFFSET))(this, a1);
		}

		::System::Boolean IsInGameArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISINGAMEAREA_OFFSET))(this);
		}

		::System::Void SetWaveEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETWAVEENABLE_OFFSET))(this, a1);
		}

		::System::Void GotoActivityMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMAINPAGE_OFFSET))(this);
		}

		::System::Void GotoActivityMultiPlayerPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERPAGE_OFFSET))(this);
		}

		::System::Void GotoActivityMultiPlayerFreeMatchPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_OFFSET))(this);
		}

		::System::UInt32 GetEarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETEARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::UInt32 GetMultiplayEarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETMULTIPLAYEARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::Boolean GetIsMarbleLimitRewardSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GETISMARBLELIMITREWARDSEEN_OFFSET))(this);
		}

		::System::Void SetMarbleLimitRewardSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SETMARBLELIMITREWARDSEEN_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _RequestMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__REQUESTMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Void _UpdateDisplayMarbleSealIDs(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__UPDATEDISPLAYMARBLESEALIDS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* _GetPvpMgr(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GETPVPMGR_OFFSET))(this, a1);
		}

		::System::Boolean IsUseMultiplayGroupID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_ISUSEMULTIPLAYGROUPID_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* get_ProgressInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_PROGRESSINFO_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleSealManager* get_MarbleSealMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_MARBLESEALMGR_OFFSET))(this);
		}

		::System::Void set_MarbleSealMgr(::RPG::Client::ActivityMarble::MarbleSealManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_MARBLESEALMGR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePlayerManager* get_PlayerManager()
		{
			return ((::RPG::Client::ActivityMarble::MarblePlayerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_PLAYERMANAGER_OFFSET))(this);
		}

		::System::Void set_PlayerManager(::RPG::Client::ActivityMarble::MarblePlayerManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_PLAYERMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::RPG::Client::ActivityMarble::MarblePVPManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_PVPMGR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* get_MainSubPVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_MAINSUBPVPMGR_OFFSET))(this);
		}

		::System::Void set_MainSubPVPMgr(::RPG::Client::ActivityMarble::MarblePVPManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_MAINSUBPVPMGR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurrentBattlePVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISCURRENTBATTLEPVP_OFFSET))(this);
		}

		::RPG::GameCore::MarbleMatchInfoConfigRow* get_BattlingMatchInfo()
		{
			return ((::RPG::GameCore::MarbleMatchInfoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLINGMATCHINFO_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_BattlingAllyPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLINGALLYPLAYER_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::IMarblePlayer* get_BattlingEnemyPlayer()
		{
			return ((::RPG::Client::ActivityMarble::IMarblePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_BATTLINGENEMYPLAYER_OFFSET))(this);
		}

		::RPG::GameCore::MarbleMatchLevelConfigRow* get_CurLevelConfig()
		{
			return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_CURLEVELCONFIG_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleMatchContext* get_CurMatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarbleMatchContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_CURMATCHCONTEXT_OFFSET))(this);
		}

		::System::Void set_CurMatchContext(::RPG::Client::ActivityMarble::MarbleMatchContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleMatchContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_CURMATCHCONTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Funds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_FUNDS_OFFSET))(this);
		}

		::System::Boolean get_IsInPVEProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISINPVEPROGRESS_OFFSET))(this);
		}

		::System::Void set_IsInPVEProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_ISINPVEPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllowPVPInvitation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET_ISALLOWPVPINVITATION_OFFSET))(this);
		}

		::System::Void set_IsAllowPVPInvitation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_SET_ISALLOWPVPINVITATION_OFFSET))(this, a1);
		}

		::System::UInt32 get__FundsItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE_GET__FUNDSITEMID_OFFSET))(this);
		}

		::System::Void _Init_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__INIT_B__54_0_OFFSET))(this);
		}

		::System::Void _ResumePVEGame_b__69_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__RESUMEPVEGAME_B__69_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMainPage_b__93_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMAINPAGE_B__93_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerPage_b__94_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERPAGE_B__94_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__95_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_0_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__95_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_1_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__95_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_2_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
