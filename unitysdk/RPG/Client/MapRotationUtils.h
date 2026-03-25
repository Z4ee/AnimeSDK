#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PoseSwitcherType.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MAPROTATIONUTILS_CANPLAYENTITYTRANSITION_OFFSET UNITYSDK_OFFSET(0x9B0C330)
#define RPG_CLIENT_MAPROTATIONUTILS_COMPUTEMAP3DMODELROTATION_OFFSET UNITYSDK_OFFSET(0x9B0D8C0)
#define RPG_CLIENT_MAPROTATIONUTILS_GETROTATABLEREGIONINDEXIGNOREAIRLOCK_OFFSET UNITYSDK_OFFSET(0x9B0C620)
#define RPG_CLIENT_MAPROTATIONUTILS_GETVISIBLEPOSESFROMMAP3DROTATION_OFFSET UNITYSDK_OFFSET(0x9B0D490)
#define RPG_CLIENT_MAPROTATIONUTILS_HASMAPROTATIONENERGY_OFFSET UNITYSDK_OFFSET(0x9B0CB40)
#define RPG_CLIENT_MAPROTATIONUTILS_ISCURRENTROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x9B0C420)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINCURRENTROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x9B0BF30)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINMAPROTATIONVOLUME_OFFSET UNITYSDK_OFFSET(0x9B0CBD0)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x9B0C170)
#define RPG_CLIENT_MAPROTATIONUTILS_ISPOSESWITCHING_OFFSET UNITYSDK_OFFSET(0x9B0CC80)
#define RPG_CLIENT_MAPROTATIONUTILS_ISSTEPONPOSESWITCHER_OFFSET UNITYSDK_OFFSET(0x9B0E190)
#define RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x9B0B510)
#define RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x9B0B2F0)
#define RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_1_OFFSET UNITYSDK_OFFSET(0x9B0D1F0)
#define RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_OFFSET UNITYSDK_OFFSET(0x9B0CE70)
#define RPG_CLIENT_MAPROTATIONUTILS_PROCESSNPCAFTERLOAD_OFFSET UNITYSDK_OFFSET(0x9B0C970)
#define RPG_CLIENT_MAPROTATIONUTILS_SATISFYPOSEPERMANENTGROUPRULE_OFFSET UNITYSDK_OFFSET(0x9B0CA00)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET UNITYSDK_OFFSET(0x9B0CAB0)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZEATTACKTEXT_OFFSET UNITYSDK_OFFSET(0x9B0BE20)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZESKILLTEXT_OFFSET UNITYSDK_OFFSET(0x9B0BD10)
#define RPG_CLIENT_MAPROTATIONUTILS_TELEPORTTOROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x9B0C6B0)
#define RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHALPHA_OFFSET UNITYSDK_OFFSET(0x9B0E200)
#define RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHERTYPE_OFFSET UNITYSDK_OFFSET(0x9B0E340)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDPOSTOICONCANVASPOS_OFFSET UNITYSDK_OFFSET(0x9B0DF90)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_1_OFFSET UNITYSDK_OFFSET(0x9B0D0F0)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_OFFSET UNITYSDK_OFFSET(0x9B0CD60)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_1_OFFSET UNITYSDK_OFFSET(0x9B0B690)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_2_OFFSET UNITYSDK_OFFSET(0x9B0B830)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_3_OFFSET UNITYSDK_OFFSET(0x9B0BA70)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x9B0B400)
#define RPG_CLIENT_MAPROTATIONUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x9B0E3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapRotationUtils_TypeDefinitionIndex = 49074;

	class MapRotationUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 LocalToWorld(::UnityEngine::Vector3 localPosition)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_OFFSET))(localPosition);
		}

		static ::UnityEngine::Vector3 WorldToLocal(::UnityEngine::Vector3 worldPosition)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_OFFSET))(worldPosition);
		}

		static ::UnityEngine::Quaternion LocalToWorld_1(::UnityEngine::Quaternion localRotation)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_1_OFFSET))(localRotation);
		}

		static ::UnityEngine::Quaternion WorldToLocal_1(::UnityEngine::Quaternion worldRotation)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_1_OFFSET))(worldRotation);
		}

		static ::UnityEngine::Vector3 WorldToLocal_2(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 mapOffset, ::UnityEngine::Quaternion mapRotation)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_2_OFFSET))(worldPosition, mapOffset, mapRotation);
		}

		static ::UnityEngine::Quaternion WorldToLocal_3(::UnityEngine::Quaternion worldRotation, ::UnityEngine::Vector3 mapOffset, ::UnityEngine::Quaternion mapRotation)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_3_OFFSET))(worldRotation, mapOffset, mapRotation);
		}

		static ::System::Void ShowPoseSwitchBanMazeSkillText()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZESKILLTEXT_OFFSET))();
		}

		static ::System::Void ShowPoseSwitchBanMazeAttackText()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZEATTACKTEXT_OFFSET))();
		}

		static ::System::Boolean IsInCurrentRotatableRegion(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINCURRENTROTATABLEREGION_OFFSET))(groupID);
		}

		static ::System::Boolean IsInRotatableRegion(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINROTATABLEREGION_OFFSET))(groupID);
		}

		static ::System::Boolean CanPlayEntityTransition(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_CANPLAYENTITYTRANSITION_OFFSET))(entityDef);
		}

		static ::System::Boolean IsCurrentRotatableRegion(::System::UInt32 floorID, ::System::UInt32 storyLineID, ::System::Int32 regionID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISCURRENTROTATABLEREGION_OFFSET))(floorID, storyLineID, regionID);
		}

		static ::System::Void TeleportToRotatableRegion(::System::Int32 regionIndex, ::System::UInt32 anchorGroupID, ::System::UInt32 anchorInstanceID, ::RPG::GameCore::TransitionLoadingType loadingType)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TELEPORTTOROTATABLEREGION_OFFSET))(regionIndex, anchorGroupID, anchorInstanceID, loadingType);
		}

		static ::System::Void ProcessNpcAfterLoad(::RPG::GameCore::GameEntity* entity, ::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_PROCESSNPCAFTERLOAD_OFFSET))(entity, mapNpcDef);
		}

		static ::System::Boolean SatisfyPosePermanentGroupRule(::RPG::GameCore::LevelGroupInfo* groupInfo)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SATISFYPOSEPERMANENTGROUPRULE_OFFSET))(groupInfo);
		}

		static ::System::Boolean ShouldStopMovementSync()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET))();
		}

		static ::System::Int32 GetRotatableRegionIndexIgnoreAirlock()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_GETROTATABLEREGIONINDEXIGNOREAIRLOCK_OFFSET))();
		}

		static ::System::Boolean HasMapRotationEnergy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_HASMAPROTATIONENERGY_OFFSET))();
		}

		static ::System::Boolean IsInMapRotationVolume()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINMAPROTATIONVOLUME_OFFSET))();
		}

		static ::System::Boolean IsPoseSwitching()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISPOSESWITCHING_OFFSET))();
		}

		static ::UnityEngine::Vector3 WorldTo3DMap(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 mapRelativePos, ::UnityEngine::Quaternion mapRelativeRot)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_OFFSET))(worldPosition, mapRelativePos, mapRelativeRot);
		}

		static ::UnityEngine::Vector3 OriginalWorldTo3DMap(::UnityEngine::Vector3 originWorldPosition, ::UnityEngine::Vector3 mapRelativePos, ::UnityEngine::Quaternion mapRelativeRot)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_OFFSET))(originWorldPosition, mapRelativePos, mapRelativeRot);
		}

		static ::UnityEngine::Quaternion WorldTo3DMap_1(::UnityEngine::Quaternion worldRot, ::UnityEngine::Vector3 mapRelativePos, ::UnityEngine::Quaternion mapRelativeRot)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_1_OFFSET))(worldRot, mapRelativePos, mapRelativeRot);
		}

		static ::UnityEngine::Quaternion OriginalWorldTo3DMap_1(::UnityEngine::Quaternion originWorldRot, ::UnityEngine::Vector3 mapRelativePos, ::UnityEngine::Quaternion mapRelativeRot)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_1_OFFSET))(originWorldRot, mapRelativePos, mapRelativeRot);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetVisiblePosesFromMap3DRotation(::UnityEngine::Quaternion map3dRot, ::UnityEngine::Quaternion regionRelativeRot)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_GETVISIBLEPOSESFROMMAP3DROTATION_OFFSET))(map3dRot, regionRelativeRot);
		}

		static ::UnityEngine::Quaternion ComputeMap3DModelRotation(::UnityEngine::Quaternion modelRootRotation, ::RPG::Client::NavMap::NavMap3DIconData* playerIcon)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_COMPUTEMAP3DMODELROTATION_OFFSET))(modelRootRotation, playerIcon);
		}

		static ::UnityEngine::Vector3 WorldPosToIconCanvasPos(::UnityEngine::Vector3 worldPos, ::UnityEngine::RectTransform* canvas)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDPOSTOICONCANVASPOS_OFFSET))(worldPos, canvas);
		}

		static ::System::Boolean IsStepOnPoseSwitcher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISSTEPONPOSESWITCHER_OFFSET))();
		}

		static ::System::Boolean TryGetPoseSwitchAlpha(::System::Single& alpha)
		{
			return ((::System::Boolean(*)(::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHALPHA_OFFSET))(alpha);
		}

		static ::System::Boolean TryGetPoseSwitcherType(::RPG::Client::PoseSwitcherType& type)
		{
			return ((::System::Boolean(*)(::RPG::Client::PoseSwitcherType&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHERTYPE_OFFSET))(type);
		}
	};
}
