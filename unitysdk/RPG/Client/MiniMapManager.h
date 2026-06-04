#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapManager_EMinimapIconListState.h"
#include "unitysdk/Struct_2_143B7A497B890286.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_621;
class Class_1_0A24888DF04C995E_2;
namespace RPG::Client { class Map; }
namespace RPG::Client { class MiniMapLayer; }
namespace RPG::Client { class MiniMapZone; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class UnlockSectionInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MINIMAPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFE8B40)
#define RPG_CLIENT_MINIMAPMANAGER_GETMINIMAPICONS_OFFSET UNITYSDK_OFFSET(0xBFEC640)
#define RPG_CLIENT_MINIMAPMANAGER_GETPLAYERTRACK_OFFSET UNITYSDK_OFFSET(0xBFECF90)
#define RPG_CLIENT_MINIMAPMANAGER_GET_IGNOREENLIGHTSECTION_OFFSET UNITYSDK_OFFSET(0xBFF34F0)
#define RPG_CLIENT_MINIMAPMANAGER_GET_LIMITAREADATA_OFFSET UNITYSDK_OFFSET(0xBFF34D0)
#define RPG_CLIENT_MINIMAPMANAGER_ISICONHIDDEN_OFFSET UNITYSDK_OFFSET(0xBFEC050)
#define RPG_CLIENT_MINIMAPMANAGER_QUERYZONE_OFFSET UNITYSDK_OFFSET(0xBFEC3E0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORDAILYPROP_OFFSET UNITYSDK_OFFSET(0xBFEBD10)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORPROP_OFFSET UNITYSDK_OFFSET(0xBFEBBC0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERICON_OFFSET UNITYSDK_OFFSET(0xBFEB260)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERLIMITAREA_OFFSET UNITYSDK_OFFSET(0xBFEC170)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERONLINEPLAYROOMJUKEBOXICON_OFFSET UNITYSDK_OFFSET(0xBFEBB30)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTEROUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0xBFEB560)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERSWITCHHANDHANDICON_OFFSET UNITYSDK_OFFSET(0xBFEB9D0)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERTRAVELSHIPDOCKICON_OFFSET UNITYSDK_OFFSET(0xBFEBA80)
#define RPG_CLIENT_MINIMAPMANAGER_REGISTERZONE_OFFSET UNITYSDK_OFFSET(0xBFEA0F0)
#define RPG_CLIENT_MINIMAPMANAGER_SETENTITYICONSHIDE_OFFSET UNITYSDK_OFFSET(0xBFEBDE0)
#define RPG_CLIENT_MINIMAPMANAGER_SET_IGNOREENLIGHTSECTION_OFFSET UNITYSDK_OFFSET(0xBFF3500)
#define RPG_CLIENT_MINIMAPMANAGER_SET_LIMITAREADATA_OFFSET UNITYSDK_OFFSET(0xBFF34E0)
#define RPG_CLIENT_MINIMAPMANAGER_SHITPLAYERTRACK_OFFSET UNITYSDK_OFFSET(0xBFECFD0)
#define RPG_CLIENT_MINIMAPMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xBFE9070)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERALLICON_OFFSET UNITYSDK_OFFSET(0xBFEB6E0)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICONFORPROP_OFFSET UNITYSDK_OFFSET(0xBFEBC90)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICON_OFFSET UNITYSDK_OFFSET(0xBFEB670)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERLIMITAREA_OFFSET UNITYSDK_OFFSET(0xBFEC390)
#define RPG_CLIENT_MINIMAPMANAGER_UNREGISTERZONE_OFFSET UNITYSDK_OFFSET(0xBFEAD80)
#define RPG_CLIENT_MINIMAPMANAGER__ADDICONINSECTIONS_OFFSET UNITYSDK_OFFSET(0xBFEF540)
#define RPG_CLIENT_MINIMAPMANAGER__ARRANGEZONETOLAYER_OFFSET UNITYSDK_OFFSET(0xBFED350)
#define RPG_CLIENT_MINIMAPMANAGER__ASSISTWAYPOINTREFRESHED_OFFSET UNITYSDK_OFFSET(0xBFF1440)
#define RPG_CLIENT_MINIMAPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFE8630)
#define RPG_CLIENT_MINIMAPMANAGER__DOCHESTMAPPINGINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xBFF0790)
#define RPG_CLIENT_MINIMAPMANAGER__DOTRACKINGINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xBFF0730)
#define RPG_CLIENT_MINIMAPMANAGER__GETZONEINLAYER_OFFSET UNITYSDK_OFFSET(0xBFEC520)
#define RPG_CLIENT_MINIMAPMANAGER__INTERNALADDICON_OFFSET UNITYSDK_OFFSET(0xBFEB490)
#define RPG_CLIENT_MINIMAPMANAGER__INTERNALREMOVETARGETALLICONS_OFFSET UNITYSDK_OFFSET(0xBFEB730)
#define RPG_CLIENT_MINIMAPMANAGER__MISSIONREFRESHED_OFFSET UNITYSDK_OFFSET(0xBFF10A0)
#define RPG_CLIENT_MINIMAPMANAGER__ONADDTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0xBFF0650)
#define RPG_CLIENT_MINIMAPMANAGER__ONFINDCHESTINFOREFRESH_OFFSET UNITYSDK_OFFSET(0xBFF0250)
#define RPG_CLIENT_MINIMAPMANAGER__ONFLOORSAVEDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xBFEDD80)
#define RPG_CLIENT_MINIMAPMANAGER__ONREMOVETEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0xBFF06C0)
#define RPG_CLIENT_MINIMAPMANAGER__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0xBFF02A0)
#define RPG_CLIENT_MINIMAPMANAGER__ONTRACKINGINFOREFRESHED_OFFSET UNITYSDK_OFFSET(0xBFF01F0)
#define RPG_CLIENT_MINIMAPMANAGER__REGISTERFSVTOSECTIONS_OFFSET UNITYSDK_OFFSET(0xBFEA6E0)
#define RPG_CLIENT_MINIMAPMANAGER__REGISTERZONEINTERNAL_OFFSET UNITYSDK_OFFSET(0xBFEAB30)
#define RPG_CLIENT_MINIMAPMANAGER__REMOVEICONINSECTIONS_OFFSET UNITYSDK_OFFSET(0xBFEFFA0)
#define RPG_CLIENT_MINIMAPMANAGER__REMOVEINVALIDICONS_OFFSET UNITYSDK_OFFSET(0xBFECDD0)
#define RPG_CLIENT_MINIMAPMANAGER__TICKFINDCHESTINFO_OFFSET UNITYSDK_OFFSET(0xBFEA090)
#define RPG_CLIENT_MINIMAPMANAGER__TICKPLAYERZONE_OFFSET UNITYSDK_OFFSET(0xBFE9800)
#define RPG_CLIENT_MINIMAPMANAGER__TICKREFRESHTRACKINGINFO_OFFSET UNITYSDK_OFFSET(0xBFEA000)
#define RPG_CLIENT_MINIMAPMANAGER__TRACKINGICONREFRESHED_OFFSET UNITYSDK_OFFSET(0xBFF1900)
#define RPG_CLIENT_MINIMAPMANAGER__TRYREFRESHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xBFF2130)
#define RPG_CLIENT_MINIMAPMANAGER__UNREGISTERFSVTOSECTIONS_OFFSET UNITYSDK_OFFSET(0xBFEB050)
#define RPG_CLIENT_MINIMAPMANAGER__WRITEZONE_OFFSET UNITYSDK_OFFSET(0xBFEA500)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager_TypeDefinitionIndex = 56688;

	class MiniMapManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>* _FilteredMiniMapIcons; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _LocateSectionIdxs; // 0x18
		::RPG::Client::UnlockSectionInfo* _Info; // 0x20
		::RPG::Client::MiniMapLayer* PlayerLayer; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>* _FindChestIcons; // 0x30
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x38
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>* _MissionIcons; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _PlayerTrack; // 0x48
		::Class_1_0A24888DF04C995E_2* _LimitAreaData_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MiniMapZone*>* _DiscreteMapZones; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::MiniMapLayer*>* _MapLayers; // 0x60
		::RPG::Client::MiniMapZone* PlayerZone; // 0x68
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>* _MiniMapIcons; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HideWhiteList; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* _FSVToSectionKeys; // 0x80
		::System::Int32 _CurrentMapShowLayer; // 0x88
		::System::Int32 _AllocID; // 0x8C
		::System::Single _Time; // 0x90
		::System::Single _LastFootprintTime; // 0x94
		::RPG::Client::MiniMapManager_EMinimapIconListState _IconListState; // 0x98
		::System::Boolean _FindChestInfoStateDirty; // 0x9C
		::System::Boolean _InHide; // 0x9D
		::System::Boolean _IgnoreEnlightSection_k__BackingField; // 0x9E
		::System::Boolean _TrackingInfoStateDirty; // 0x9F
		::System::Int32 _MissionIconNum; // 0xA0
		::Struct_2_143B7A497B890286 _LocateSectionNearBounds; // 0xA4
		::System::UInt32 _LightScreenIconID; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Int32 RegisterZone(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERZONE_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterZone(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERZONE_OFFSET))(this, a1);
		}

		::System::Void RegisterIcon(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterOutControlTeamLeaderIcon(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTEROUTCONTROLTEAMLEADERICON_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterIcon(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICON_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterAllIcon(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERALLICON_OFFSET))(this, a1);
		}

		::System::Void RegisterSwitchHandHandIcon(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERSWITCHHANDHANDICON_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterTravelShipDockIcon(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERTRAVELSHIPDOCKICON_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterOnlinePlayRoomJukeBoxIcon(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERONLINEPLAYROOMJUKEBOXICON_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterIconForProp(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORPROP_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterIconForProp(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERICONFORPROP_OFFSET))(this, a1);
		}

		::System::Void RegisterIconForDailyProp(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERICONFORDAILYPROP_OFFSET))(this, a1, a2);
		}

		::System::Void SetEntityIconsHide(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SETENTITYICONSHIDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsIconHidden(::Class_0_16E4307DCC419505_621* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_621*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_ISICONHIDDEN_OFFSET))(this, a1);
		}

		::System::Void RegisterLimitArea(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_REGISTERLIMITAREA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UnRegisterLimitArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_UNREGISTERLIMITAREA_OFFSET))(this);
		}

		::RPG::Client::MiniMapZone* QueryZone(::UnityEngine::Vector3 a1, ::RPG::Client::MiniMapZone*& a2, ::RPG::Client::MiniMapLayer*& a3)
		{
			return ((::RPG::Client::MiniMapZone*(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::MiniMapZone*&, ::RPG::Client::MiniMapLayer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_QUERYZONE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>* GetMiniMapIcons()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GETMINIMAPICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetPlayerTrack()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GETPLAYERTRACK_OFFSET))(this);
		}

		::System::Void ShitPlayerTrack(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SHITPLAYERTRACK_OFFSET))(this, a1);
		}

		::System::Void _ArrangeZoneToLayer(::RPG::Client::MiniMapZone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ARRANGEZONETOLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapZone* _GetZoneInLayer(::RPG::Client::MiniMapLayer* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::MiniMapZone*(*)(::PVOID, ::RPG::Client::MiniMapLayer*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__GETZONEINLAYER_OFFSET))(this, a1, a2);
		}

		::System::Int32 _RegisterZoneInternal(::RPG::Client::MiniMapZone* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REGISTERZONEINTERNAL_OFFSET))(this, a1);
		}

		::System::Void _WriteZone(::RPG::GameCore::LevelNavmapConfig* a1, ::RPG::Client::MiniMapZone* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::RPG::Client::MiniMapZone*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__WRITEZONE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterFSVToSections(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REGISTERFSVTOSECTIONS_OFFSET))(this, a1, a2);
		}

		::System::Void _UnRegisterFSVToSections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__UNREGISTERFSVTOSECTIONS_OFFSET))(this);
		}

		::System::Void _OnFloorSavedValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONFLOORSAVEDVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void _TickPlayerZone(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKPLAYERZONE_OFFSET))(this, a1);
		}

		::System::Void _InternalAddIcon(::Class_0_16E4307DCC419505_621* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_621*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__INTERNALADDICON_OFFSET))(this, a1);
		}

		::System::Void _InternalRemoveTargetAllIcons(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__INTERNALREMOVETARGETALLICONS_OFFSET))(this, a1);
		}

		::System::Void _OnTrackingInfoRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONTRACKINGINFOREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _OnFindChestInfoRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONFINDCHESTINFOREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnAddTempShowIcon(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONADDTEMPSHOWICON_OFFSET))(this, a1);
		}

		::System::Void _OnRemoveTempShowIcon(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ONREMOVETEMPSHOWICON_OFFSET))(this, a1);
		}

		::System::Void _TickRefreshTrackingInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKREFRESHTRACKINGINFO_OFFSET))(this);
		}

		::System::Void _TickFindChestInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TICKFINDCHESTINFO_OFFSET))(this);
		}

		::System::Void _DoTrackingInfoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__DOTRACKINGINFOREFRESH_OFFSET))(this);
		}

		::System::Void _MissionRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__MISSIONREFRESHED_OFFSET))(this);
		}

		::System::Void _TryRefreshSubMission(::RPG::Client::Map* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TRYREFRESHSUBMISSION_OFFSET))(this, a1, a2);
		}

		::System::Void _AssistWaypointRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ASSISTWAYPOINTREFRESHED_OFFSET))(this);
		}

		::System::Void _TrackingIconRefreshed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__TRACKINGICONREFRESHED_OFFSET))(this);
		}

		::System::Void _DoChestMappingInfoRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__DOCHESTMAPPINGINFOREFRESH_OFFSET))(this);
		}

		static ::System::Void _RemoveInvalidIcons(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_621*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REMOVEINVALIDICONS_OFFSET))(a1);
		}

		::System::Void _AddIconInSections(::Class_0_16E4307DCC419505_621* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_621*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__ADDICONINSECTIONS_OFFSET))(this, a1);
		}

		::System::Void _RemoveIconInSections(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER__REMOVEICONINSECTIONS_OFFSET))(this, a1);
		}

		::Class_1_0A24888DF04C995E_2* get_LimitAreaData()
		{
			return ((::Class_1_0A24888DF04C995E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GET_LIMITAREADATA_OFFSET))(this);
		}

		::System::Void set_LimitAreaData(::Class_1_0A24888DF04C995E_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SET_LIMITAREADATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreEnlightSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_GET_IGNOREENLIGHTSECTION_OFFSET))(this);
		}

		::System::Void set_IgnoreEnlightSection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER_SET_IGNOREENLIGHTSECTION_OFFSET))(this, a1);
		}
	};
}
