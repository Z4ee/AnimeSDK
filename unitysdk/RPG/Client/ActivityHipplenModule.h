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

#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_CLEARCURNEWTRAITNEWRECORD_OFFSET UNITYSDK_OFFSET(0x1B8F2910)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_CLEARGUIDENEWTRAITNEWRECORD_OFFSET UNITYSDK_OFFSET(0x1B8F2A10)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8F1DE0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1B8F3A50)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETALLENDINGCANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1B8F2B10)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENBODYOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x1B8EECA0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENITEMOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x1B8EECF0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENNEWOUTFITTYPE_OFFSET UNITYSDK_OFFSET(0x1B8F3220)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETHIPPLENSCALE_OFFSET UNITYSDK_OFFSET(0x1B8F2790)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETISHIPPLENLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x1B8F3830)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GETMAINCTRL_OFFSET UNITYSDK_OFFSET(0x1B8F1EE0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_ACTIVITYUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B8F4180)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x1B8F41E0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x1B8F41C0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1B8F41A0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_OUTFITDATA_OFFSET UNITYSDK_OFFSET(0x1B8F4200)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B8F1CC0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_ISINGAME_OFFSET UNITYSDK_OFFSET(0x1B8F0590)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B8F1E70)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_OPENNEWGAMECYCLE_OFFSET UNITYSDK_OFFSET(0x1B8F2690)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_RELEASEMAINCTRL_OFFSET UNITYSDK_OFFSET(0x1B8F1FD0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_REQUIREMAINCTRL_OFFSET UNITYSDK_OFFSET(0x1B8F1F20)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SETHIPPLENLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x1B8F39F0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SETHIPPLENOUTFIT_OFFSET UNITYSDK_OFFSET(0x1B8F2ED0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_ACTIVITYUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B8F4190)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x1B8F41F0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x1B8F41D0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x1B8F41B0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_OUTFITDATA_OFFSET UNITYSDK_OFFSET(0x1B8F4210)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TAKEENDINGREWARD_OFFSET UNITYSDK_OFFSET(0x1B8F2DD0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYDISPOSEGAME_OFFSET UNITYSDK_OFFSET(0x1B8F2620)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYEXITGAME_OFFSET UNITYSDK_OFFSET(0x1B8F2280)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1B8F2070)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B8F3AF0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B8EED40)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F1C70)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__DISPOSEGAME_OFFSET UNITYSDK_OFFSET(0x1B8EF5D0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__GETORCREATEGAME_OFFSET UNITYSDK_OFFSET(0x1B8EF540)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B8EF400)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENINHERITSCRSP_OFFSET UNITYSDK_OFFSET(0x1B8F0DD0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENAGENDARESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B8EFFD0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B8F1720)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCYCLERESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B8F0280)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCCREATED_OFFSET UNITYSDK_OFFSET(0x1B8F3CD0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCUNLOADED_OFFSET UNITYSDK_OFFSET(0x1B8F4110)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENTRAITUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B8F05E0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0x1B8F3BC0)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONOPENHIPPLENCYCLESCRSP_OFFSET UNITYSDK_OFFSET(0x1B8F0D30)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENAGENDASCRSP_OFFSET UNITYSDK_OFFSET(0x1B8EF940)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENOUTFITSCRSP_OFFSET UNITYSDK_OFFSET(0x1B8F1650)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETTLEHIPPLENWORKSCRSP_OFFSET UNITYSDK_OFFSET(0x1B8EFA20)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONTAKEHIPPLENENDINGREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B8F1520)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__REFRESHOUTFITS_OFFSET UNITYSDK_OFFSET(0x1B8EF630)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_0_OFFSET UNITYSDK_OFFSET(0x1B8F4220)
#define RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_1_OFFSET UNITYSDK_OFFSET(0x1B8F4490)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenModule_TypeDefinitionIndex = 61618;

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
		::System::Boolean _ActivityUnlock_k__BackingField; // 0x3C
		::System::Boolean _IsPendingStartGame; // 0x3D
		::System::Nullable_1<::System::Boolean> _IsHipplenLimitRewardSeen; // 0x3E
		::System::Boolean _IsDataInited; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetHipplenDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetHipplenAgendaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENAGENDASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSettleHipplenWorkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETTLEHIPPLENWORKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnHipplenAgendaResultScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENAGENDARESULTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnHipplenCycleResultScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCYCLERESULTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnHipplenTraitUnlockScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENTRAITUNLOCKSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnOpenHipplenCycleScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONOPENHIPPLENCYCLESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetHipplenInheritScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONGETHIPPLENINHERITSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeHipplenEndingRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONTAKEHIPPLENENDINGREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetHipplenOutfitScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONSETHIPPLENOUTFITSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnHipplenChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENCHANGESCNOTIFY_OFFSET))(this, a1, a2);
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

		::System::Void TryStartGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYSTARTGAME_OFFSET))(this, a1);
		}

		::System::Void TryExitGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYEXITGAME_OFFSET))(this, a1);
		}

		::System::Void TryDisposeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TRYDISPOSEGAME_OFFSET))(this);
		}

		::System::Boolean IsInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_ISINGAME_OFFSET))(this);
		}

		::System::Void OpenNewGameCycle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_OPENNEWGAMECYCLE_OFFSET))(this, a1);
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

		::System::Void TakeEndingReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_TAKEENDINGREWARD_OFFSET))(this, a1);
		}

		::System::Void SetHipplenOutfit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SETHIPPLENOUTFIT_OFFSET))(this, a1);
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

		::System::Void _OnHipplenMiniNpcCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCCREATED_OFFSET))(this, a1);
		}

		::System::Void _OnHipplenMiniNpcUnloaded(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__ONHIPPLENMININPCUNLOADED_OFFSET))(this, a1);
		}

		::System::Void _RefreshOutfits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__REFRESHOUTFITS_OFFSET))(this);
		}

		::System::Boolean get_ActivityUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_ACTIVITYUNLOCK_OFFSET))(this);
		}

		::System::Void set_ActivityUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_ACTIVITYUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 get_CycleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CYCLEID_OFFSET))(this);
		}

		::System::Void set_CycleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CYCLEID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* get_CurrentGame()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_CURRENTGAME_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenCollectData* get_CollectData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenCollectData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_COLLECTDATA_OFFSET))(this);
		}

		::System::Void set_CollectData(::RPG::Client::ActivityHipplen::ActivityHipplenCollectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenCollectData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_COLLECTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData* get_OutfitData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_GET_OUTFITDATA_OFFSET))(this);
		}

		::System::Void set_OutfitData(::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenOutfitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE_SET_OUTFITDATA_OFFSET))(this, a1);
		}

		::System::Void _TryExitGame_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_0_OFFSET))(this);
		}

		::System::Void _TryExitGame_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENMODULE__TRYEXITGAME_B__20_1_OFFSET))(this);
		}
	};
}
