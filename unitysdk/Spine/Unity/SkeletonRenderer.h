#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/MeshGenerator_Settings.h"
#include "unitysdk/Spine/Unity/UpdateMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/SpriteMaskInteraction.h"

namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine::Unity { class MeshGenerator; }
namespace Spine::Unity { class MeshGeneratorDelegate; }
namespace Spine::Unity { class MeshRendererBuffers; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine::Unity { class SkeletonRenderer_InstructionDelegate; }
namespace Spine::Unity { class SkeletonRenderer_SkeletonRendererDelegate; }
namespace Spine::Unity { class SkeletonRenderer_SpriteMaskInteractionMaterials; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_1_OFFSET UNITYSDK_OFFSET(0x168C6270)
#define SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x168C6990)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x168C6B70)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x168C6A90)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x168A1F20)
#define SPINE_UNITY_SKELETONRENDERER_ASSIGNSPRITEMASKMATERIALS_OFFSET UNITYSDK_OFFSET(0x168C7A30)
#define SPINE_UNITY_SKELETONRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x168C6CE0)
#define SPINE_UNITY_SKELETONRENDERER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x168B25F0)
#define SPINE_UNITY_SKELETONRENDERER_ENSUREMESHGENERATORCAPACITY_OFFSET UNITYSDK_OFFSET(0x168C6E40)
#define SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_1_OFFSET UNITYSDK_OFFSET(0x168C7FE0)
#define SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET UNITYSDK_OFFSET(0x168C7EF0)
#define SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMMATERIALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x168C6B50)
#define SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMSLOTMATERIALS_OFFSET UNITYSDK_OFFSET(0x168C6B60)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x168C6C70)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x168B0C80)
#define SPINE_UNITY_SKELETONRENDERER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x168C6970)
#define SPINE_UNITY_SKELETONRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x168B26F0)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSFORMASKTYPE_OFFSET UNITYSDK_OFFSET(0x168C8640)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSINSIDEMASK_OFFSET UNITYSDK_OFFSET(0x168C85E0)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSOUTSIDEMASK_OFFSET UNITYSDK_OFFSET(0x168C8610)
#define SPINE_UNITY_SKELETONRENDERER_LATEUPDATEMESH_OFFSET UNITYSDK_OFFSET(0x168C6E70)
#define SPINE_UNITY_SKELETONRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x168B3020)
#define SPINE_UNITY_SKELETONRENDERER_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x168C7EE0)
#define SPINE_UNITY_SKELETONRENDERER_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x168C7E40)
#define SPINE_UNITY_SKELETONRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x168C6E10)
#define SPINE_UNITY_SKELETONRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x168C6D70)
#define SPINE_UNITY_SKELETONRENDERER_REAPPLYSEPARATORSLOTNAMES_OFFSET UNITYSDK_OFFSET(0x168C8490)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_1_OFFSET UNITYSDK_OFFSET(0x168C5760)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x168C6A10)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x168C6BF0)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x168C6AF0)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x168A1EA0)
#define SPINE_UNITY_SKELETONRENDERER_SETMATERIALSETTINGSTOFIXDRAWORDER_OFFSET UNITYSDK_OFFSET(0x168C7C00)
#define SPINE_UNITY_SKELETONRENDERER_SETMESHSETTINGS_OFFSET UNITYSDK_OFFSET(0x168C6C80)
#define SPINE_UNITY_SKELETONRENDERER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x168C6980)
#define SPINE_UNITY_SKELETONRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x168C87C0)
#define SPINE_UNITY_SKELETONRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x168B31C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer_TypeDefinitionIndex = 42242;

	class SkeletonRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_STENCIL_COMP_PARAM_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkeletonRenderer_TypeDefinitionIndex)->GetStaticField(0x12730);
		}
		static ::System::Int32* StaticGet_SUBMESH_DUMMY_PARAM_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkeletonRenderer_TypeDefinitionIndex)->GetStaticField(0x12734);
		}
		// static const ::UnityEngine::Rendering::CompareFunction STENCIL_COMP_MASKINTERACTION_NONE; // 0x0
		// static const ::UnityEngine::Rendering::CompareFunction STENCIL_COMP_MASKINTERACTION_VISIBLE_INSIDE; // 0x0
		// static const ::UnityEngine::Rendering::CompareFunction STENCIL_COMP_MASKINTERACTION_VISIBLE_OUTSIDE; // 0x0
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18
		::System::String* initialSkinName; // 0x20
		::System::Boolean initialFlipX; // 0x28
		::System::Boolean initialFlipY; // 0x29
		::Spine::Unity::UpdateMode updateMode; // 0x2C
		::Spine::Unity::UpdateMode updateWhenInvisible; // 0x30
		::Il2CppArray<::System::String*>* separatorSlotNames; // 0x38
		::System::Collections::Generic::List_1<::Spine::Slot*>* separatorSlots; // 0x40
		::System::Single zSpacing; // 0x48
		::System::Boolean useClipping; // 0x4C
		::System::Boolean immutableTriangles; // 0x4D
		::System::Boolean pmaVertexColors; // 0x4E
		::System::Boolean clearStateOnDisable; // 0x4F
		::System::Boolean tintBlack; // 0x50
		::System::Boolean singleSubmesh; // 0x51
		::System::Boolean fixDrawOrder; // 0x52
		::System::Boolean addNormals; // 0x53
		::System::Boolean calculateTangents; // 0x54
		::UnityEngine::SpriteMaskInteraction maskInteraction; // 0x58
		::Spine::Unity::SkeletonRenderer_SpriteMaskInteractionMaterials* maskMaterials; // 0x60
		::System::Boolean disableRenderingOnOverride; // 0x68
		::Spine::Unity::SkeletonRenderer_InstructionDelegate* generateMeshOverride; // 0x70
		::Spine::Unity::MeshGeneratorDelegate* OnPostProcessVertices; // 0x78
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* customMaterialOverride; // 0x80
		::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>* customSlotMaterials; // 0x88
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x90
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x98
		::Spine::Unity::MeshRendererBuffers* rendererBuffers; // 0xA0
		::UnityEngine::MeshRenderer* meshRenderer; // 0xA8
		::UnityEngine::MeshFilter* meshFilter; // 0xB0
		::System::Boolean valid; // 0xB8
		::Spine::Skeleton* skeleton; // 0xC0
		::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* OnRebuild; // 0xC8
		::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0xD0
		::UnityEngine::MaterialPropertyBlock* reusedPropertyBlock; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER__CCTOR_OFFSET))();
		}

		::Spine::Unity::UpdateMode get_UpdateMode()
		{
			return ((::Spine::Unity::UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::Spine::Unity::UpdateMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_UPDATEMODE_OFFSET))(this, a1);
		}

		::System::Void add_generateMeshOverride(::Spine::Unity::SkeletonRenderer_InstructionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void remove_generateMeshOverride(::Spine::Unity::SkeletonRenderer_InstructionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void add_GenerateMeshOverride_1(::Spine::Unity::SkeletonRenderer_InstructionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_1_OFFSET))(this, a1);
		}

		::System::Void remove_GenerateMeshOverride_1(::Spine::Unity::SkeletonRenderer_InstructionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_1_OFFSET))(this, a1);
		}

		::System::Void add_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONPOSTPROCESSVERTICES_OFFSET))(this, a1);
		}

		::System::Void remove_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONPOSTPROCESSVERTICES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* get_CustomMaterialOverride()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMMATERIALOVERRIDE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>* get_CustomSlotMaterials()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMSLOTMATERIALS_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETON_OFFSET))(this);
		}

		::System::Void add_OnRebuild(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONREBUILD_OFFSET))(this, a1);
		}

		::System::Void remove_OnRebuild(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONREBUILD_OFFSET))(this, a1);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRenderer_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::System::Void SetMeshSettings(::Spine::Unity::MeshGenerator_Settings a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGenerator_Settings))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SETMESHSETTINGS_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEARSTATE_OFFSET))(this);
		}

		::System::Void EnsureMeshGeneratorCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ENSUREMESHGENERATORCAPACITY_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdateMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_LATEUPDATEMESH_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::System::Void FindAndApplySeparatorSlots(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FindAndApplySeparatorSlots_1(::System::Func_2<::System::String*, ::System::Boolean>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::Boolean>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReapplySeparatorSlotNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REAPPLYSEPARATORSLOTNAMES_OFFSET))(this);
		}

		::System::Void AssignSpriteMaskMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ASSIGNSPRITEMASKMATERIALS_OFFSET))(this);
		}

		::System::Boolean InitSpriteMaskMaterialsInsideMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSINSIDEMASK_OFFSET))(this);
		}

		::System::Boolean InitSpriteMaskMaterialsOutsideMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSOUTSIDEMASK_OFFSET))(this);
		}

		::System::Boolean InitSpriteMaskMaterialsForMaskType(::UnityEngine::Rendering::CompareFunction a1, ::Il2CppArray<::UnityEngine::Material*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSFORMASKTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void SetMaterialSettingsToFixDrawOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SETMATERIALSETTINGSTOFIXDRAWORDER_OFFSET))(this);
		}
	};
}
