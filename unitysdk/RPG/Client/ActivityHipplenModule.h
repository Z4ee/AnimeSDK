#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenCollectData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMainController; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenOutfitData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_CLEARCURNEWTRAITNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9B16040)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_CLEARGUIDENEWTRAITNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9B16140)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B15710)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9B16E40)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETALLENDINGCANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x9B16240)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENBODYOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x9AF2480)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENITEMOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x9AF24D0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENNEWOUTFITTYPE_OFFSET UNITYSDK_OFFSET(0x9B167B0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENSCALE_OFFSET UNITYSDK_OFFSET(0x9AF2320)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETISHIPPLENLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x9B16C20)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETMAINCTRL_OFFSET UNITYSDK_OFFSET(0x9AEDBA0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_ACTIVITYUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B174F0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x9B17550)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B17530)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x9B17510)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_OUTFITDATA_OFFSET UNITYSDK_OFFSET(0x9B17570)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9B15530)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_ISINGAME_OFFSET UNITYSDK_OFFSET(0x9B14260)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9B157A0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_OPENNEWGAMECYCLE_OFFSET UNITYSDK_OFFSET(0x9B15F90)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_RELEASEMAINCTRL_OFFSET UNITYSDK_OFFSET(0x9B158C0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_REQUIREMAINCTRL_OFFSET UNITYSDK_OFFSET(0x9B15810)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SETHIPPLENLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x9B16DE0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SETHIPPLENOUTFIT_OFFSET UNITYSDK_OFFSET(0x9B164D0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_ACTIVITYUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B17500)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x9B17560)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B17540)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x9B17520)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_OUTFITDATA_OFFSET UNITYSDK_OFFSET(0x9B17580)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TAKEENDINGREWARD_OFFSET UNITYSDK_OFFSET(0x9B16420)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYDISPOSEGAME_OFFSET UNITYSDK_OFFSET(0x9B15F20)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYEXITGAME_OFFSET UNITYSDK_OFFSET(0x9B15BA0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYSTARTGAME_OFFSET UNITYSDK_OFFSET(0x9B15960)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B16EE0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B13000)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B154E0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__DISPOSEGAME_OFFSET UNITYSDK_OFFSET(0x9B13460)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__GETORCREATEGAME_OFFSET UNITYSDK_OFFSET(0x9B133D0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9B13290)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENINHERITSCRSP_OFFSET UNITYSDK_OFFSET(0x9B14930)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENAGENDARESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B13CE0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B150E0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCYCLERESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B13FB0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCCREATED_OFFSET UNITYSDK_OFFSET(0x9B170A0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCUNLOADED_OFFSET UNITYSDK_OFFSET(0x9B17480)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENTRAITUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B142B0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0x9B16F90)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONOPENHIPPLENCYCLESCRSP_OFFSET UNITYSDK_OFFSET(0x9B14890)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENAGENDASCRSP_OFFSET UNITYSDK_OFFSET(0x9B13800)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENOUTFITSCRSP_OFFSET UNITYSDK_OFFSET(0x9B15010)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETTLEHIPPLENWORKSCRSP_OFFSET UNITYSDK_OFFSET(0x9B138E0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONTAKEHIPPLENENDINGREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9B14EE0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__REFRESHOUTFITS_OFFSET UNITYSDK_OFFSET(0x9B134C0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_0_OFFSET UNITYSDK_OFFSET(0x9B17590)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_1_OFFSET UNITYSDK_OFFSET(0x9B177D0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B178F0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9B17860)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9B17900)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B17960)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B17800)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenModule_TypeDefinitionIndex = 56741;

	class ActivityHipplenModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Int32 RESIDENT_ACTIVITY_ID = 0xC38F; // 0x0
		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* _MainCtrl; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenCollectData* _CollectData_k__BackingField; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* _CurrentGame_k__BackingField; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData* _OutfitData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HipplenMiniNpcList; // 0x30
		::System::UInt32 _CycleID_k__BackingField; // 0x38
		::System::Nullable_1<::System::Boolean> _IsHipplenLimitRewardSeen; // 0x3C
		::System::Boolean _IsDataInited; // 0x3E
		::System::Boolean _ActivityUnlock_k__BackingField; // 0x3F
		::System::Boolean _IsPendingStartGame; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetHipplenDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetHipplenAgendaScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENAGENDASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSettleHipplenWorkScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETTLEHIPPLENWORKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnHipplenAgendaResultScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENAGENDARESULTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnHipplenCycleResultScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCYCLERESULTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnHipplenTraitUnlockScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENTRAITUNLOCKSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnOpenHipplenCycleScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONOPENHIPPLENCYCLESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetHipplenInheritScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENINHERITSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeHipplenEndingRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONTAKEHIPPLENENDINGREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetHipplenOutfitScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENOUTFITSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnHipplenChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* GetMainCtrl()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMainController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETMAINCTRL_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* RequireMainCtrl()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMainController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_REQUIREMAINCTRL_OFFSET))(this);
		}

		::System::Void ReleaseMainCtrl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_RELEASEMAINCTRL_OFFSET))(this);
		}

		::System::Void TryStartGame(::System::Boolean startByTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYSTARTGAME_OFFSET))(this, startByTask);
		}

		::System::Void TryExitGame(::System::Boolean forceOpenMainPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYEXITGAME_OFFSET))(this, forceOpenMainPage);
		}

		::System::Void TryDisposeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYDISPOSEGAME_OFFSET))(this);
		}

		::System::Boolean IsInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_ISINGAME_OFFSET))(this);
		}

		::System::Void OpenNewGameCycle(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_OPENNEWGAMECYCLE_OFFSET))(this, traitID);
		}

		::System::Single GetHipplenScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENSCALE_OFFSET))(this);
		}

		::System::String* GetHipplenBodyOutfitKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENBODYOUTFITKEY_OFFSET))(this);
		}

		::System::String* GetHipplenItemOutfitKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENITEMOUTFITKEY_OFFSET))(this);
		}

		::System::Void ClearCurNewTraitNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_CLEARCURNEWTRAITNEWRECORD_OFFSET))(this);
		}

		::System::Void ClearGuideNewTraitNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_CLEARGUIDENEWTRAITNEWRECORD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllEndingCanTakeReward()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETALLENDINGCANTAKEREWARD_OFFSET))(this);
		}

		::System::Void TakeEndingReward(::System::UInt32 endingID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TAKEENDINGREWARD_OFFSET))(this, endingID);
		}

		::System::Void SetHipplenOutfit(::System::UInt32 outfitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SETHIPPLENOUTFIT_OFFSET))(this, outfitID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetHipplenNewOutfitType()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENNEWOUTFITTYPE_OFFSET))(this);
		}

		::System::Boolean GetIsHipplenLimitRewardSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETISHIPPLENLIMITREWARDSEEN_OFFSET))(this);
		}

		::System::Void SetHipplenLimitRewardSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SETHIPPLENLIMITREWARDSEEN_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* _GetOrCreateGame()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__GETORCREATEGAME_OFFSET))(this);
		}

		::System::Void _DisposeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__DISPOSEGAME_OFFSET))(this);
		}

		::System::Void _OnModuleInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONMODULEINIT_OFFSET))(this);
		}

		::System::Void _OnHipplenMiniNpcCreated(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCCREATED_OFFSET))(this, args);
		}

		::System::Void _OnHipplenMiniNpcUnloaded(::RPG::GameCore::GameEntity* hipplen)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCUNLOADED_OFFSET))(this, hipplen);
		}

		::System::Void _RefreshOutfits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__REFRESHOUTFITS_OFFSET))(this);
		}

		::System::Boolean get_ActivityUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_ACTIVITYUNLOCK_OFFSET))(this);
		}

		::System::Void set_ActivityUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_ACTIVITYUNLOCK_OFFSET))(this, value);
		}

		::System::UInt32 get_CycleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CYCLEID_OFFSET))(this);
		}

		::System::Void set_CycleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CYCLEID_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* get_CurrentGame()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CURRENTGAME_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenCollectData* get_CollectData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenCollectData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_COLLECTDATA_OFFSET))(this);
		}

		::System::Void set_CollectData(::RPG::Client::ActivityHipplen::ActivityHipplenCollectData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenCollectData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_COLLECTDATA_OFFSET))(this, value);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData* get_OutfitData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_OUTFITDATA_OFFSET))(this);
		}

		::System::Void set_OutfitData(::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_OUTFITDATA_OFFSET))(this, value);
		}

		::System::Void _TryExitGame_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_0_OFFSET))(this);
		}

		::System::Void _TryExitGame_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
