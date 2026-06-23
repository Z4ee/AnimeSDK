#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGColliderEnum.h"
#include "unitysdk/FluffyUnderware/DevTools/DuplicateEditorMesh.h"
#include "unitysdk/UnityEngine/MeshColliderCookingOptions.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class PhysicMaterial; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DB0BFF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_COLLIDERMATCHES_OFFSET UNITYSDK_OFFSET(0x1DB09620)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GETNEWMESH_1_OFFSET UNITYSDK_OFFSET(0x1DB0BED0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GETNEWMESH_OFFSET UNITYSDK_OFFSET(0x1DB0BD70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1DB093B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1DB09220)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_ONAFTERPOP_OFFSET UNITYSDK_OFFSET(0x1DB0BC40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_ONBEFOREPUSH_OFFSET UNITYSDK_OFFSET(0x1DB0BB40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DB0C520)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1DB09540)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_REMOVECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1DB0A010)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_UPDATECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1DB0A2B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_USESSHAREDMESH_OFFSET UNITYSDK_OFFSET(0x1DB0C680)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB0CAA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0CA50)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGMeshResource_TypeDefinitionIndex = 38825;

	class CGMeshResource : public ::FluffyUnderware::DevTools::DuplicateEditorMesh
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Mesh*>** StaticGet_UsedMeshes()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(CGMeshResource_TypeDefinitionIndex)->GetStaticField(0x29600);
		}
		// static const ::UnityEngine::MeshColliderCookingOptions EverMeshColliderCookingOptions; // 0x0
		::UnityEngine::MeshRenderer* mRenderer; // 0x30
		::UnityEngine::Collider* mCollider; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE__CCTOR_OFFSET))();
		}

		::UnityEngine::MeshRenderer* get_Renderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GET_RENDERER_OFFSET))(this);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GET_COLLIDER_OFFSET))(this);
		}

		::UnityEngine::Mesh* Prepare()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_PREPARE_OFFSET))(this);
		}

		::System::Boolean ColliderMatches(::FluffyUnderware::Curvy::Generator::CGColliderEnum type)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGColliderEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_COLLIDERMATCHES_OFFSET))(this, type);
		}

		::System::Void RemoveCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_REMOVECOLLIDER_OFFSET))(this);
		}

		::System::Boolean UpdateCollider(::FluffyUnderware::Curvy::Generator::CGColliderEnum mode, ::System::Boolean convex, ::System::Boolean isTrigger, ::UnityEngine::PhysicMaterial* material, ::UnityEngine::MeshColliderCookingOptions meshCookingOptions)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGColliderEnum, ::System::Boolean, ::System::Boolean, ::UnityEngine::PhysicMaterial*, ::UnityEngine::MeshColliderCookingOptions))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_UPDATECOLLIDER_OFFSET))(this, mode, convex, isTrigger, material, meshCookingOptions);
		}

		::System::Void OnBeforePush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_ONBEFOREPUSH_OFFSET))(this);
		}

		::System::Void OnAfterPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_ONAFTERPOP_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* GetNewMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GETNEWMESH_OFFSET))();
		}

		static ::UnityEngine::Mesh* GetNewMesh_1(::UnityEngine::Mesh* oldMesh)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_GETNEWMESH_1_OFFSET))(oldMesh);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_ONDESTROY_OFFSET))(this);
		}

		static ::System::Boolean UsesSharedMesh(::FluffyUnderware::Curvy::Generator::CGMeshResource* meshResource)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::CGMeshResource*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCE_USESSHAREDMESH_OFFSET))(meshResource);
		}
	};
}
