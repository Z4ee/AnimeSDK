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

#define RPG_CLIENT_MAPROTATIONUTILS_CANPLAYENTITYTRANSITION_OFFSET UNITYSDK_OFFSET(0xD60AF50)
#define RPG_CLIENT_MAPROTATIONUTILS_COMPUTEMAP3DMODELROTATION_OFFSET UNITYSDK_OFFSET(0xD60C500)
#define RPG_CLIENT_MAPROTATIONUTILS_GETROTATABLEREGIONINDEXIGNOREAIRLOCK_OFFSET UNITYSDK_OFFSET(0xD60B230)
#define RPG_CLIENT_MAPROTATIONUTILS_GETVISIBLEPOSESFROMMAP3DROTATION_OFFSET UNITYSDK_OFFSET(0xD60C0A0)
#define RPG_CLIENT_MAPROTATIONUTILS_HASMAPROTATIONENERGY_OFFSET UNITYSDK_OFFSET(0xD60B750)
#define RPG_CLIENT_MAPROTATIONUTILS_ISCURRENTROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xD60B050)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINCURRENTROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xD60AB90)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINMAPROTATIONVOLUME_OFFSET UNITYSDK_OFFSET(0xD60B7E0)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xD60AD90)
#define RPG_CLIENT_MAPROTATIONUTILS_ISPOSESWITCHING_OFFSET UNITYSDK_OFFSET(0xD60B890)
#define RPG_CLIENT_MAPROTATIONUTILS_ISSTEPONPOSESWITCHER_OFFSET UNITYSDK_OFFSET(0xD60CDE0)
#define RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_1_OFFSET UNITYSDK_OFFSET(0xD60A0E0)
#define RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0xD609EC0)
#define RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_1_OFFSET UNITYSDK_OFFSET(0xD60BE00)
#define RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_OFFSET UNITYSDK_OFFSET(0xD60BA80)
#define RPG_CLIENT_MAPROTATIONUTILS_PROCESSNPCAFTERLOAD_OFFSET UNITYSDK_OFFSET(0xD60B580)
#define RPG_CLIENT_MAPROTATIONUTILS_SATISFYPOSEPERMANENTGROUPRULE_OFFSET UNITYSDK_OFFSET(0xD60B610)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET UNITYSDK_OFFSET(0xD60B6C0)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZEATTACKTEXT_OFFSET UNITYSDK_OFFSET(0xD60AA40)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZESKILLTEXT_OFFSET UNITYSDK_OFFSET(0xD60A8F0)
#define RPG_CLIENT_MAPROTATIONUTILS_TELEPORTTOROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xD60B2C0)
#define RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHALPHA_OFFSET UNITYSDK_OFFSET(0xD60CE50)
#define RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHERTYPE_OFFSET UNITYSDK_OFFSET(0xD60CF80)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDPOSTOICONCANVASPOS_OFFSET UNITYSDK_OFFSET(0xD60CBE0)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_1_OFFSET UNITYSDK_OFFSET(0xD60BD00)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_OFFSET UNITYSDK_OFFSET(0xD60B970)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_1_OFFSET UNITYSDK_OFFSET(0xD60A270)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_2_OFFSET UNITYSDK_OFFSET(0xD60A410)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_3_OFFSET UNITYSDK_OFFSET(0xD60A650)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0xD609FD0)
#define RPG_CLIENT_MAPROTATIONUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xD60D020)

namespace RPG::Client
{
	inline static constexpr unsigned int MapRotationUtils_TypeDefinitionIndex = 60691;

	class MapRotationUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 LocalToWorld(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 WorldToLocal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion LocalToWorld_1(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_1_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion WorldToLocal_1(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 WorldToLocal_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion WorldToLocal_3(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowPoseSwitchBanMazeSkillText()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZESKILLTEXT_OFFSET))();
		}

		static ::System::Void ShowPoseSwitchBanMazeAttackText()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZEATTACKTEXT_OFFSET))();
		}

		static ::System::Boolean IsInCurrentRotatableRegion(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINCURRENTROTATABLEREGION_OFFSET))(a1);
		}

		static ::System::Boolean IsInRotatableRegion(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINROTATABLEREGION_OFFSET))(a1);
		}

		static ::System::Boolean CanPlayEntityTransition(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_CANPLAYENTITYTRANSITION_OFFSET))(a1);
		}

		static ::System::Boolean IsCurrentRotatableRegion(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISCURRENTROTATABLEREGION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TeleportToRotatableRegion(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::TransitionLoadingType a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TELEPORTTOROTATABLEREGION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ProcessNpcAfterLoad(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_PROCESSNPCAFTERLOAD_OFFSET))(a1, a2);
		}

		static ::System::Boolean SatisfyPosePermanentGroupRule(::RPG::GameCore::LevelGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SATISFYPOSEPERMANENTGROUPRULE_OFFSET))(a1);
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

		static ::UnityEngine::Vector3 WorldTo3DMap(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 OriginalWorldTo3DMap(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion WorldTo3DMap_1(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion OriginalWorldTo3DMap_1(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetVisiblePosesFromMap3DRotation(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_GETVISIBLEPOSESFROMMAP3DROTATION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion ComputeMap3DModelRotation(::UnityEngine::Quaternion a1, ::RPG::Client::NavMap::NavMap3DIconData* a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_COMPUTEMAP3DMODELROTATION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 WorldPosToIconCanvasPos(::UnityEngine::Vector3 a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDPOSTOICONCANVASPOS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsStepOnPoseSwitcher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISSTEPONPOSESWITCHER_OFFSET))();
		}

		static ::System::Boolean TryGetPoseSwitchAlpha(::System::Single& a1)
		{
			return ((::System::Boolean(*)(::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHALPHA_OFFSET))(a1);
		}

		static ::System::Boolean TryGetPoseSwitcherType(::RPG::Client::PoseSwitcherType& a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PoseSwitcherType&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHERTYPE_OFFSET))(a1);
		}
	};
}
