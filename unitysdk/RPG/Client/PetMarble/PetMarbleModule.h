#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleGameAreaUsage.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"

class Class_1_0C90FE201D14CC5D;
class Class_1_4AF717D30078CC7E_1;
class Class_1_75A691106ED441FB;
class Class_1_D55C9EF3F758FF20_6;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::ActivityMarble { class IMarbleManager; }
namespace RPG::Client::ActivityMarble { class MarbleCoopBossPVPManager; }
namespace RPG::Client::PetMarble { class IPetMarbleData; }
namespace RPG::Client::PetMarble { class PetMarbleManager; }
namespace RPG::Client::PetMarble { class PetMarbleTeamEditController; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelMode; }
namespace RPG::Client::PetMarble::Level { class IPetMarbleLevelModeRepository; }
namespace RPG::Client::PetMarble::Level { class PetMarbleLevelModeRepository; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xDAD60D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_DEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xDAD6160)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAE1B60)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_EXITMARBLEMATCH_OFFSET UNITYSDK_OFFSET(0xDAE2D90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_FORCEUNLOADGAMEAREA_OFFSET UNITYSDK_OFFSET(0xDAE2640)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETAREAGROUPID_OFFSET UNITYSDK_OFFSET(0xDAD61E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETBALL_OFFSET UNITYSDK_OFFSET(0xDAE2AA0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETLEVELMODE_OFFSET UNITYSDK_OFFSET(0xDADF400)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETPETMARBLEARCHIVEINITLIST_OFFSET UNITYSDK_OFFSET(0xDADBE70)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_ISOWNMASTERTITLE_OFFSET UNITYSDK_OFFSET(0xDAE69A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_ISTUTORIALLEVELFINISHED_OFFSET UNITYSDK_OFFSET(0xDAE6B00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_LEVELMODES_OFFSET UNITYSDK_OFFSET(0xDADBE30)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_PETMARBLEMGR_OFFSET UNITYSDK_OFFSET(0xDAE6AA0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xDAE0DD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_HASPETMARBLEREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xDAE2710)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_HASSEENPETMARBLEARCHIVE_OFFSET UNITYSDK_OFFSET(0xDAE29E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_HASSEENPETMARBLERESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xDAE2920)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDAE18A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ISINGAMEAREA_OFFSET UNITYSDK_OFFSET(0xDAE25C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_LOADGAMEAREA_OFFSET UNITYSDK_OFFSET(0xDAE24B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ONOPENBATTLEPAGE_OFFSET UNITYSDK_OFFSET(0xDAE31A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xDAE1CF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_OPENCHOOSEPETPAGE_OFFSET UNITYSDK_OFFSET(0xDAE2210)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_REFRESHTIMELIMITEDTRIALPETMARBLES_OFFSET UNITYSDK_OFFSET(0xDAE2E80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_REMOVEGAMEAREAUSAGE_OFFSET UNITYSDK_OFFSET(0xDAE11D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_RPG_CLIENT_IMARBLECOOPBOSSCLIENTAPI_GET_PETMARBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xDAE6AC0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_SETSEENPETMARBLEARCHIVE_OFFSET UNITYSDK_OFFSET(0xDAE2A40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_SETSEENPETMARBLERESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xDAE2980)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_SET_PETMARBLEMGR_OFFSET UNITYSDK_OFFSET(0xDAE6AB0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_STARTMARBLECOOPBOSSGAME_OFFSET UNITYSDK_OFFSET(0xDAE3410)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_STARTMARBLECOOPBOSSPVEGAME_OFFSET UNITYSDK_OFFSET(0xDAE3EE0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_TRYSTARTTUTORIALLEVEL_OFFSET UNITYSDK_OFFSET(0xDAE51C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xDAE20B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xDAE1D60)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__CREATELAUNCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xDAE3C50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE1880)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ENSUREPVEMATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xDAE4AC0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__INITLEVELMODES_OFFSET UNITYSDK_OFFSET(0xDAE1A30)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEGETCYCLETRIALPETSSCRSP_OFFSET UNITYSDK_OFFSET(0xDAE64A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xDAE54A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLELEVELBEGINSCRSP_OFFSET UNITYSDK_OFFSET(0xDAE63A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLELEVELENDSCRSP_OFFSET UNITYSDK_OFFSET(0xDAE6450)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEPVELEVELBEGINSTAT_OFFSET UNITYSDK_OFFSET(0xDAE6560)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEPVELEVELENDSTAT_OFFSET UNITYSDK_OFFSET(0xDAE68A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLESYNCDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xDAE6310)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__RESOLVEPVEENEMYID_OFFSET UNITYSDK_OFFSET(0xDAE47B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__STARTMARBLECOOPBOSSPVEGAME_OFFSET UNITYSDK_OFFSET(0xDAE4D20)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__SYNCLEVELMODES_OFFSET UNITYSDK_OFFSET(0xDAE5540)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleModule_TypeDefinitionIndex = 74719;

	class PetMarbleModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PetMarble::PetMarbleManager* _PetMarbleMgr_k__BackingField; // 0x10
		::RPG::Client::PetMarble::Level::PetMarbleLevelModeRepository* _LevelModes; // 0x18
		::RPG::Client::Promises::Promise* _RefreshTimeLimitedTrialPetMarblesPromise; // 0x20
		::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager* _CoopBossPVPMgr; // 0x28
		::Class_1_0C90FE201D14CC5D* _GameArea; // 0x30
		::RPG::Client::Promises::Promise_1<::System::String*>* _PveLevelBeginReqPromise; // 0x38
		::System::UInt64 _NextTrialRefreshTime; // 0x40
		::System::Boolean _IsTutorialLevelFinished; // 0x48
		::RPG::Client::PetMarble::PetMarbleGameAreaUsage _GameAreaUsage; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void ActiveCamera(::RPG::GameCore::LevelAreaManager* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ACTIVECAMERA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DeactiveCamera(::RPG::GameCore::LevelAreaManager* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_DEACTIVECAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OpenChoosePetPage(::RPG::Client::PetMarble::PetMarbleTeamEditController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleTeamEditController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_OPENCHOOSEPETPAGE_OFFSET))(this, a1);
		}

		::System::Void LoadGameArea(::RPG::Client::PetMarble::PetMarbleGameAreaUsage a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleGameAreaUsage, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_LOADGAMEAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveGameAreaUsage(::RPG::Client::PetMarble::PetMarbleGameAreaUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleGameAreaUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_REMOVEGAMEAREAUSAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsInGameArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ISINGAMEAREA_OFFSET))(this);
		}

		::System::Void ForceUnloadGameArea(::System::Action* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_FORCEUNLOADGAMEAREA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetAreaGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETAREAGROUPID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetMarble::IPetMarbleData*>* GetPetMarbleArchiveInitList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetMarble::IPetMarbleData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETPETMARBLEARCHIVEINITLIST_OFFSET))(this, a1);
		}

		::System::Boolean HasPetMarbleRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_HASPETMARBLEREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasSeenPetMarbleResidentReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_HASSEENPETMARBLERESIDENTREWARD_OFFSET))(this);
		}

		::System::Void SetSeenPetMarbleResidentReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_SETSEENPETMARBLERESIDENTREWARD_OFFSET))(this);
		}

		::System::Boolean HasSeenPetMarbleArchive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_HASSEENPETMARBLEARCHIVE_OFFSET))(this);
		}

		::System::Void SetSeenPetMarbleArchive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_SETSEENPETMARBLEARCHIVE_OFFSET))(this);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelMode* GetLevelMode(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelMode*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETLEVELMODE_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleBall* GetBall(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MarbleBall*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GETBALL_OFFSET))(this, a1, a2);
		}

		::System::Void ExitMarbleMatch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_EXITMARBLEMATCH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* RefreshTimeLimitedTrialPetMarbles()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_REFRESHTIMELIMITEDTRIALPETMARBLES_OFFSET))(this);
		}

		::System::Void OnOpenBattlePage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_ONOPENBATTLEPAGE_OFFSET))(this, a1);
		}

		::System::Void StartMarbleCoopBossGame(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_STARTMARBLECOOPBOSSGAME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean StartMarbleCoopBossPveGame(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::RPG::GameCore::PetMarbleLevelMode a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_STARTMARBLECOOPBOSSPVEGAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean TryStartTutorialLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_TRYSTARTTUTORIALLEVEL_OFFSET))(this);
		}

		static ::System::UInt32 _ResolvePveEnemyId(::RPG::GameCore::PetMarbleLevelMode a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__RESOLVEPVEENEMYID_OFFSET))(a1);
		}

		::System::Void _StartMarbleCoopBossPveGame(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6, ::RPG::GameCore::PetMarbleLevelMode a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__STARTMARBLECOOPBOSSPVEGAME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::Class_1_75A691106ED441FB* _CreateLaunchContext(::Class_1_4AF717D30078CC7E_1* a1, ::RPG::GameCore::PetMarbleLevelMode a2)
		{
			return ((::Class_1_75A691106ED441FB*(*)(::Class_1_4AF717D30078CC7E_1*, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__CREATELAUNCHCONTEXT_OFFSET))(a1, a2);
		}

		static ::System::Void _EnsurePveMatchContext(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5, ::RPG::GameCore::PetMarbleLevelMode a6)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ENSUREPVEMATCHCONTEXT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void _OnPetMarbleGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetMarbleSyncDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLESYNCDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetMarbleLevelBeginScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLELEVELBEGINSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetMarbleLevelEndScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLELEVELENDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetMarbleGetCycleTrialPetsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEGETCYCLETRIALPETSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetMarblePveLevelBeginStat(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEPVELEVELBEGINSTAT_OFFSET))(this, a1);
		}

		::System::Void _OnPetMarblePveLevelEndStat(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__ONPETMARBLEPVELEVELENDSTAT_OFFSET))(this, a1);
		}

		::System::Void _InitLevelModes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__INITLEVELMODES_OFFSET))(this);
		}

		::System::Void _SyncLevelModes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D55C9EF3F758FF20_6*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D55C9EF3F758FF20_6*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE__SYNCLEVELMODES_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PetMarble::Level::IPetMarbleLevelModeRepository* get_LevelModes()
		{
			return ((::RPG::Client::PetMarble::Level::IPetMarbleLevelModeRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_LEVELMODES_OFFSET))(this);
		}

		::System::Boolean get_IsOwnMasterTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_ISOWNMASTERTITLE_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarbleManager* get_PetMarbleMgr()
		{
			return ((::RPG::Client::PetMarble::PetMarbleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_PETMARBLEMGR_OFFSET))(this);
		}

		::System::Void set_PetMarbleMgr(::RPG::Client::PetMarble::PetMarbleManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_SET_PETMARBLEMGR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleManager* RPG_Client_IMarbleCoopBossClientApi_get_PetMarbleManager()
		{
			return ((::RPG::Client::ActivityMarble::IMarbleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_RPG_CLIENT_IMARBLECOOPBOSSCLIENTAPI_GET_PETMARBLEMANAGER_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Boolean get_IsTutorialLevelFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE_GET_ISTUTORIALLEVELFINISHED_OFFSET))(this);
		}
	};
}
