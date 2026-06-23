#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class MeshGenerator; }
namespace Spine::Unity { class MeshRendererBuffers; }
namespace Spine::Unity { class SkeletonPartsRenderer_SkeletonPartsRendererDelegate; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONPARTSRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1AD3C8F0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1AD3CA00)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x1AD3C8D0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHGENERATOR_OFFSET UNITYSDK_OFFSET(0x1AD3C680)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD3C8B0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_LAZYINTIALIZE_OFFSET UNITYSDK_OFFSET(0x1AD3C6A0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_NEWPARTSRENDERERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AD3D960)
#define SPINE_UNITY_SKELETONPARTSRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AD3C9F0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1AD3C970)
#define SPINE_UNITY_SKELETONPARTSRENDERER_RENDERPARTS_OFFSET UNITYSDK_OFFSET(0x1AD3CA30)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1AD3D920)
#define SPINE_UNITY_SKELETONPARTSRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3DC30)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonPartsRenderer_TypeDefinitionIndex = 39467;

	class SkeletonPartsRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x18
		::UnityEngine::MeshRenderer* meshRenderer; // 0x20
		::UnityEngine::MeshFilter* meshFilter; // 0x28
		::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate* OnMeshAndMaterialsUpdated; // 0x30
		::Spine::Unity::MeshRendererBuffers* buffers; // 0x38
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER__CTOR_OFFSET))(this);
		}

		::Spine::Unity::MeshGenerator* get_MeshGenerator()
		{
			return ((::Spine::Unity::MeshGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHGENERATOR_OFFSET))(this);
		}

		::UnityEngine::MeshRenderer* get_MeshRenderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_MeshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHFILTER_OFFSET))(this);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::System::Void LazyIntialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_LAZYINTIALIZE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_CLEARMESH_OFFSET))(this);
		}

		::System::Void RenderParts(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* instructions, ::System::Int32 startSubmesh, ::System::Int32 endSubmesh)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_RENDERPARTS_OFFSET))(this, instructions, startSubmesh, endSubmesh);
		}

		::System::Void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* block)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SETPROPERTYBLOCK_OFFSET))(this, block);
		}

		static ::Spine::Unity::SkeletonPartsRenderer* NewPartsRendererGameObject(::UnityEngine::Transform* parent, ::System::String* name, ::System::Int32 sortingOrder)
		{
			return ((::Spine::Unity::SkeletonPartsRenderer*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_NEWPARTSRENDERERGAMEOBJECT_OFFSET))(parent, name, sortingOrder);
		}
	};
}
