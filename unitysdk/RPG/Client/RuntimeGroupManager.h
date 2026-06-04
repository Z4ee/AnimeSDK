#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EntitySpawnTransitionType.h"
#include "unitysdk/RPG/Client/LockHoyoGroupReason.h"
#include "unitysdk/RPG/Client/LockHoyoGroupRule.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_12.h"
#include "unitysdk/Struct_2_C2B892F638207307.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_43BD383C98B4C0C5_137;
class Class_1_4C9F1682233ECDD3;
class Class_1_4C9F1682233ECDD3_1;
class Class_1_616F89B5F43D1E61;
class Class_1_F236C4DB0600E05D;
class Class_2_510E2A3B742BC0DC;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace RPG::Client { class RuntimeGroupManager_GroupRefreshExtraInfo; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupStreamingInfo; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GroupEntityCreateConfig; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class LevelGroupMissionCondition; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDGROUPSTREAMINGFILTERTAG_OFFSET UNITYSDK_OFFSET(0xC88B630)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYNPC_OFFSET UNITYSDK_OFFSET(0xC892980)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYPROP_OFFSET UNITYSDK_OFFSET(0xC892C00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYREGIONCHANGEREFRESH_OFFSET UNITYSDK_OFFSET(0xC88B3E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYVISIONRANGEGROUPCHANGE_OFFSET UNITYSDK_OFFSET(0xC88B5B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESTORYLINECHANGE_OFFSET UNITYSDK_OFFSET(0xC8976F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0xC897780)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARALLSERVERGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC88D5B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARHOYOGROUPPART_OFFSET UNITYSDK_OFFSET(0xC88C570)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARLEGACYPART_OFFSET UNITYSDK_OFFSET(0xC88FF20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xC8974C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_COLLECTUNFINISHMAINMISSIONSBYFLOOR_OFFSET UNITYSDK_OFFSET(0xC888E90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_1_OFFSET UNITYSDK_OFFSET(0xC896240)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_OFFSET UNITYSDK_OFFSET(0xC895320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DESTROYLOCALENTITY_OFFSET UNITYSDK_OFFSET(0xC896550)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSEINHOYOPART_OFFSET UNITYSDK_OFFSET(0xC88DE80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8975B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FINDOCCUPIEDGROUP_OFFSET UNITYSDK_OFFSET(0xC88CE10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCERELOADGROUPS_OFFSET UNITYSDK_OFFSET(0xC88A660)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCEUNLOADGROUPS_OFFSET UNITYSDK_OFFSET(0xC88ACD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETALLACTIVEGROUPUNITSWITHPREDICATE_OFFSET UNITYSDK_OFFSET(0xC88CC00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xC88C900)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xC88CA20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC897CB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETHOYOGROUPUNIT_OFFSET UNITYSDK_OFFSET(0xC88AB20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETMAPDEF_OFFSET UNITYSDK_OFFSET(0xC88AAE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_INVISIONRANGEHOYOGROUPS_OFFSET UNITYSDK_OFFSET(0xC88BF70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_ISGROUPSTREAMINGENABLED_OFFSET UNITYSDK_OFFSET(0xC889B90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HASLOCALENTITY_OFFSET UNITYSDK_OFFSET(0xC896020)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HASMAPENTITY_OFFSET UNITYSDK_OFFSET(0xC897CF0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITCLIENTLEGACYPART_OFFSET UNITYSDK_OFFSET(0xC890080)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALHOYOGROUPREFRESHANDLOAD_OFFSET UNITYSDK_OFFSET(0xC88D940)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZEHOYOPART_OFFSET UNITYSDK_OFFSET(0xC88E7C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC897370)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xC88D560)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPFORCEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC893020)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xC897810)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPUNLOADEDBYCONFLICT_OFFSET UNITYSDK_OFFSET(0xC88DCE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISHOYOGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xC88CB60)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANLOAD_OFFSET UNITYSDK_OFFSET(0xC893090)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANUNLOAD_OFFSET UNITYSDK_OFFSET(0xC893200)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xC88F7A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC885BB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYNPCADDED_OFFSET UNITYSDK_OFFSET(0xC88F800)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYPROPADDED_OFFSET UNITYSDK_OFFSET(0xC88F940)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISSERVERGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xC8978B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_1_OFFSET UNITYSDK_OFFSET(0xC885D00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xC885B20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xC897660)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0xC88ABB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHHOYOGROUPENTITIESBYCUSTOM_OFFSET UNITYSDK_OFFSET(0xC88D330)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xC88D1B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPUNLOADLISTENER_OFFSET UNITYSDK_OFFSET(0xC88DB50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVEGROUPSTREAMINGFILTERTAG_OFFSET UNITYSDK_OFFSET(0xC88B980)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYNPC_OFFSET UNITYSDK_OFFSET(0xC894EA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYPROP_OFFSET UNITYSDK_OFFSET(0xC895020)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_1_OFFSET UNITYSDK_OFFSET(0xC88C0E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_OFFSET UNITYSDK_OFFSET(0xC88BFD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYCREATEGROUPENTITIES_OFFSET UNITYSDK_OFFSET(0xC88A1E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYGETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xC88CA90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_1_OFFSET UNITYSDK_OFFSET(0xC886100)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xC886070)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xC88D270)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPUNLOADLISTENER_OFFSET UNITYSDK_OFFSET(0xC88DC20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_VALIDATEGROUPSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0xC88D030)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINHOYOPART_OFFSET UNITYSDK_OFFSET(0xC88E380)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINLEGACYPART_OFFSET UNITYSDK_OFFSET(0xC88FA80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFY_OFFSET UNITYSDK_OFFSET(0xC897460)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDLOCALLEGACYDISTRICT_OFFSET UNITYSDK_OFFSET(0xC893AB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDTODICT_OFFSET UNITYSDK_OFFSET(0xC8919A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xC8875F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEREGIONS_OFFSET UNITYSDK_OFFSET(0xC887840)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_OFFSET UNITYSDK_OFFSET(0xC889510)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMAP_OFFSET UNITYSDK_OFFSET(0xC891910)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMISSIONTOGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0xC8916F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDREFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0xC887320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCFINALTRACKINGMISSIONID_OFFSET UNITYSDK_OFFSET(0xC888D70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORACTIVATEDGROUPS_OFFSET UNITYSDK_OFFSET(0xC887E10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0xC888880)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC898100)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0xC889300)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTOTHERFLOORSLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0xC887AB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTSTATEBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0xC887450)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC897E10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DIFFAFTERREFRESH_OFFSET UNITYSDK_OFFSET(0xC889C40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DISPOSELEGACYPART_OFFSET UNITYSDK_OFFSET(0xC88FEC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DOREFRESHHOYOGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xC886E80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__GROUPUNITSLOADUNLOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0xC8871E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPBYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xC890100)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPSBYSTANDALONEPERFORMANCETAG_OFFSET UNITYSDK_OFFSET(0xC890A20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPS_OFFSET UNITYSDK_OFFSET(0xC890E30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC8911F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITIALIZEHOYOGROUPUNITSBYMAPDEF_OFFSET UNITYSDK_OFFSET(0xC88E810)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC893270)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITMISSIONTOLEGACYGROUPRELATION_OFFSET UNITYSDK_OFFSET(0xC891390)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITREGIONSTATE_OFFSET UNITYSDK_OFFSET(0xC88B120)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ISADVENTUREPHASEINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC88EE10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__LOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC893C80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__MISSIONVALIDCHECK_OFFSET UNITYSDK_OFFSET(0xC88F5C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__NOTIFYGROUPREFRESHEND_OFFSET UNITYSDK_OFFSET(0xC897DC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONCURRENTREGIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xC88B380)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONGROUPLOADFINISH_OFFSET UNITYSDK_OFFSET(0xC88ED20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPACTIVE_OFFSET UNITYSDK_OFFSET(0xC88EA20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPDEACTIVE_OFFSET UNITYSDK_OFFSET(0xC88F3A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMLOADED_OFFSET UNITYSDK_OFFSET(0xC88BDD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMUNLOADED_OFFSET UNITYSDK_OFFSET(0xC88BEC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONMAINMISSIONDELETE_OFFSET UNITYSDK_OFFSET(0xC892F80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHANDLOADHOYOGROUP_OFFSET UNITYSDK_OFFSET(0xC88EE90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHFIVEDIMGROUP_OFFSET UNITYSDK_OFFSET(0xC88F020)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHMAPGROUPDEFS_OFFSET UNITYSDK_OFFSET(0xC88F0A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHPUZZLEGROUP_OFFSET UNITYSDK_OFFSET(0xC88F1E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONROTATABLEREGIONCHANGED_OFFSET UNITYSDK_OFFSET(0xC88EFA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__RECONFIGUREGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0xC8864C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUPLIST_OFFSET UNITYSDK_OFFSET(0xC891C00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC892120)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0xC8922C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPENTITIESBYLOADSTATECALC_OFFSET UNITYSDK_OFFSET(0xC887370)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xC8863E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYMAINMISSION_OFFSET UNITYSDK_OFFSET(0xC891B60)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0xC892030)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSYNCMISSION_OFFSET UNITYSDK_OFFSET(0xC8920D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINHOYOPART_OFFSET UNITYSDK_OFFSET(0xC88E5A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINLEGACYPART_OFFSET UNITYSDK_OFFSET(0xC88FCA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFY_OFFSET UNITYSDK_OFFSET(0xC897550)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVELOCALLEGACYDISTRICT_OFFSET UNITYSDK_OFFSET(0xC8951A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__SETVISIONRANGEREFRESHDIRTY_OFFSET UNITYSDK_OFFSET(0xC88BE80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERDEACTIVEWHENPENDINGDEACTIVEGROUPMEETUNLOAD_OFFSET UNITYSDK_OFFSET(0xC886F30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERHOYOGROUPENTITIESREFRESHWITHSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xC88A330)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYINITLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC892E70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYREFRESHLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC892340)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYUNLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC892480)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__UNINITREGIONSTATE_OFFSET UNITYSDK_OFFSET(0xC88B250)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__UNLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xC894700)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_TypeDefinitionIndex = 58038;

	class RuntimeGroupManager : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_NewRefreshPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeGroupManager_TypeDefinitionIndex)->GetStaticField(0xC530);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>* GroupUnits; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::RuntimeGroupInfo*>* _delayUnloadGroups; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _tempList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _EventMissionToLegacyGroupIDList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupStreamingInfo*>* _HoYoGroupStreamingInfos; // 0x30
		::RPG::Client::MapDef* _MapDef; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _TmpEntityDefsToRemove; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _SubMissionToLegacyGroupIDList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _MainMissionToLegacyGroupIDList; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _InVisionRangeHoYoGroups_k__BackingField; // 0x58
		::System::Boolean _IsHoYoPartDataInitialized; // 0x60
		::System::Boolean _NotifyRegistered; // 0x61
		::System::UInt32 _delayUnloadMission; // 0x64
		::System::Boolean _IsInitialLoadFinish; // 0x68
		::System::Boolean _RegionRefreshDirty; // 0x69
		::System::Boolean _VisionRangeRefreshDirty; // 0x6A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CCTOR_OFFSET))();
		}

		::System::Void LockGroupLoadState(::System::UInt32 a1, ::RPG::Client::LockHoyoGroupReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void LockGroupLoadState_1(::System::UInt32 a1, ::RPG::Client::LockHoyoGroupRule a2, ::RPG::Client::LockHoyoGroupReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupRule, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnlockGroupLoadState(::System::UInt32 a1, ::RPG::Client::LockHoyoGroupReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void UnlockGroupLoadState_1(::System::UInt32 a1, ::RPG::Client::LockHoyoGroupRule a2, ::RPG::Client::LockHoyoGroupReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupRule, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshHoyoGroupLoadState(::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPLOADSTATE_OFFSET))(this, a1);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* _CollectStateBeforeRefresh()
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTSTATEBEFOREREFRESH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_137*>* _BuildGroupRefreshInputEx_ActiveGroupUnits()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_137*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEGROUPUNITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _BuildGroupRefreshInputEx_ActiveRegions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEREGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C9F1682233ECDD3_1*>* _CollectOtherFloorsLoadedGroups(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C9F1682233ECDD3_1*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTOTHERFLOORSLOADEDGROUPS_OFFSET))(this, a1);
		}

		::Class_1_4C9F1682233ECDD3* _CalculateOtherFloorActivatedGroups(::RPG::Client::MapDef* a1)
		{
			return ((::Class_1_4C9F1682233ECDD3*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORACTIVATEDGROUPS_OFFSET))(this, a1);
		}

		::System::UInt32 _CalcFinalTrackingMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCFINALTRACKINGMISSIONID_OFFSET))(this);
		}

		::Class_1_4C9F1682233ECDD3_1* _CalculateOtherFloorLoadedGroups(::Class_1_4C9F1682233ECDD3* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::Class_1_4C9F1682233ECDD3_1*(*)(::PVOID, ::Class_1_4C9F1682233ECDD3*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORLOADEDGROUPS_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* CollectUnFinishMainMissionsByFloor(::RPG::Client::MapDef* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_COLLECTUNFINISHMAINMISSIONSBYFLOOR_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CollectAllOtherFloorsMainMissions(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET))(this, a1);
		}

		::Class_1_F236C4DB0600E05D* _BuildGroupRefreshInputEx(::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* a1)
		{
			return ((::Class_1_F236C4DB0600E05D*(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_OFFSET))(this, a1);
		}

		::System::Boolean _DiffAfterRefresh(::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__DIFFAFTERREFRESH_OFFSET))(this, a1);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* _DoRefreshHoyoGroupLoadState(::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* a1)
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__DOREFRESHHOYOGROUPLOADSTATE_OFFSET))(this, a1);
		}

		::System::Void _TriggerDeactiveWhenPendingDeactiveGroupMeetUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERDEACTIVEWHENPENDINGDEACTIVEGROUPMEETUNLOAD_OFFSET))(this);
		}

		::System::Void _GroupUnitsLoadUnloadOperations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__GROUPUNITSLOADUNLOADOPERATIONS_OFFSET))(this);
		}

		::Struct_2_C2B892F638207307 _BuildRefreshContext(::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* a1, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* a2)
		{
			return ((::Struct_2_C2B892F638207307(*)(::PVOID, ::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDREFRESHCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshHoyoGroupEntitiesByLoadStateCalc(::Struct_2_C2B892F638207307 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C2B892F638207307))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPENTITIESBYLOADSTATECALC_OFFSET))(this, a1);
		}

		::System::Void ForceReloadGroups(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCERELOADGROUPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ForceUnloadGroups(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCEUNLOADGROUPS_OFFSET))(this, a1);
		}

		::System::Void _InitRegionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITREGIONSTATE_OFFSET))(this);
		}

		::System::Void _UninitRegionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__UNINITREGIONSTATE_OFFSET))(this);
		}

		::System::Void _OnCurrentRegionStateChange(::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a1, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a2, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*, ::System::Collections::Generic::HashSet_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONCURRENTREGIONSTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyRegionChangeRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYREGIONCHANGEREFRESH_OFFSET))(this);
		}

		::System::Void _ReconfigureGroupStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__RECONFIGUREGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void ApplyVisionRangeGroupChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYVISIONRANGEGROUPCHANGE_OFFSET))(this);
		}

		::System::Void AddGroupStreamingFilterTag(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDGROUPSTREAMINGFILTERTAG_OFFSET))(this, a1);
		}

		::System::Void RemoveGroupStreamingFilterTag(::RPG::GameCore::HoyoTag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVEGROUPSTREAMINGFILTERTAG_OFFSET))(this, a1);
		}

		::System::Void _OnHoYoGroupStreamLoaded(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMLOADED_OFFSET))(this, a1);
		}

		::System::Void _OnHoYoGroupStreamUnloaded(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMUNLOADED_OFFSET))(this, a1);
		}

		::System::Void _SetVisionRangeRefreshDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__SETVISIONRANGEREFRESHDIRTY_OFFSET))(this);
		}

		::System::Boolean get_IsGroupStreamingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_ISGROUPSTREAMINGENABLED_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_InVisionRangeHoYoGroups()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_INVISIONRANGEHOYOGROUPS_OFFSET))(this);
		}

		::System::Void TryCreateGroupEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYCREATEGROUPENTITIES_OFFSET))(this);
		}

		::System::Void StartGroupLevelGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_OFFSET))(this);
		}

		::System::Void StartGroupLevelGraphs_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_1_OFFSET))(this, a1);
		}

		::System::Void ClearHoyoGroupPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARHOYOGROUPPART_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetGroupEntity(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPENTITY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetGroupState(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPSTATE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetGroupState(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYGETGROUPSTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsHoyoGroupLoaded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISHOYOGROUPLOADED_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* GetHoyoGroupUnit(::System::UInt32 a1)
		{
			return ((::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETHOYOGROUPUNIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>* GetAllActiveGroupUnitsWithPredicate(::System::Func_2<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETALLACTIVEGROUPUNITSWITHPREDICATE_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* FindOccupiedGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_FINDOCCUPIEDGROUP_OFFSET))(this, a1);
		}

		::System::Boolean ValidateGroupStateTransition(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_VALIDATEGROUPSTATETRANSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterGroupStateChange(::System::UInt32 a1, ::System::Action_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPSTATECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterGroupStateChange(::System::UInt32 a1, ::System::Action_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPSTATECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshHoyoGroupEntitiesByCustom(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHHOYOGROUPENTITIESBYCUSTOM_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsCurrentMap(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISCURRENTMAP_OFFSET))(this, a1);
		}

		::System::Void ClearAllServerGroupUnits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARALLSERVERGROUPUNITS_OFFSET))(this);
		}

		::System::Void InitialHoYoGroupRefreshAndLoad(::RPG::Client::Map* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALHOYOGROUPREFRESHANDLOAD_OFFSET))(this, a1);
		}

		::System::Boolean RegisterGroupUnloadListener(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPUNLOADLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterGroupUnloadListener(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPUNLOADLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsGroupUnloadedByConflict(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPUNLOADEDBYCONFLICT_OFFSET))(this, a1);
		}

		::System::Void DisposeInHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSEINHOYOPART_OFFSET))(this);
		}

		::System::Void _AddAdventureNotifyInHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINHOYOPART_OFFSET))(this);
		}

		::System::Void _RemoveAdventureNotifyInHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINHOYOPART_OFFSET))(this);
		}

		::System::Void InitializeHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZEHOYOPART_OFFSET))(this);
		}

		::System::Void _InitializeHoyoGroupUnitsByMapDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITIALIZEHOYOGROUPUNITSBYMAPDEF_OFFSET))(this);
		}

		::System::Void _TriggerHoyoGroupEntitiesRefreshWithScreenTransfer(::RPG::Client::Map_RefreshEntitiesExtraInfo* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERHOYOGROUPENTITIESREFRESHWITHSCREENTRANSFER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnGroupLoadFinish(::Class_2_510E2A3B742BC0DC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONGROUPLOADFINISH_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsAdventurePhaseInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ISADVENTUREPHASEINITIALIZED_OFFSET))(this);
		}

		::System::Void _OnRefreshAndLoadHoyoGroup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHANDLOADHOYOGROUP_OFFSET))(this, a1);
		}

		::System::Void _OnRotatableRegionChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONROTATABLEREGIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshFiveDimGroup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHFIVEDIMGROUP_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshMapGroupDefs(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHMAPGROUPDEFS_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshPuzzleGroup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHPUZZLEGROUP_OFFSET))(this, a1);
		}

		::System::Void _OnHoYoGroupActive(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPACTIVE_OFFSET))(this, a1);
		}

		::System::Void _OnHoYoGroupDeActive(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPDEACTIVE_OFFSET))(this, a1);
		}

		::System::Void _MissionValidCheck(::RPG::GameCore::LevelGroupMissionCondition* a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupMissionCondition*, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__MISSIONVALIDCHECK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsLegacyGroup(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUP_OFFSET))(this, a1);
		}

		::System::Boolean IsLegacyGroupLoaded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPLOADED_OFFSET))(this, a1);
		}

		::System::Boolean IsLegacyNpcAdded(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYNPCADDED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLegacyPropAdded(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYPROPADDED_OFFSET))(this, a1, a2);
		}

		::System::Void _AddAdventureNotifyInLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINLEGACYPART_OFFSET))(this);
		}

		::System::Void _RemoveAdventureNotifyInLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINLEGACYPART_OFFSET))(this);
		}

		::System::Void _DisposeLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__DISPOSELEGACYPART_OFFSET))(this);
		}

		::System::Void ClearLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARLEGACYPART_OFFSET))(this);
		}

		::System::Void InitClientLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITCLIENTLEGACYPART_OFFSET))(this);
		}

		::System::Void _InitClientLegacyGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPS_OFFSET))(this);
		}

		::System::Void _InitClientLegacyGroupsByStandalonePerformanceTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPSBYSTANDALONEPERFORMANCETAG_OFFSET))(this);
		}

		::System::Void _InitMissionToLegacyGroupRelation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITMISSIONTOLEGACYGROUPRELATION_OFFSET))(this);
		}

		::System::Void _BuildMissionToGroupIDMap(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMISSIONTOGROUPIDMAP_OFFSET))(this, a1);
		}

		::System::Void _BuildMap(::RPG::GameCore::LevelGroupMissionCondition* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupMissionCondition*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMAP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddToDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDTODICT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshLegacyClientGroupByMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _RefreshLegacyClientGroupBySubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _RefreshLegacyClientGroupBySyncMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSYNCMISSION_OFFSET))(this, a1);
		}

		::System::Void _RefreshClientLegacyGroupList(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUPLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshClientLegacyGroup(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitClientLegacyGroupBySnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPBYSNAPSHOT_OFFSET))(this);
		}

		::System::Void _InitClientLegacyGroup(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMainMissionDelete(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONMAINMISSIONDELETE_OFFSET))(this, a1);
		}

		static ::System::Boolean IsGroupForceUnload(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPFORCEUNLOAD_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsLegacyGroupCanLoad(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANLOAD_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsLegacyGroupCanUnload(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANUNLOAD_OFFSET))(a1, a2);
		}

		::System::Boolean _TryInitLoadClientLegacyGroup(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYINITLOADCLIENTLEGACYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitLoadClientLegacyGroup(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITLOADCLIENTLEGACYGROUP_OFFSET))(this, a1);
		}

		::System::Boolean _TryRefreshLoadClientLegacyGroup(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYREFRESHLOADCLIENTLEGACYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadClientLegacyGroup(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__LOADCLIENTLEGACYGROUP_OFFSET))(this, a1);
		}

		::System::Boolean _TryUnLoadClientLegacyGroup(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYUNLOADCLIENTLEGACYGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UnLoadClientLegacyGroup(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__UNLOADCLIENTLEGACYGROUP_OFFSET))(this, a1);
		}

		::System::Boolean AddLocalLegacyNpc(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::Boolean a4, ::RPG::GameCore::EntityClassifyType a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Boolean, ::RPG::GameCore::EntityClassifyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYNPC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean RemoveLocalLegacyNpc(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYNPC_OFFSET))(this, a1, a2);
		}

		::System::Boolean AddLocalLegacyProp(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::RPG::GameCore::EntityClassifyType a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::EntityClassifyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYPROP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean RemoveLocalLegacyProp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYPROP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddLocalLegacyDistrict(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDLOCALLEGACYDISTRICT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _RemoveLocalLegacyDistrict(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVELOCALLEGACYDISTRICT_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*> CreateLocalEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*>(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*> CreateLocalEntity_1(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GroupEntityCreateConfig* a3)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GroupEntityCreateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DestroyLocalEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_DESTROYLOCALENTITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasLocalEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HASLOCALENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnNetworkDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ONNETWORKDISCONNECTED_OFFSET))(this);
		}

		::System::Void BeforeStoryLineChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESTORYLINECHANGE_OFFSET))(this);
		}

		::System::Void BeforeSwitchMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESWITCHMAP_OFFSET))(this);
		}

		::System::Void RefreshEntities(::RPG::Client::Map_RefreshEntitiesExtraInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHENTITIES_OFFSET))(this, a1);
		}

		::System::Boolean IsGroupLoaded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPLOADED_OFFSET))(this, a1);
		}

		::System::Boolean IsServerGroupLoaded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISSERVERGROUPLOADED_OFFSET))(this, a1);
		}

		::RPG::Client::MapDef* GetMapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETMAPDEF_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>* GetGroupUnits()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPUNITS_OFFSET))(this);
		}

		::System::Boolean HasMapEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HASMAPENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _NotifyGroupRefreshEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__NOTIFYGROUPREFRESHEND_OFFSET))(this);
		}

		::System::Void _RefreshEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHENTITIES_OFFSET))(this);
		}

		::System::Void _AddAdventureNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveAdventureNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFY_OFFSET))(this);
		}
	};
}
