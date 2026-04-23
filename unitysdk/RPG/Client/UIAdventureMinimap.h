#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIAdventureMinimap_SectionAnimInstance.h"
#include "unitysdk/RPG/Client/UIAdventureMinimap_SectionHandle.h"
#include "unitysdk/RPG/Client/UIAdventureMinimap_TrackEffectType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_598;
class Class_1_017642E048A94394;
class Class_1_43B508F64DA705FE;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MiniMapLayer; }
namespace RPG::Client { class MiniMapLimitArea; }
namespace RPG::Client { class MiniMapZone; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class UIAdventureMinimap_Icon; }
namespace RPG::Client { class UIAdventureMinimap_IconCircle; }
namespace RPG::Client { class UIAdventureMinimap_InstancedLayer; }
namespace RPG::Client { class UIAdventureMinimap_SectionInstance; }
namespace RPG::Client { class UIAdventureMinimap_SubMapIcon; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_ADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB3C4F10)
#define RPG_CLIENT_UIADVENTUREMINIMAP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB3BCE40)
#define RPG_CLIENT_UIADVENTUREMINIMAP_GETSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xB3CBCF0)
#define RPG_CLIENT_UIADVENTUREMINIMAP_GET__ISPLAYERINHIDEAREA_OFFSET UNITYSDK_OFFSET(0xB3C5440)
#define RPG_CLIENT_UIADVENTUREMINIMAP_ISUSEFIVEDIMCOMPLETEICON_OFFSET UNITYSDK_OFFSET(0xB3CBC30)
#define RPG_CLIENT_UIADVENTUREMINIMAP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB3BE860)
#define RPG_CLIENT_UIADVENTUREMINIMAP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3BE400)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ACTIVEICON_OFFSET UNITYSDK_OFFSET(0xB3C8EE0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ACTIVETRACKINGEFFECT_OFFSET UNITYSDK_OFFSET(0xB3C9680)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB3BD1D0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CALC2DROTATION_1_OFFSET UNITYSDK_OFFSET(0xB3C6D10)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CALC2DROTATION_OFFSET UNITYSDK_OFFSET(0xB3BF2E0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CALCPLAYERPOS_OFFSET UNITYSDK_OFFSET(0xB3BF5C0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3CC010)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWCHESTICONICONBYSUBMAP_OFFSET UNITYSDK_OFFSET(0xB3CB5A0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWPLAYERICONBYSUBMAP_OFFSET UNITYSDK_OFFSET(0xB3CBBE0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWTRACEMAPPINGINFOICONBYSUBMAP_OFFSET UNITYSDK_OFFSET(0xB3CB3C0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWTRACEMISSIONICONBYSUBMAP_OFFSET UNITYSDK_OFFSET(0xB3CAE90)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWTRANSPORTICONBYSUBMAP_OFFSET UNITYSDK_OFFSET(0xB3C9960)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CHECKMINIMAPSECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0xB3C6800)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CHECKNEEDCHANGE2DMAP_OFFSET UNITYSDK_OFFSET(0xB3C59D0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CLEARSECTIONS_OFFSET UNITYSDK_OFFSET(0xB3C64C0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CLIPICON_OFFSET UNITYSDK_OFFSET(0xB3C73D0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CREATECIRCLE_OFFSET UNITYSDK_OFFSET(0xB3C86D0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CREATESECTIONINSTANCE_OFFSET UNITYSDK_OFFSET(0xB3C68E0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xB3CBDB0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__DEACTIVEICON_OFFSET UNITYSDK_OFFSET(0xB3C9570)
#define RPG_CLIENT_UIADVENTUREMINIMAP__DESTROYINSTANCEDLAYER_OFFSET UNITYSDK_OFFSET(0xB3C5AC0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__DESTROYLAYER_OFFSET UNITYSDK_OFFSET(0xB3C5C30)
#define RPG_CLIENT_UIADVENTUREMINIMAP__FILLSECTIONANIMIMAGEIDX_OFFSET UNITYSDK_OFFSET(0xB3C6DB0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__FINDZONEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB3C6630)
#define RPG_CLIENT_UIADVENTUREMINIMAP__GETNAVIICONPATH_OFFSET UNITYSDK_OFFSET(0xB3C9C50)
#define RPG_CLIENT_UIADVENTUREMINIMAP__INIT_OFFSET UNITYSDK_OFFSET(0xB3BD6C0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__INSTANTIATEZONE_OFFSET UNITYSDK_OFFSET(0xB3C5DD0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ISINVIEWABLESECTIONS_OFFSET UNITYSDK_OFFSET(0xB3C6EB0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ISSECTIONVISIBLEINROGUE_OFFSET UNITYSDK_OFFSET(0xB3C6770)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ISSHOWMAINMAP_OFFSET UNITYSDK_OFFSET(0xB3C6460)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ISTRACKINGCIRCLESHOWBYAREA_OFFSET UNITYSDK_OFFSET(0xB3C7170)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ISUSETILETYPEICON_OFFSET UNITYSDK_OFFSET(0xB3CA940)
#define RPG_CLIENT_UIADVENTUREMINIMAP__LOADICONIMAGE_OFFSET UNITYSDK_OFFSET(0xB3C8F60)
#define RPG_CLIENT_UIADVENTUREMINIMAP__NEXTICON_OFFSET UNITYSDK_OFFSET(0xB3C8990)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xB3C5130)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONASYNCLOADSPRITE_OFFSET UNITYSDK_OFFSET(0xB3CA9B0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONENTERNEXTROGUEROOM_OFFSET UNITYSDK_OFFSET(0xB3C5960)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONMAPENTER3DAREA_OFFSET UNITYSDK_OFFSET(0xB3C4E70)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONMAPEXIT3DAREA_OFFSET UNITYSDK_OFFSET(0xB3C4EC0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONMAZEMAPINFOUPDATED_OFFSET UNITYSDK_OFFSET(0xB3C5180)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONMINIMAPSECTIONFSVCHANGE_OFFSET UNITYSDK_OFFSET(0xB3C50E0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONREFRESHALLSBUMAPICONNAVIICONS_OFFSET UNITYSDK_OFFSET(0xB3CAD10)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONSECTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0xB3C4F60)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0xB3CAC70)
#define RPG_CLIENT_UIADVENTUREMINIMAP__ONUISWITCHHANDGAMEGESTURECHANGED_OFFSET UNITYSDK_OFFSET(0xB3CABD0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHALLSBUMAPICONNAVIICONS_OFFSET UNITYSDK_OFFSET(0xB3C51D0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHICONS_OFFSET UNITYSDK_OFFSET(0xB3C1450)
#define RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHLAYER_OFFSET UNITYSDK_OFFSET(0xB3BF860)
#define RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHLIMITAREA_OFFSET UNITYSDK_OFFSET(0xB3C49F0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHNAVIICONS_OFFSET UNITYSDK_OFFSET(0xB3C9D50)
#define RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHPLAYERPANEL_OFFSET UNITYSDK_OFFSET(0xB3C58F0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHSECTIONS_OFFSET UNITYSDK_OFFSET(0xB3BFED0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__RESETSECTIONBOUNDS_OFFSET UNITYSDK_OFFSET(0xB3C5080)
#define RPG_CLIENT_UIADVENTUREMINIMAP__SETMAPROTATION_OFFSET UNITYSDK_OFFSET(0xB3BF470)
#define RPG_CLIENT_UIADVENTUREMINIMAP__SETUPMAPVIEW_OFFSET UNITYSDK_OFFSET(0xB3C54A0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__TICKSECTIONANIM_OFFSET UNITYSDK_OFFSET(0xB3C4BD0)
#define RPG_CLIENT_UIADVENTUREMINIMAP__TRYGETMAZEINFO_OFFSET UNITYSDK_OFFSET(0xB3C5300)
#define RPG_CLIENT_UIADVENTUREMINIMAP__TRYGETSUBMAPICON_OFFSET UNITYSDK_OFFSET(0xB3C75F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_TypeDefinitionIndex = 63663;

	class UIAdventureMinimap : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateUIAdventureMinimapMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(UIAdventureMinimap_TypeDefinitionIndex)->GetStaticField(0x29230);
		}
		::System::Boolean _IsIn3DMap; // 0x18
		::System::Boolean _IsMapViewActive; // 0x19
		::System::Single Scale; // 0x1C
		::System::Single ClippingSize; // 0x20
		::System::Single PlayerCameraDirectionOffset; // 0x24
		::System::Single SectionAnimDuration; // 0x28
		::UnityEngine::AnimationCurve* SectionAnimCurve; // 0x30
		::System::Single ClipEdgeRadius; // 0x38
		::System::Boolean EnableBackgroundClip; // 0x3C
		::UnityEngine::GameObject* LimitAreaPrefab; // 0x40
		::UnityEngine::GameObject* SubMapEntryPrefab; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::UIAdventureMinimap_SectionAnimInstance>* _SectionAnimInstances; // 0x50
		::System::Int32 _UsedSectionImageIdx; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::UIAdventureMinimap_SectionInstance*>* _SectionInstances; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::UIAdventureMinimap_IconCircle*>* _Circles; // 0x68
		::RPG::Client::MiniMapLimitArea* _LimitArea; // 0x70
		::UnityEngine::Vector2 _SectionBoundMin; // 0x78
		::UnityEngine::Vector2 _SectionBoundMax; // 0x80
		::UnityEngine::Vector2 _SectionUnloadBoundMin; // 0x88
		::UnityEngine::Vector2 _SectionUnloadBoundMax; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::UIAdventureMinimap_SectionHandle>* _ViewableSections; // 0x98
		::System::Int32 _ActivedIconNum; // 0xA0
		::System::Int32 _UnmaskedIconNum; // 0xA4
		::System::Collections::Generic::List_1<::RPG::Client::UIAdventureMinimap_Icon*>* _UsableIcons; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIAdventureMinimap_SubMapIcon*>* _SubMapIcons; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _SubMapIconIDs; // 0xB8
		::System::Collections::Generic::List_1<::System::Single>* _IconRadiusLUT; // 0xC0
		::Class_1_43B508F64DA705FE* _AssetLoader; // 0xC8
		::RPG::Client::UIAdventureMinimap_InstancedLayer* _CurrentLayer; // 0xD0
		::System::Collections::Generic::List_1<::RPG::Client::UIAdventureMinimap_InstancedLayer*>* _InstancedLayers; // 0xD8
		::UnityEngine::RectTransform* _PlayerFootprintNode; // 0xE0
		::UnityEngine::RectTransform* _MapRootNode; // 0xE8
		::UnityEngine::RectTransform* _UnmaskedRoot; // 0xF0
		::UnityEngine::RectTransform* _UnmaskedIconRootNode; // 0xF8
		::UnityEngine::RectTransform* _IconRootNode; // 0x100
		::UnityEngine::RectTransform* _SubMapIconRootNode; // 0x108
		::UnityEngine::RectTransform* _PlayerIcon; // 0x110
		::UnityEngine::RectTransform* _PlayerCameraIcon; // 0x118
		::Class_1_017642E048A94394* _PlayerTrack; // 0x120
		::RPG::Client::NavMap::SubNavMapData* _CurSubNavMapData; // 0x128
		::System::Boolean _IsAdventurePhaseEntered; // 0x130
		::System::Boolean _NeedRefredSectionsByRogue; // 0x131
		::System::Boolean _NeedRefreshSectionsByFSV; // 0x132
		::System::Boolean _NeedRefreshSectionsByLayer; // 0x133
		::UnityEngine::GameObject* _CirclePrefab; // 0x138
		::UnityEngine::GameObject* _BackgroundPrefab; // 0x140
		::UnityEngine::GameObject* _MissionEffectPrefab; // 0x148
		::UnityEngine::GameObject* _MappingInfoEffectPrefab; // 0x150
		::UnityEngine::GameObject* _MapSymbolFloorPrefab; // 0x158
		::UnityEngine::GameObject* _RotationGameObject; // 0x160
		::System::Int32 _CurrentPlayerLayer; // 0x168
		::System::Int32 _CurrentMapLayerCount; // 0x16C
		::System::Int32 _CurrentMapShowLayer; // 0x170
		::Il2CppArray<::System::UInt32>* _RogueRoomSections; // 0x178
		::UnityEngine::Color _Color; // 0x180
		::System::Single _ViewableRadiusOffset; // 0x190
		::RPG::Client::MapDef* _MapDef; // 0x198
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UseTiledTypeIconIDs; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_AWAKE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_LATEUPDATE_OFFSET))(this);
		}

		::System::Void AdventurePhaseEntered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ADVENTUREPHASEENTERED_OFFSET))(this);
		}

		::UnityEngine::Vector3 _CalcPlayerPos(::UnityEngine::Transform* playerTransform)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CALCPLAYERPOS_OFFSET))(this, playerTransform);
		}

		::System::Void _OnSectionUnlock(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONSECTIONUNLOCK_OFFSET))(this, userParam);
		}

		::System::Void _OnMiniMapSectionFsvChange(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONMINIMAPSECTIONFSVCHANGE_OFFSET))(this, userParam);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnMazeMapInfoUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONMAZEMAPINFOUPDATED_OFFSET))(this, arg);
		}

		::System::Void _AdventurePhaseEntered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ADVENTUREPHASEENTERED_OFFSET))(this);
		}

		::System::Void _OnEnterNextRogueRoom(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONENTERNEXTROGUEROOM_OFFSET))(this, arg);
		}

		::System::Void _OnMapEnter3DArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONMAPENTER3DAREA_OFFSET))(this);
		}

		::System::Void _OnMapExit3DArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONMAPEXIT3DAREA_OFFSET))(this);
		}

		::System::Void _RefreshLayer(::RPG::Client::MiniMapLayer* pLayer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHLAYER_OFFSET))(this, pLayer);
		}

		::System::Boolean _CheckNeedChange2DMap(::RPG::Client::NavMap::SubNavMapData* oldSubMap, ::RPG::Client::NavMap::SubNavMapData* newSubMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CHECKNEEDCHANGE2DMAP_OFFSET))(this, oldSubMap, newSubMap);
		}

		::System::Boolean _IsShowMainMap(::RPG::Client::NavMap::SubNavMapData* playerLocatedSubMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ISSHOWMAINMAP_OFFSET))(this, playerLocatedSubMap);
		}

		::System::Void _DestroyLayer(::System::Int32 iLayerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__DESTROYLAYER_OFFSET))(this, iLayerIdx);
		}

		::System::Void _RefreshSections(::System::Single fScale, ::UnityEngine::Vector3 vMapCenter, ::RPG::Client::MiniMapLayer* pLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::RPG::Client::MiniMapLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHSECTIONS_OFFSET))(this, fScale, vMapCenter, pLayer);
		}

		::RPG::Client::UIAdventureMinimap_SectionInstance* _CreateSectionInstance(::System::Int32 zoneid, ::System::Int32 idx, ::System::Boolean clipSection)
		{
			return ((::RPG::Client::UIAdventureMinimap_SectionInstance*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CREATESECTIONINSTANCE_OFFSET))(this, zoneid, idx, clipSection);
		}

		::System::Void _InstantiateZone(::RPG::Client::MiniMapZone* zone, ::RPG::Client::UIAdventureMinimap_InstancedLayer* parentLayer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::RPG::Client::UIAdventureMinimap_InstancedLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__INSTANTIATEZONE_OFFSET))(this, zone, parentLayer);
		}

		::System::Void _ClearSections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CLEARSECTIONS_OFFSET))(this);
		}

		::System::Void _ResetSectionBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__RESETSECTIONBOUNDS_OFFSET))(this);
		}

		::UnityEngine::RectTransform* _FindZoneInstance(::System::Int32 id)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__FINDZONEINSTANCE_OFFSET))(this, id);
		}

		::System::Void _FillSectionAnimImageIdx(::System::Int32 zoneID, ::System::Int32 sectionIdx, ::System::Int32 imageIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__FILLSECTIONANIMIMAGEIDX_OFFSET))(this, zoneID, sectionIdx, imageIdx);
		}

		::System::Void _TickSectionAnim(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__TICKSECTIONANIM_OFFSET))(this, deltaTime);
		}

		::System::Boolean _IsInViewableSections(::UnityEngine::Vector3 position, ::System::Int32 iconHash, ::System::Boolean iconStatic, ::System::Int32 iconLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ISINVIEWABLESECTIONS_OFFSET))(this, position, iconHash, iconStatic, iconLayer);
		}

		::System::Boolean _IsSectionVisibleInRogue(::System::UInt32 sectionId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ISSECTIONVISIBLEINROGUE_OFFSET))(this, sectionId);
		}

		::System::Boolean _IsTrackingCircleShowByArea(::Class_0_16E4307DCC419505_598* iconObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ISTRACKINGCIRCLESHOWBYAREA_OFFSET))(this, iconObject);
		}

		::System::Void _RefreshIcons(::System::Single fScale, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_598*>* iconObjects, ::UnityEngine::Transform* pPlayerTransform, ::UnityEngine::Vector3 vCentral, ::UnityEngine::Vector3 vPlayerPosInMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_598*>*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHICONS_OFFSET))(this, fScale, iconObjects, pPlayerTransform, vCentral, vPlayerPosInMap);
		}

		::RPG::Client::UIAdventureMinimap_Icon* _NextIcon(::System::Boolean bMasked, ::System::Int32 start, ::System::Int32 max, ::System::Int32& usedNum)
		{
			return ((::RPG::Client::UIAdventureMinimap_Icon*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__NEXTICON_OFFSET))(this, bMasked, start, max, usedNum);
		}

		::System::Void _ActiveIcon(::RPG::Client::UIAdventureMinimap_Icon* icon, ::RPG::Client::UIAdventureMinimap_TrackEffectType trackEffectType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIAdventureMinimap_Icon*, ::RPG::Client::UIAdventureMinimap_TrackEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ACTIVEICON_OFFSET))(this, icon, trackEffectType);
		}

		::System::Void _DeactiveIcon(::RPG::Client::UIAdventureMinimap_Icon* icon)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIAdventureMinimap_Icon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__DEACTIVEICON_OFFSET))(this, icon);
		}

		::RPG::Client::UIAdventureMinimap_SubMapIcon* _TryGetSubMapIcon(::Class_0_16E4307DCC419505_598* iconObject)
		{
			return ((::RPG::Client::UIAdventureMinimap_SubMapIcon*(*)(::PVOID, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__TRYGETSUBMAPICON_OFFSET))(this, iconObject);
		}

		::System::Void _LoadIconImage(::RPG::Client::UIAdventureMinimap_Icon* icon, ::System::UInt32 iconID, ::Class_0_16E4307DCC419505_598* iconObject)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIAdventureMinimap_Icon*, ::System::UInt32, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__LOADICONIMAGE_OFFSET))(this, icon, iconID, iconObject);
		}

		::System::Boolean _IsUseTileTypeIcon(::System::UInt32 iconID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ISUSETILETYPEICON_OFFSET))(this, iconID);
		}

		::System::Boolean _ClipIcon(::Class_0_16E4307DCC419505_598* icon, ::UnityEngine::Vector3 deltaPos, ::System::Single fClippingHalfSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_598*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CLIPICON_OFFSET))(this, icon, deltaPos, fClippingHalfSize);
		}

		::System::Void _ActiveTrackingEffect(::RPG::Client::UIAdventureMinimap_Icon* icon, ::RPG::Client::UIAdventureMinimap_TrackEffectType trackEffectType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIAdventureMinimap_Icon*, ::RPG::Client::UIAdventureMinimap_TrackEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ACTIVETRACKINGEFFECT_OFFSET))(this, icon, trackEffectType);
		}

		::RPG::Client::UIAdventureMinimap_IconCircle* _CreateCircle()
		{
			return ((::RPG::Client::UIAdventureMinimap_IconCircle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CREATECIRCLE_OFFSET))(this);
		}

		::System::Void _SetMapRotation(::System::Single rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__SETMAPROTATION_OFFSET))(this, rotation);
		}

		::UnityEngine::Quaternion _Calc2DRotation(::UnityEngine::Transform* pTarget, ::System::Single fOffset)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CALC2DROTATION_OFFSET))(this, pTarget, fOffset);
		}

		::UnityEngine::Quaternion _Calc2DRotation_1(::System::Single fEularY3D)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CALC2DROTATION_1_OFFSET))(this, fEularY3D);
		}

		::System::Boolean _OnAsyncLoadSprite(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONASYNCLOADSPRITE_OFFSET))(this, assetOpt);
		}

		::System::Void _RefreshLimitArea(::UnityEngine::Transform* current)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHLIMITAREA_OFFSET))(this, current);
		}

		::System::Void _SetupMapView(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__SETUPMAPVIEW_OFFSET))(this, isActive);
		}

		::System::Void _TryGetMazeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__TRYGETMAZEINFO_OFFSET))(this);
		}

		::System::Void _OnUISwitchHandGameGestureChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONUISWITCHHANDGAMEGESTURECHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, arg);
		}

		::System::Void _RefreshPlayerPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHPLAYERPANEL_OFFSET))(this);
		}

		::System::Void _OnRefreshAllSbuMapIconNaviIcons(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__ONREFRESHALLSBUMAPICONNAVIICONS_OFFSET))(this, arg);
		}

		::System::Void _RefreshAllSbuMapIconNaviIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHALLSBUMAPICONNAVIICONS_OFFSET))(this);
		}

		::System::Void _RefreshNaviIcons(::System::Int32 subMapID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__REFRESHNAVIICONS_OFFSET))(this, subMapID);
		}

		::System::String* _GetNaviIconPath(::System::Int32 subMapID, ::System::Boolean isShowTransportIcon, ::System::UInt32 iconID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__GETNAVIICONPATH_OFFSET))(this, subMapID, isShowTransportIcon, iconID);
		}

		::System::Boolean IsUseFiveDimCompleteIcon(::System::Int32 subMapID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_ISUSEFIVEDIMCOMPLETEICON_OFFSET))(this, subMapID);
		}

		::System::Boolean _CheckIsShowPlayerIconBySubMap(::System::Int32 subMapID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWPLAYERICONBYSUBMAP_OFFSET))(this, subMapID);
		}

		::System::Boolean _CheckIsShowTransportIconBySubMap(::System::Int32 subMapID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWTRANSPORTICONBYSUBMAP_OFFSET))(this, subMapID);
		}

		::RPG::Client::NavMap::ISubNavMap* GetSubNavMapData(::System::UInt32 subMapID)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_GETSUBNAVMAPDATA_OFFSET))(this, subMapID);
		}

		::System::Boolean _CheckIsShowTraceMissionIconBySubMap(::System::Int32 subMapID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWTRACEMISSIONICONBYSUBMAP_OFFSET))(this, subMapID);
		}

		::System::Boolean _CheckIsShowTraceMappingInfoIconBySubMap(::System::Int32 subMapID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWTRACEMAPPINGINFOICONBYSUBMAP_OFFSET))(this, subMapID);
		}

		::System::Boolean _CheckIsShowChestIconIconBySubMap(::System::Int32 subMapID, ::System::String*& chestIconPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CHECKISSHOWCHESTICONICONBYSUBMAP_OFFSET))(this, subMapID, chestIconPath);
		}

		::System::Boolean _CheckMinimapSectionVisible(::RPG::Client::MiniMapZone* zone, ::RPG::GameCore::LevelMinimapSection* section)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__CHECKMINIMAPSECTIONVISIBLE_OFFSET))(this, zone, section);
		}

		::System::Void _DestroyInstancedLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP__DESTROYINSTANCEDLAYER_OFFSET))(this);
		}

		::System::Boolean get__IsPlayerInHideArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_GET__ISPLAYERINHIDEAREA_OFFSET))(this);
		}
	};
}
