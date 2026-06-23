#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonGraphic_LayoutMode.h"
#include "unitysdk/Spine/Unity/UpdateMode.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine { class AnimationState; }
namespace Spine { class Skeleton; }
namespace Spine { class SkeletonData; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class MeshGenerator; }
namespace Spine::Unity { class MeshGeneratorDelegate; }
namespace Spine::Unity { class MeshRendererBuffers_SmartMesh; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonGraphic_InstructionDelegate; }
namespace Spine::Unity { class SkeletonGraphic_MeshAssignmentDelegateMultiple; }
namespace Spine::Unity { class SkeletonGraphic_MeshAssignmentDelegateSingle; }
namespace Spine::Unity { class SkeletonGraphic_SkeletonRendererDelegate; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine::Unity { class SkeletonSubmeshGraphic; }
namespace Spine::Unity { class UpdateBonesDelegate; }
namespace Spine::Unity { template <typename T> class DoubleBuffered_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define SPINE_UNITY_SKELETONGRAPHIC_ADDSKELETONGRAPHICCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AD2A320)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2A930)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1AD2A6F0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x1AD2A7F0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLE_OFFSET UNITYSDK_OFFSET(0x1AD2A5F0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1AD2D050)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1AD2CF50)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x1AD2BD80)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1AD2BE80)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x1AD2D490)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x1AD160B0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AD2D350)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1AD2D150)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1AD2D250)
#define SPINE_UNITY_SKELETONGRAPHIC_AFTERANIMATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x1AD2B760)
#define SPINE_UNITY_SKELETONGRAPHIC_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1AD2B6F0)
#define SPINE_UNITY_SKELETONGRAPHIC_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AD22D20)
#define SPINE_UNITY_SKELETONGRAPHIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AD2B190)
#define SPINE_UNITY_SKELETONGRAPHIC_DESTROYMESHES_OFFSET UNITYSDK_OFFSET(0x1AD2D590)
#define SPINE_UNITY_SKELETONGRAPHIC_DISABLEUNUSEDCANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2E420)
#define SPINE_UNITY_SKELETONGRAPHIC_DISPOSEMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x1AD2D750)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSURECANVASRENDERERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD2E560)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSUREMESHESCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD2E930)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSURESEPARATORPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD2EBE0)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSUREUSEDTEXTURESANDMATERIALSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD2EA40)
#define SPINE_UNITY_SKELETONGRAPHIC_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD2B660)
#define SPINE_UNITY_SKELETONGRAPHIC_GETCURRENTRECTSIZE_OFFSET UNITYSDK_OFFSET(0x1AD335A0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETLASTMESH_OFFSET UNITYSDK_OFFSET(0x1AD2BFE0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETLAYOUTSCALE_OFFSET UNITYSDK_OFFSET(0x1AD32350)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1AD2BF80)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMMATERIALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1AD2AA80)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMTEXTUREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1AD2AA70)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AD12D80)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1AD2AC20)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MATERIALSMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2BFC0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHESMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2BFB0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHGENERATOR_OFFSET UNITYSDK_OFFSET(0x1AD2BFA0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHSCALE_OFFSET UNITYSDK_OFFSET(0x1AD2A100)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x1AD2AA90)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SEPARATORPARTS_OFFSET UNITYSDK_OFFSET(0x1AD2A130)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1AD2A0F0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1AD2BD50)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1AD12D40)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_TEXTURESMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2BFD0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1AD2D470)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1AD2A110)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1AD2D450)
#define SPINE_UNITY_SKELETONGRAPHIC_HANDLEONDEMANDLOADING_OFFSET UNITYSDK_OFFSET(0x1AD32BF0)
#define SPINE_UNITY_SKELETONGRAPHIC_HASMULTIPLESUBMESHINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1AD320D0)
#define SPINE_UNITY_SKELETONGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AD16140)
#define SPINE_UNITY_SKELETONGRAPHIC_INITMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x1AD2DD60)
#define SPINE_UNITY_SKELETONGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD2B7E0)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2C2C0)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMSINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x1AD2C0A0)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMWITHBOUNDS_OFFSET UNITYSDK_OFFSET(0x1AD2C020)
#define SPINE_UNITY_SKELETONGRAPHIC_NEWSKELETONGRAPHICGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1AD2A140)
#define SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AD2B910)
#define SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AD2B920)
#define SPINE_UNITY_SKELETONGRAPHIC_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1AD2B8F0)
#define SPINE_UNITY_SKELETONGRAPHIC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AD2B170)
#define SPINE_UNITY_SKELETONGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD2B550)
#define SPINE_UNITY_SKELETONGRAPHIC_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2B2D0)
#define SPINE_UNITY_SKELETONGRAPHIC_PREPARERENDERERGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1AD2F010)
#define SPINE_UNITY_SKELETONGRAPHIC_REAPPLYSEPARATORSLOTNAMES_OFFSET UNITYSDK_OFFSET(0x1AD2B930)
#define SPINE_UNITY_SKELETONGRAPHIC_REBUILD_OFFSET UNITYSDK_OFFSET(0x1AD2B0E0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2A9D0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1AD2A770)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x1AD2A890)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLE_OFFSET UNITYSDK_OFFSET(0x1AD2A670)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1AD2D0D0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1AD2CFD0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x1AD2BE00)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1AD2BF00)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x1AD2D510)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x1AD16030)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AD2D3D0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1AD2D1D0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1AD2D2D0)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1AD2C730)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_1_OFFSET UNITYSDK_OFFSET(0x1AD2CBE0)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET UNITYSDK_OFFSET(0x1AD2CBB0)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x1AD2AAA0)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1AD2BD40)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1AD2D480)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1AD2A120)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1AD2D460)
#define SPINE_UNITY_SKELETONGRAPHIC_SYNCSUBMESHGRAPHICSWITHCANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2AD70)
#define SPINE_UNITY_SKELETONGRAPHIC_TRIMRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD2DB30)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1AD2B6C0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMATERIALSMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD30B40)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x1AD31720)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHSINGLECANVASRENDERER_OFFSET UNITYSDK_OFFSET(0x1AD30050)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHTOINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1AD2B4A0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1AD2C080)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATESEPARATORPARTPARENTS_OFFSET UNITYSDK_OFFSET(0x1AD2BAA0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1AD22F20)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD22E70)
#define SPINE_UNITY_SKELETONGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD23010)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_TypeDefinitionIndex = 39454;

	class SkeletonGraphic : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		// static const ::System::Boolean EditReferenceRect; // 0x0
		// static const ::System::String* SeparatorPartGameObjectName; // 0x0
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0xF8
		::UnityEngine::Material* additiveMaterial; // 0x100
		::UnityEngine::Material* multiplyMaterial; // 0x108
		::UnityEngine::Material* screenMaterial; // 0x110
		::System::String* initialSkinName; // 0x118
		::System::Boolean initialFlipX; // 0x120
		::System::Boolean initialFlipY; // 0x121
		::System::String* startingAnimation; // 0x128
		::System::Boolean startingLoop; // 0x130
		::System::Single timeScale; // 0x134
		::System::Boolean freeze; // 0x138
		::System::Single meshScale; // 0x13C
		::Spine::Unity::SkeletonGraphic_LayoutMode layoutScaleMode; // 0x140
		::UnityEngine::Vector2 referenceSize; // 0x144
		::System::Single referenceScale; // 0x14C
		::Spine::Unity::UpdateMode updateMode; // 0x150
		::Spine::Unity::UpdateMode updateWhenInvisible; // 0x154
		::System::Boolean allowMultipleCanvasRenderers; // 0x158
		::System::Collections::Generic::List_1<::UnityEngine::CanvasRenderer*>* canvasRenderers; // 0x160
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonSubmeshGraphic*>* submeshGraphics; // 0x168
		::System::Int32 usedRenderersCount; // 0x170
		::Il2CppArray<::System::String*>* separatorSlotNames; // 0x178
		::System::Collections::Generic::List_1<::Spine::Slot*>* separatorSlots; // 0x180
		::System::Boolean enableSeparatorSlots; // 0x188
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* separatorParts; // 0x190
		::System::Boolean updateSeparatorPartLocation; // 0x198
		::System::Boolean updateSeparatorPartScale; // 0x199
		::System::Boolean wasUpdatedAfterInit; // 0x19A
		::System::Boolean requiresInstructionUpate; // 0x19B
		::UnityEngine::Texture* baseTexture; // 0x1A0
		::System::Boolean disableMeshAssignmentOnOverride; // 0x1A8
		::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* assignMeshOverrideSingle; // 0x1B0
		::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* assignMeshOverrideMultiple; // 0x1B8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Texture*>* customTextureOverride; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Material*>* customMaterialOverride; // 0x1C8
		::UnityEngine::Texture* overrideTexture; // 0x1D0
		::Spine::Skeleton* skeleton; // 0x1D8
		::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* OnRebuild; // 0x1E0
		::Spine::Unity::SkeletonGraphic_InstructionDelegate* OnInstructionsPrepared; // 0x1E8
		::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0x1F0
		::Spine::AnimationState* state; // 0x1F8
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x200
		::Spine::Unity::DoubleBuffered_1<::Spine::Unity::MeshRendererBuffers_SmartMesh*>* meshBuffers; // 0x208
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x210
		::Spine::ExposedList_1<::UnityEngine::Mesh*>* meshes; // 0x218
		::Spine::ExposedList_1<::UnityEngine::Material*>* usedMaterials; // 0x220
		::Spine::ExposedList_1<::UnityEngine::Texture*>* usedTextures; // 0x228
		::Spine::Unity::ISkeletonAnimationDelegate* OnAnimationRebuild; // 0x230
		::Spine::Unity::UpdateBonesDelegate* BeforeApply; // 0x238
		::Spine::Unity::UpdateBonesDelegate* UpdateLocal; // 0x240
		::Spine::Unity::UpdateBonesDelegate* UpdateWorld; // 0x248
		::Spine::Unity::UpdateBonesDelegate* UpdateComplete; // 0x250
		::Spine::Unity::UpdateTiming updateTiming; // 0x258
		::System::Boolean unscaledTime; // 0x25C
		::Spine::Unity::MeshGeneratorDelegate* OnPostProcessVertices; // 0x260

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::System::Single get_MeshScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHSCALE_OFFSET))(this);
		}

		::Spine::Unity::UpdateMode get_UpdateMode()
		{
			return ((::Spine::Unity::UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::Spine::Unity::UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_SeparatorParts()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SEPARATORPARTS_OFFSET))(this);
		}

		static ::Spine::Unity::SkeletonGraphic* NewSkeletonGraphicGameObject(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::UnityEngine::Transform* parent, ::UnityEngine::Material* material)
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::Spine::Unity::SkeletonDataAsset*, ::UnityEngine::Transform*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_NEWSKELETONGRAPHICGAMEOBJECT_OFFSET))(skeletonDataAsset, parent, material);
		}

		static ::Spine::Unity::SkeletonGraphic* AddSkeletonGraphicComponent(::UnityEngine::GameObject* gameObject, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::UnityEngine::Material* material)
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADDSKELETONGRAPHICCOMPONENT_OFFSET))(gameObject, skeletonDataAsset, material);
		}

		::System::Void add_assignMeshOverrideSingle(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLE_OFFSET))(this, value);
		}

		::System::Void remove_assignMeshOverrideSingle(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLE_OFFSET))(this, value);
		}

		::System::Void add_assignMeshOverrideMultiple(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET))(this, value);
		}

		::System::Void remove_assignMeshOverrideMultiple(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET))(this, value);
		}

		::System::Void add_AssignMeshOverrideSingleRenderer(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET))(this, value);
		}

		::System::Void remove_AssignMeshOverrideSingleRenderer(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET))(this, value);
		}

		::System::Void add_AssignMeshOverrideMultipleRenderers(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET))(this, value);
		}

		::System::Void remove_AssignMeshOverrideMultipleRenderers(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Texture*>* get_CustomTextureOverride()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Texture*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMTEXTUREOVERRIDE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Material*>* get_CustomMaterialOverride()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMMATERIALOVERRIDE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_OverrideTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_OVERRIDETEXTURE_OFFSET))(this);
		}

		::System::Void set_OverrideTexture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_OVERRIDETEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONDESTROY_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REBUILD_OFFSET))(this, update);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void SyncSubmeshGraphicsWithCanvasRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SYNCSUBMESHGRAPHICSWITHCANVASRENDERERS_OFFSET))(this);
		}

		::System::Void UpdateAnimationStatus(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEANIMATIONSTATUS_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_APPLYANIMATION_OFFSET))(this);
		}

		::System::Void AfterAnimationApplied()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_AFTERANIMATIONAPPLIED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnCullStateChanged(::System::Boolean culled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONCULLSTATECHANGED_OFFSET))(this, culled);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::System::Void ReapplySeparatorSlotNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REAPPLYSEPARATORSLOTNAMES_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_Skeleton(::Spine::Skeleton* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_SKELETON_OFFSET))(this, value);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_ISVALID_OFFSET))(this);
		}

		::System::Void add_OnRebuild(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove_OnRebuild(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_OnInstructionsPrepared(::Spine::Unity::SkeletonGraphic_InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONINSTRUCTIONSPREPARED_OFFSET))(this, value);
		}

		::System::Void remove_OnInstructionsPrepared(::Spine::Unity::SkeletonGraphic_InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET))(this, value);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::Spine::AnimationState* get_AnimationState()
		{
			return ((::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_ANIMATIONSTATE_OFFSET))(this);
		}

		::Spine::Unity::MeshGenerator* get_MeshGenerator()
		{
			return ((::Spine::Unity::MeshGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHGENERATOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::UnityEngine::Mesh*>* get_MeshesMultipleCanvasRenderers()
		{
			return ((::Spine::ExposedList_1<::UnityEngine::Mesh*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHESMULTIPLECANVASRENDERERS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::UnityEngine::Material*>* get_MaterialsMultipleCanvasRenderers()
		{
			return ((::Spine::ExposedList_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MATERIALSMULTIPLECANVASRENDERERS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::UnityEngine::Texture*>* get_TexturesMultipleCanvasRenderers()
		{
			return ((::Spine::ExposedList_1<::UnityEngine::Texture*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_TEXTURESMULTIPLECANVASRENDERERS_OFFSET))(this);
		}

		::UnityEngine::Mesh* GetLastMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETLASTMESH_OFFSET))(this);
		}

		::System::Boolean MatchRectTransformWithBounds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMWITHBOUNDS_OFFSET))(this);
		}

		::System::Boolean MatchRectTransformSingleRenderer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMSINGLERENDERER_OFFSET))(this);
		}

		::System::Boolean MatchRectTransformMultipleRenderers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMMULTIPLERENDERERS_OFFSET))(this);
		}

		::System::Void SetRectTransformBounds(::UnityEngine::Bounds combinedBounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMBOUNDS_OFFSET))(this, combinedBounds);
		}

		static ::System::Void SetRectTransformSize(::UnityEngine::UI::Graphic* target, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET))(target, size);
		}

		static ::System::Void SetRectTransformSize_1(::UnityEngine::RectTransform* targetRectTransform, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_1_OFFSET))(targetRectTransform, size);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::Spine::Unity::UpdateTiming get_UpdateTiming()
		{
			return ((::Spine::Unity::UpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATETIMING_OFFSET))(this);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATETIMING_OFFSET))(this, value);
		}

		::System::Boolean get_UnscaledTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UNSCALEDTIME_OFFSET))(this);
		}

		::System::Void set_UnscaledTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UNSCALEDTIME_OFFSET))(this, value);
		}

		::System::Void add_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONPOSTPROCESSVERTICES_OFFSET))(this, value);
		}

		::System::Void remove_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONPOSTPROCESSVERTICES_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_CLEAR_OFFSET))(this);
		}

		::System::Void TrimRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_TRIMRENDERERS_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean overwrite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INITIALIZE_OFFSET))(this, overwrite);
		}

		::System::Void PrepareInstructionsAndRenderers(::System::Boolean isInRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET))(this, isInRebuild);
		}

		::System::Void UpdateMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESH_OFFSET))(this);
		}

		::System::Void UpdateMeshToInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHTOINSTRUCTIONS_OFFSET))(this);
		}

		::System::Boolean HasMultipleSubmeshInstructions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_HASMULTIPLESUBMESHINSTRUCTIONS_OFFSET))(this);
		}

		::System::Void InitMeshBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INITMESHBUFFERS_OFFSET))(this);
		}

		::System::Void DisposeMeshBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DISPOSEMESHBUFFERS_OFFSET))(this);
		}

		::System::Void UpdateMeshSingleCanvasRenderer(::Spine::Unity::SkeletonRendererInstruction* currentInstructions)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHSINGLECANVASRENDERER_OFFSET))(this, currentInstructions);
		}

		::System::Void UpdateMaterialsMultipleCanvasRenderers(::Spine::Unity::SkeletonRendererInstruction* currentInstructions)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMATERIALSMULTIPLECANVASRENDERERS_OFFSET))(this, currentInstructions);
		}

		::System::Void UpdateMeshMultipleCanvasRenderers(::Spine::Unity::SkeletonRendererInstruction* currentInstructions)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHMULTIPLECANVASRENDERERS_OFFSET))(this, currentInstructions);
		}

		::System::Void HandleOnDemandLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_HANDLEONDEMANDLOADING_OFFSET))(this);
		}

		::System::Void EnsureCanvasRendererCount(::System::Int32 targetCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSURECANVASRENDERERCOUNT_OFFSET))(this, targetCount);
		}

		::System::Void PrepareRendererGameObjects(::Spine::Unity::SkeletonRendererInstruction* currentInstructions, ::System::Boolean isInRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_PREPARERENDERERGAMEOBJECTS_OFFSET))(this, currentInstructions, isInRebuild);
		}

		::System::Void DisableUnusedCanvasRenderers(::System::Int32 usedCount, ::System::Boolean isInRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DISABLEUNUSEDCANVASRENDERERS_OFFSET))(this, usedCount, isInRebuild);
		}

		::System::Void EnsureMeshesCount(::System::Int32 targetCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSUREMESHESCOUNT_OFFSET))(this, targetCount);
		}

		::System::Void EnsureUsedTexturesAndMaterialsCount(::System::Int32 targetCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSUREUSEDTEXTURESANDMATERIALSCOUNT_OFFSET))(this, targetCount);
		}

		::System::Void DestroyMeshes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DESTROYMESHES_OFFSET))(this);
		}

		::System::Void EnsureSeparatorPartCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSURESEPARATORPARTCOUNT_OFFSET))(this);
		}

		::System::Void UpdateSeparatorPartParents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATESEPARATORPARTPARENTS_OFFSET))(this);
		}

		::System::Single GetLayoutScale(::Spine::Unity::SkeletonGraphic_LayoutMode mode)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_LayoutMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETLAYOUTSCALE_OFFSET))(this, mode);
		}

		::UnityEngine::Vector2 GetCurrentRectSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETCURRENTRECTSIZE_OFFSET))(this);
		}
	};
}
