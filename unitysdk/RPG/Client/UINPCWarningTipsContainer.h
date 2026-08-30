#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UINPCWarningTipsContainer_WaypointStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class NPCWarningTipConfig; }
namespace RPG::Client { class UIAdventureWaypointsSafeZone; }
namespace RPG::Client { class UINPCWarningTipsContainer_Waypoint; }
namespace RPG::Client { class UINPCWarningTipsContainer_WaypointPool; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE38CBA0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE38C7A0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_REFRESH_OFFSET UNITYSDK_OFFSET(0xE38E130)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_SETCACHEANIMTIME_OFFSET UNITYSDK_OFFSET(0xE38F3A0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_SETCACHESTATUS_OFFSET UNITYSDK_OFFSET(0xE38F300)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_START_OFFSET UNITYSDK_OFFSET(0xE38C520)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xE38F920)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__DESTORYWAYPOINT_OFFSET UNITYSDK_OFFSET(0xE38D870)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__DOLOADWARINGPREFAB_OFFSET UNITYSDK_OFFSET(0xE38F450)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__LOADWARINGPREFAB_OFFSET UNITYSDK_OFFSET(0xE38C6C0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__ONALLINTERNALRESOURCEREADY_OFFSET UNITYSDK_OFFSET(0xE38F5A0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__ONMAZEMONSTERATTACK_OFFSET UNITYSDK_OFFSET(0xE38F770)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__SPAWNWAYPOINT_OFFSET UNITYSDK_OFFSET(0xE38EB90)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER___DOLOADWARINGPREFAB_B__7_0_OFFSET UNITYSDK_OFFSET(0xE38FAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int UINPCWarningTipsContainer_TypeDefinitionIndex = 69068;

	class UINPCWarningTipsContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIAdventureWaypointsSafeZone* SafeZone; // 0x18
		::System::String* _PrefabPath; // 0x20
		::UnityEngine::RectTransform* _CanvasRect; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::UINPCWarningTipsContainer_Waypoint*>* _ActiveWaypoints; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::UINPCWarningTipsContainer_WaypointPool*>* _WaypointPools; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::NPCWarningTipConfig*>* _ToAddList; // 0x40
		::RPG::Client::IAssetOperation* _PrefabLoadOpration; // 0x48
		::RPG::Client::GamePlayLockTargetFunc* _PlayerControl; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _StatusCacheQueue; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::Client::UINPCWarningTipsContainer_WaypointStatus>* _StatusCacheDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Single>* _AnimTimeCacheDict; // 0x68
		::System::Boolean _AllInternalResourcesReady; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::NPCWarningTipConfig*>* _LastRefreshWaypointConfigs; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Refresh(::System::Collections::Generic::List_1<::RPG::Client::NPCWarningTipConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NPCWarningTipConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_REFRESH_OFFSET))(this, a1);
		}

		::System::Void SetCacheStatus(::RPG::GameCore::GameEntity* a1, ::RPG::Client::UINPCWarningTipsContainer_WaypointStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::UINPCWarningTipsContainer_WaypointStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_SETCACHESTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void SetCacheAnimTime(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_SETCACHEANIMTIME_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadWaringPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__LOADWARINGPREFAB_OFFSET))(this);
		}

		::System::Void _DoLoadWaringPrefab(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__DOLOADWARINGPREFAB_OFFSET))(this, a1);
		}

		::System::Void _OnAllInternalResourceReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__ONALLINTERNALRESOURCEREADY_OFFSET))(this);
		}

		::RPG::Client::UINPCWarningTipsContainer_Waypoint* _SpawnWaypoint(::System::String* a1)
		{
			return ((::RPG::Client::UINPCWarningTipsContainer_Waypoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__SPAWNWAYPOINT_OFFSET))(this, a1);
		}

		::System::Void _DestoryWaypoint(::RPG::Client::UINPCWarningTipsContainer_Waypoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UINPCWarningTipsContainer_Waypoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__DESTORYWAYPOINT_OFFSET))(this, a1);
		}

		::System::Void _OnMazeMonsterAttack(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER__ONMAZEMONSTERATTACK_OFFSET))(this, a1);
		}

		::System::Boolean __DoLoadWaringPrefab_b__7_0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER___DOLOADWARINGPREFAB_B__7_0_OFFSET))(this, a1);
		}
	};
}
