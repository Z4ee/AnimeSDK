#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RaycastHitInfo.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Embree { class EmbreeWrapper; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define RPG_EMBREE_EMBREEMANAGER_ADDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8DE9CA0)
#define RPG_EMBREE_EMBREEMANAGER_ADDMESH_OFFSET UNITYSDK_OFFSET(0x8DE9F00)
#define RPG_EMBREE_EMBREEMANAGER_ADDSTATICGEOMETRY_OFFSET UNITYSDK_OFFSET(0x8DEA810)
#define RPG_EMBREE_EMBREEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8DE93B0)
#define RPG_EMBREE_EMBREEMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x8DEB650)
#define RPG_EMBREE_EMBREEMANAGER_COMMITSCENE_OFFSET UNITYSDK_OFFSET(0x8DEAAE0)
#define RPG_EMBREE_EMBREEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8DE92D0)
#define RPG_EMBREE_EMBREEMANAGER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x8DE93A0)
#define RPG_EMBREE_EMBREEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8DE9440)
#define RPG_EMBREE_EMBREEMANAGER_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x8DEB350)
#define RPG_EMBREE_EMBREEMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x8DEBAE0)
#define RPG_EMBREE_EMBREEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8DEBA50)
#define RPG_EMBREE_EMBREEMANAGER_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x8DEB210)
#define RPG_EMBREE_EMBREEMANAGER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x8DEAD60)
#define RPG_EMBREE_EMBREEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DEBB70)

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeManager_TypeDefinitionIndex = 43827;

	class EmbreeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Embree::EmbreeManager** StaticGet_instance()
		{
			return (::RPG::Embree::EmbreeManager**)Il2CppClass::FromTypeDefinitionIndex(EmbreeManager_TypeDefinitionIndex)->GetStaticField(0x56930);
		}
		::RPG::Embree::EmbreeWrapper* embreeWrapper; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* meshToGeometryID; // 0x20
		::System::Boolean isInitialized; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER__CTOR_OFFSET))(this);
		}

		static ::RPG::Embree::EmbreeManager* get_Instance()
		{
			return ((::RPG::Embree::EmbreeManager*(*)())((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Boolean Initialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void AddGameObject(::UnityEngine::GameObject* go, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_ADDGAMEOBJECT_OFFSET))(this, go, recursive);
		}

		::System::UInt32 AddMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 transform)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_ADDMESH_OFFSET))(this, mesh, transform);
		}

		::System::Void AddStaticGeometry(::System::String* layerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_ADDSTATICGEOMETRY_OFFSET))(this, layerName);
		}

		::System::Void CommitScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_COMMITSCENE_OFFSET))(this);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo& hitInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo&))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_RAYCAST_OFFSET))(this, origin, direction, maxDistance, hitInfo);
		}

		::System::Boolean Raycast_1(::UnityEngine::Ray ray, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo& hitInfo, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_RAYCAST_1_OFFSET))(this, ray, hitInfo, maxDistance);
		}

		::System::Boolean IsOccluded(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_ISOCCLUDED_OFFSET))(this, origin, direction, maxDistance);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_CLEANUP_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEMANAGER_ONAPPLICATIONQUIT_OFFSET))(this);
		}
	};
}
