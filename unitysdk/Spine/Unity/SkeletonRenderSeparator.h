#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class SkeletonPartsRenderer; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine::Unity { class SkeletonRenderer_SkeletonRendererDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDPARTSRENDERER_OFFSET UNITYSDK_OFFSET(0x1ACD21F0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDTOSKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1ACD1BC0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1ACD1AC0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_CLEARPARTSRENDERERMESHES_OFFSET UNITYSDK_OFFSET(0x1ACD2550)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1ACD1930)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_HANDLERENDER_OFFSET UNITYSDK_OFFSET(0x1ACD2670)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ACD2490)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ACD1E80)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1ACD1B40)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_SET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1ACD1940)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD29B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderSeparator_TypeDefinitionIndex = 41426;

	class SkeletonRenderSeparator : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 DefaultSortingOrderIncrement = 0x5; // 0x0
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::UnityEngine::MeshRenderer* mainMeshRenderer; // 0x20
		::System::Boolean copyPropertyBlock; // 0x28
		::System::Boolean copyMeshRendererFlags; // 0x29
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonPartsRenderer*>* partsRenderers; // 0x30
		::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0x38
		::UnityEngine::MaterialPropertyBlock* copiedBlock; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return ((::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_GET_SKELETONRENDERER_OFFSET))(this);
		}

		::System::Void set_SkeletonRenderer(::Spine::Unity::SkeletonRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_SET_SKELETONRENDERER_OFFSET))(this, a1);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		static ::Spine::Unity::SkeletonRenderSeparator* AddToSkeletonRenderer(::Spine::Unity::SkeletonRenderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::Spine::Unity::SkeletonRenderSeparator*(*)(::Spine::Unity::SkeletonRenderer*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDTOSKELETONRENDERER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::Spine::Unity::SkeletonPartsRenderer* AddPartsRenderer(::System::Int32 a1, ::System::String* a2)
		{
			return ((::Spine::Unity::SkeletonPartsRenderer*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDPARTSRENDERER_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void HandleRender(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_HANDLERENDER_OFFSET))(this, a1);
		}

		::System::Void ClearPartsRendererMeshes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_CLEARPARTSRENDERERMESHES_OFFSET))(this);
		}
	};
}
