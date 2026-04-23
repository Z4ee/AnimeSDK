#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EraFlipperManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshLink; }
namespace UnityEngine::AI { class NavMeshObstacle; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define RPG_CLIENT_ERAFLIPPERUTIL_COMPARECONFIGTAG_OFFSET UNITYSDK_OFFSET(0xA2B07E0)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPAREENTITYERATAG_OFFSET UNITYSDK_OFFSET(0xA2B06C0)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPAREGROUPTAG_OFFSET UNITYSDK_OFFSET(0xA2AEB80)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_1_OFFSET UNITYSDK_OFFSET(0xA2B04D0)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_OFFSET UNITYSDK_OFFSET(0xA2B0850)
#define RPG_CLIENT_ERAFLIPPERUTIL_CURRENTERASTATETOTSCSTATE_OFFSET UNITYSDK_OFFSET(0xA2AF030)
#define RPG_CLIENT_ERAFLIPPERUTIL_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0xA2B00D0)
#define RPG_CLIENT_ERAFLIPPERUTIL_FILLPARTIALDEVICEPOINTATINFO_OFFSET UNITYSDK_OFFSET(0xA2AFC80)
#define RPG_CLIENT_ERAFLIPPERUTIL_GETFLOORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA2AFB40)
#define RPG_CLIENT_ERAFLIPPERUTIL_HASANYFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0xA2AFF30)
#define RPG_CLIENT_ERAFLIPPERUTIL_HASFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0xA2B0000)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISCURRENTREGION_OFFSET UNITYSDK_OFFSET(0xA2B0A00)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISFLIPSTATESAMEWITHFLOORDEFAULT_OFFSET UNITYSDK_OFFSET(0xA2B0930)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPCOLLIDERACTIVE_OFFSET UNITYSDK_OFFSET(0xA2AF080)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLEALWAYS_OFFSET UNITYSDK_OFFSET(0xA2AECF0)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_1_OFFSET UNITYSDK_OFFSET(0xA2B0550)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_OFFSET UNITYSDK_OFFSET(0xA2ACF50)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISMAPINFOVISIBLE_OFFSET UNITYSDK_OFFSET(0xA2B0280)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISPARTIALDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0xA2B01F0)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISVISIBLEALWAYS_OFFSET UNITYSDK_OFFSET(0xA2B03A0)
#define RPG_CLIENT_ERAFLIPPERUTIL_REVERSESTATE_OFFSET UNITYSDK_OFFSET(0xA2AB280)
#define RPG_CLIENT_ERAFLIPPERUTIL_RUNTIMEPARTIALDEVICEPOINTATMAPPINGPROPS_OFFSET UNITYSDK_OFFSET(0xA2AFBF0)
#define RPG_CLIENT_ERAFLIPPERUTIL_SETTARGETNAVANDCOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0xA2B0CD0)
#define RPG_CLIENT_ERAFLIPPERUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2B1340)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperUtil_TypeDefinitionIndex = 55798;

	class EraFlipperUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>** StaticGet__TempNavMeshLinkList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0xBC40);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshObstacle*>** StaticGet__TempNavMeshObstacleList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshObstacle*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0xBC48);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>** StaticGet__TempNavMeshSurfaceList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0xBC50);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet__TempColliderList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0xBC58);
		}
		// static const ::System::String* FloorConfigPath; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL__CCTOR_OFFSET))();
		}

		static ::System::String* GetFloorConfigPath(::System::UInt32 floorID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_GETFLOORCONFIGPATH_OFFSET))(floorID);
		}

		static ::RPG::GameCore::EraStateType ReverseState(::RPG::GameCore::EraStateType state)
		{
			return ((::RPG::GameCore::EraStateType(*)(::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_REVERSESTATE_OFFSET))(state);
		}

		static ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState CurrentEraStateToTscState(::RPG::GameCore::EraStateType eraState)
		{
			return ((::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState(*)(::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_CURRENTERASTATETOTSCSTATE_OFFSET))(eraState);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* RuntimePartialDevicePointAtMappingProps(::System::UInt32 groupID, ::System::UInt32 propID)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_RUNTIMEPARTIALDEVICEPOINTATMAPPINGPROPS_OFFSET))(groupID, propID);
		}

		static ::System::Void FillPartialDevicePointAtInfo(::System::UInt32 groupID, ::System::UInt32 propID, ::UnityEngine::Vector3& pos, ::System::Single& radius)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_FILLPARTIALDEVICEPOINTATINFO_OFFSET))(groupID, propID, pos, radius);
		}

		static ::System::Boolean HasAnyFollowPlayerDevice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_HASANYFOLLOWPLAYERDEVICE_OFFSET))();
		}

		static ::System::Boolean HasFollowPlayerDevice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_HASFOLLOWPLAYERDEVICE_OFFSET))();
		}

		static ::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> FillFollowingPlayerLightConeInfo()
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET))();
		}

		static ::System::Boolean IsPartialDeviceActive(::System::UInt32 groupID, ::System::UInt32 propID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISPARTIALDEVICEACTIVE_OFFSET))(groupID, propID);
		}

		static ::System::Boolean IsMapInfoVisible(::System::UInt32 groupID, ::System::UInt32 propID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISMAPINFOVISIBLE_OFFSET))(groupID, propID);
		}

		static ::System::Boolean IsVisibleAlways(::RPG::GameCore::RuntimeGroupInfo* group, ::RPG::GameCore::EraStateType state)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISVISIBLEALWAYS_OFFSET))(group, state);
		}

		static ::System::Boolean IsGroupVisible(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_OFFSET))(groupID);
		}

		static ::System::Boolean IsGroupVisible_1(::RPG::GameCore::GameEntity* groupEntity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_1_OFFSET))(groupEntity);
		}

		static ::System::Boolean CompareEntityEraTag(::RPG::GameCore::GameEntity* sourceEntity, ::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPAREENTITYERATAG_OFFSET))(sourceEntity, targetEntity);
		}

		static ::System::Boolean CompareGroupTag(::RPG::GameCore::GameEntity* groupEntity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPAREGROUPTAG_OFFSET))(groupEntity);
		}

		static ::System::Boolean CompareConfigTag(::RPG::GameCore::HoyoTagContainer* container, ::RPG::GameCore::EraStateType stateType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HoyoTagContainer*, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPARECONFIGTAG_OFFSET))(container, stateType);
		}

		static ::System::Boolean CompareTag(::RPG::GameCore::HoyoTagContainer* container, ::RPG::GameCore::EraStateType stateType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HoyoTagContainer*, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_OFFSET))(container, stateType);
		}

		static ::System::Boolean CompareTag_1(::RPG::GameCore::HoyoTagContainer* container, ::RPG::Client::EraFlipperManager* flipperManager)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HoyoTagContainer*, ::RPG::Client::EraFlipperManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_1_OFFSET))(container, flipperManager);
		}

		static ::System::Boolean IsGroupVisibleAlways(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLEALWAYS_OFFSET))(groupID);
		}

		static ::System::Boolean IsFlipStateSameWithFloorDefault()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISFLIPSTATESAMEWITHFLOORDEFAULT_OFFSET))();
		}

		static ::System::Boolean IsCurrentRegion(::System::UInt32 floorID, ::System::UInt32 storyLineID, ::System::Int32 regionID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISCURRENTREGION_OFFSET))(floorID, storyLineID, regionID);
		}

		static ::System::Boolean IsGroupColliderActive(::RPG::GameCore::GameEntity* groupEntity, ::System::Boolean visiblePreCalc)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPCOLLIDERACTIVE_OFFSET))(groupEntity, visiblePreCalc);
		}

		static ::System::Void SetTargetNavAndColliderState(::UnityEngine::Transform* targetGo, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_SETTARGETNAVANDCOLLIDERSTATE_OFFSET))(targetGo, enable);
		}
	};
}
