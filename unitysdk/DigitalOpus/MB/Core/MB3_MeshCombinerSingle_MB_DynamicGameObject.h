#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BoneAndBindpose.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BoneWeightDataForMesh.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_SerializableIntArray; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1E13E6B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_INITIALIZENEW_OFFSET UNITYSDK_OFFSET(0x1E13E460)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E13E220)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E13E690)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E13E6D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MB_DynamicGameObject_TypeDefinitionIndex = 90636;

	class MB3_MeshCombinerSingle_MB_DynamicGameObject : public ::System::Object
	{
	public:
		::System::Int32 instanceID; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18
		::System::String* name; // 0x20
		::System::Int32 vertIdx; // 0x28
		::System::Int32 blendShapeIdx; // 0x2C
		::System::Int32 numVerts; // 0x30
		::System::Int32 numBlendShapes; // 0x34
		::System::Int32 numBoneWeights; // 0x38
		::System::Boolean isSkinnedMeshWithBones; // 0x3C
		::Il2CppArray<::System::Int32>* indexesOfBonesUsed; // 0x40
		::System::Int32 lightmapIndex; // 0x48
		::UnityEngine::Vector4 lightmapTilingOffset; // 0x4C
		::UnityEngine::Vector3 meshSize; // 0x5C
		::System::Boolean show; // 0x68
		::System::Boolean invertTriangles; // 0x69
		::Il2CppArray<::System::Int32>* submeshTriIdxs; // 0x70
		::Il2CppArray<::System::Int32>* submeshNumTris; // 0x78
		::Il2CppArray<::System::Int32>* targetSubmeshIdxs; // 0x80
		::Il2CppArray<::UnityEngine::Rect>* uvRects; // 0x88
		::Il2CppArray<::UnityEngine::Rect>* encapsulatingRect; // 0x90
		::Il2CppArray<::UnityEngine::Rect>* sourceMaterialTiling; // 0x98
		::Il2CppArray<::UnityEngine::Rect>* obUVRects; // 0xA0
		::Il2CppArray<::System::Int32>* textureArraySliceIdx; // 0xA8
		::Il2CppArray<::UnityEngine::Material*>* sourceSharedMaterials; // 0xB0
		::System::Boolean _initialized; // 0xB8
		::System::Boolean _beingDeleted; // 0xB9
		::UnityEngine::Mesh* _mesh; // 0xC0
		::UnityEngine::Renderer* _renderer; // 0xC8
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>* _tmpSubmeshTris; // 0xD0
		::Il2CppArray<::UnityEngine::Transform*>* _tmpSMR_CachedBones; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _tmpSMR_CachedBindposes; // 0xE0
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BoneAndBindpose>* _tmpSMR_CachedBoneAndBindPose; // 0xE8
		::Il2CppArray<::System::Int32>* _tmpSMR_srcMeshBoneIdx2masterListBoneIdx; // 0xF0
		::Il2CppArray<::UnityEngine::BoneWeight>* _tmpSMR_CachedBoneWeights; // 0xF8
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BoneWeightDataForMesh _tmpSMR_CachedBoneWeightData; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean Initialize(::System::Boolean beingDeleted)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_INITIALIZE_OFFSET))(this, beingDeleted);
		}

		::System::Boolean InitializeNew(::System::Boolean beingDeleted, ::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_INITIALIZENEW_OFFSET))(this, beingDeleted, go);
		}

		::System::Void UnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_UNINITIALIZE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* b)
		{
			return ((::System::Int32(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_DYNAMICGAMEOBJECT_COMPARETO_OFFSET))(this, b);
		}
	};
}
