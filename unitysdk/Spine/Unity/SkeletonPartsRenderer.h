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

#define SPINE_UNITY_SKELETONPARTSRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x168C4680)
#define SPINE_UNITY_SKELETONPARTSRENDERER_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x168C4780)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x168C4660)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHGENERATOR_OFFSET UNITYSDK_OFFSET(0x168C4430)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x168C4640)
#define SPINE_UNITY_SKELETONPARTSRENDERER_LAZYINTIALIZE_OFFSET UNITYSDK_OFFSET(0x168C4450)
#define SPINE_UNITY_SKELETONPARTSRENDERER_NEWPARTSRENDERERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x168C52B0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x168C4700)
#define SPINE_UNITY_SKELETONPARTSRENDERER_RENDERPARTS_OFFSET UNITYSDK_OFFSET(0x168C47B0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x168C5270)
#define SPINE_UNITY_SKELETONPARTSRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x168C54C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonPartsRenderer_TypeDefinitionIndex = 42239;

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

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonPartsRenderer_SkeletonPartsRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		::System::Void LazyIntialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_LAZYINTIALIZE_OFFSET))(this);
		}

		::System::Void ClearMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_CLEARMESH_OFFSET))(this);
		}

		::System::Void RenderParts(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_RENDERPARTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SETPROPERTYBLOCK_OFFSET))(this, a1);
		}

		static ::Spine::Unity::SkeletonPartsRenderer* NewPartsRendererGameObject(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::Spine::Unity::SkeletonPartsRenderer*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_NEWPARTSRENDERERGAMEOBJECT_OFFSET))(a1, a2, a3);
		}
	};
}
