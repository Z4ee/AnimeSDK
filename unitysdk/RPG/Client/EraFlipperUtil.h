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

#define RPG_CLIENT_ERAFLIPPERUTIL_COMPARECONFIGTAG_OFFSET UNITYSDK_OFFSET(0x17CE3220)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPAREENTITYERATAG_OFFSET UNITYSDK_OFFSET(0x17CE3100)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPAREGROUPTAG_OFFSET UNITYSDK_OFFSET(0x17CE1210)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_1_OFFSET UNITYSDK_OFFSET(0x17CE2F10)
#define RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x17CE3290)
#define RPG_CLIENT_ERAFLIPPERUTIL_CURRENTERASTATETOTSCSTATE_OFFSET UNITYSDK_OFFSET(0x17CE16C0)
#define RPG_CLIENT_ERAFLIPPERUTIL_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0x17CE2A60)
#define RPG_CLIENT_ERAFLIPPERUTIL_FILLPARTIALDEVICEPOINTATINFO_OFFSET UNITYSDK_OFFSET(0x17CE26C0)
#define RPG_CLIENT_ERAFLIPPERUTIL_GETFLOORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x17CE2580)
#define RPG_CLIENT_ERAFLIPPERUTIL_HASANYFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x17CE28C0)
#define RPG_CLIENT_ERAFLIPPERUTIL_HASFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x17CE2990)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISCURRENTREGION_OFFSET UNITYSDK_OFFSET(0x17CE3440)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISFLIPSTATESAMEWITHFLOORDEFAULT_OFFSET UNITYSDK_OFFSET(0x17CE3370)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPCOLLIDERACTIVE_OFFSET UNITYSDK_OFFSET(0x17CE1710)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLEALWAYS_OFFSET UNITYSDK_OFFSET(0x17CE1380)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_1_OFFSET UNITYSDK_OFFSET(0x17CE2F90)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_OFFSET UNITYSDK_OFFSET(0x17CDF3A0)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISMAPINFOVISIBLE_OFFSET UNITYSDK_OFFSET(0x17CE2C20)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISPARTIALDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x17CE2B90)
#define RPG_CLIENT_ERAFLIPPERUTIL_ISVISIBLEALWAYS_OFFSET UNITYSDK_OFFSET(0x17CE2D40)
#define RPG_CLIENT_ERAFLIPPERUTIL_REVERSESTATE_OFFSET UNITYSDK_OFFSET(0x17CDD650)
#define RPG_CLIENT_ERAFLIPPERUTIL_RUNTIMEPARTIALDEVICEPOINTATMAPPINGPROPS_OFFSET UNITYSDK_OFFSET(0x17CE2630)
#define RPG_CLIENT_ERAFLIPPERUTIL_SETTARGETNAVANDCOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x17CE36F0)
#define RPG_CLIENT_ERAFLIPPERUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CE3CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperUtil_TypeDefinitionIndex = 57793;

	class EraFlipperUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet__TempColliderList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0x6BE90);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>** StaticGet__TempNavMeshLinkList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0x6BE98);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>** StaticGet__TempNavMeshSurfaceList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0x6BEA0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshObstacle*>** StaticGet__TempNavMeshObstacleList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshObstacle*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperUtil_TypeDefinitionIndex)->GetStaticField(0x6BEA8);
		}
		// static const ::System::String* FloorConfigPath; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL__CCTOR_OFFSET))();
		}

		static ::System::String* GetFloorConfigPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_GETFLOORCONFIGPATH_OFFSET))(a1);
		}

		static ::RPG::GameCore::EraStateType ReverseState(::RPG::GameCore::EraStateType a1)
		{
			return ((::RPG::GameCore::EraStateType(*)(::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_REVERSESTATE_OFFSET))(a1);
		}

		static ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState CurrentEraStateToTscState(::RPG::GameCore::EraStateType a1)
		{
			return ((::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState(*)(::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_CURRENTERASTATETOTSCSTATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* RuntimePartialDevicePointAtMappingProps(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_RUNTIMEPARTIALDEVICEPOINTATMAPPINGPROPS_OFFSET))(a1, a2);
		}

		static ::System::Void FillPartialDevicePointAtInfo(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_FILLPARTIALDEVICEPOINTATINFO_OFFSET))(a1, a2, a3, a4);
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

		static ::System::Boolean IsPartialDeviceActive(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISPARTIALDEVICEACTIVE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMapInfoVisible(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISMAPINFOVISIBLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsVisibleAlways(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::EraStateType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISVISIBLEALWAYS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsGroupVisible(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean IsGroupVisible_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLE_1_OFFSET))(a1);
		}

		static ::System::Boolean CompareEntityEraTag(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPAREENTITYERATAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean CompareGroupTag(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPAREGROUPTAG_OFFSET))(a1);
		}

		static ::System::Boolean CompareConfigTag(::RPG::GameCore::HoyoTagContainer* a1, ::RPG::GameCore::EraStateType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HoyoTagContainer*, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPARECONFIGTAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean CompareTag(::RPG::GameCore::HoyoTagContainer* a1, ::RPG::GameCore::EraStateType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HoyoTagContainer*, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean CompareTag_1(::RPG::GameCore::HoyoTagContainer* a1, ::RPG::Client::EraFlipperManager* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HoyoTagContainer*, ::RPG::Client::EraFlipperManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_COMPARETAG_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsGroupVisibleAlways(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPVISIBLEALWAYS_OFFSET))(a1);
		}

		static ::System::Boolean IsFlipStateSameWithFloorDefault()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISFLIPSTATESAMEWITHFLOORDEFAULT_OFFSET))();
		}

		static ::System::Boolean IsCurrentRegion(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISCURRENTREGION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsGroupColliderActive(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_ISGROUPCOLLIDERACTIVE_OFFSET))(a1, a2);
		}

		static ::System::Void SetTargetNavAndColliderState(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERUTIL_SETTARGETNAVANDCOLLIDERSTATE_OFFSET))(a1, a2);
		}
	};
}
