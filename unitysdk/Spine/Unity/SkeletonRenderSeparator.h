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

#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDPARTSRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD3EB30)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDTOSKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD3E370)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1AD3E270)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_CLEARPARTSRENDERERMESHES_OFFSET UNITYSDK_OFFSET(0x1AD3F020)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD3DDF0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_HANDLERENDER_OFFSET UNITYSDK_OFFSET(0x1AD3F1F0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD3EE80)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD3E660)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1AD3E2F0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_SET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD3DE00)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3FC70)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderSeparator_TypeDefinitionIndex = 39469;

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

		::System::Void set_SkeletonRenderer(::Spine::Unity::SkeletonRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_SET_SKELETONRENDERER_OFFSET))(this, value);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		static ::Spine::Unity::SkeletonRenderSeparator* AddToSkeletonRenderer(::Spine::Unity::SkeletonRenderer* skeletonRenderer, ::System::Int32 sortingLayerID, ::System::Int32 extraPartsRenderers, ::System::Int32 sortingOrderIncrement, ::System::Int32 baseSortingOrder, ::System::Boolean addMinimumPartsRenderers)
		{
			return ((::Spine::Unity::SkeletonRenderSeparator*(*)(::Spine::Unity::SkeletonRenderer*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDTOSKELETONRENDERER_OFFSET))(skeletonRenderer, sortingLayerID, extraPartsRenderers, sortingOrderIncrement, baseSortingOrder, addMinimumPartsRenderers);
		}

		::Spine::Unity::SkeletonPartsRenderer* AddPartsRenderer(::System::Int32 sortingOrderIncrement, ::System::String* name)
		{
			return ((::Spine::Unity::SkeletonPartsRenderer*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDPARTSRENDERER_OFFSET))(this, sortingOrderIncrement, name);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void HandleRender(::Spine::Unity::SkeletonRendererInstruction* instruction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_HANDLERENDER_OFFSET))(this, instruction);
		}

		::System::Void ClearPartsRendererMeshes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_CLEARPARTSRENDERERMESHES_OFFSET))(this);
		}
	};
}
