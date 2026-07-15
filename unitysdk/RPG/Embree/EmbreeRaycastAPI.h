#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeRaycastAPI_Ray.h"
#include "unitysdk/RPG/Embree/EmbreeRaycastAPI_RayHitResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Embree { class EmbreeWrapper; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define RPG_EMBREE_EMBREERAYCASTAPI_ADDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B74EDD0)
#define RPG_EMBREE_EMBREERAYCASTAPI_ADDMESH_OFFSET UNITYSDK_OFFSET(0x1B74ECD0)
#define RPG_EMBREE_EMBREERAYCASTAPI_CALCULATEFRONTFACE_OFFSET UNITYSDK_OFFSET(0x1B74FDA0)
#define RPG_EMBREE_EMBREERAYCASTAPI_COMMITSCENE_OFFSET UNITYSDK_OFFSET(0x1B74F090)
#define RPG_EMBREE_EMBREERAYCASTAPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B750600)
#define RPG_EMBREE_EMBREERAYCASTAPI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B74E9E0)
#define RPG_EMBREE_EMBREERAYCASTAPI_RAYCASTBATCHALL_OFFSET UNITYSDK_OFFSET(0x1B74FDD0)
#define RPG_EMBREE_EMBREERAYCASTAPI_RAYCASTBATCH_OFFSET UNITYSDK_OFFSET(0x1B74F300)
#define RPG_EMBREE_EMBREERAYCASTAPI_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B74F1E0)
#define RPG_EMBREE_EMBREERAYCASTAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B750630)

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeRaycastAPI_TypeDefinitionIndex = 45236;

	class EmbreeRaycastAPI : public ::System::Object
	{
	public:
		::RPG::Embree::EmbreeWrapper* wrapper; // 0x10
		::System::Boolean isInitialized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI__CTOR_OFFSET))(this);
		}

		::System::Boolean Initialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_INITIALIZE_OFFSET))(this);
		}

		::System::UInt32 AddMesh(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_ADDMESH_OFFSET))(this, a1, a2);
		}

		::System::UInt32 AddGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_ADDGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void CommitScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_COMMITSCENE_OFFSET))(this);
		}

		::RPG::Embree::EmbreeRaycastAPI_RayHitResult Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::RPG::Embree::EmbreeRaycastAPI_RayHitResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_RAYCAST_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Embree::EmbreeRaycastAPI_RayHitResult>* RaycastBatch(::Il2CppArray<::RPG::Embree::EmbreeRaycastAPI_Ray>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Embree::EmbreeRaycastAPI_RayHitResult>*(*)(::PVOID, ::Il2CppArray<::RPG::Embree::EmbreeRaycastAPI_Ray>*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_RAYCASTBATCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Embree::EmbreeRaycastAPI_RayHitResult>*>* RaycastBatchAll(::Il2CppArray<::RPG::Embree::EmbreeRaycastAPI_Ray>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Embree::EmbreeRaycastAPI_RayHitResult>*>*(*)(::PVOID, ::Il2CppArray<::RPG::Embree::EmbreeRaycastAPI_Ray>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_RAYCASTBATCHALL_OFFSET))(this, a1, a2);
		}

		::System::Boolean CalculateFrontFace(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_CALCULATEFRONTFACE_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREERAYCASTAPI_DISPOSE_OFFSET))(this);
		}
	};
}
