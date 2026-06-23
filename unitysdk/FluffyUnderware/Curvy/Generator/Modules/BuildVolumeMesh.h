#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/DevTools/IntRegion.h"

namespace FluffyUnderware::Curvy::Generator { class CGMaterialSettingsEx; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGVMesh; }
namespace FluffyUnderware::Curvy::Generator { class CGVolume; }
namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroup; }
namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroupCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_ADDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D6176F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D6176C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_BUILD_OFFSET UNITYSDK_OFFSET(0x1D618A60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_CREATEMATERIALGROUPUV2_OFFSET UNITYSDK_OFFSET(0x1D619FB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_CREATEMATERIALGROUPUV_OFFSET UNITYSDK_OFFSET(0x1D619C70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_CREATEPATCHTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D61A100)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GETMATERIALIDGROUPS_OFFSET UNITYSDK_OFFSET(0x1D618480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D6197D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_GENERATEUV2_OFFSET UNITYSDK_OFFSET(0x1D617440)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_GENERATEUV_OFFSET UNITYSDK_OFFSET(0x1D6173F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_ISSPLITUV2TOGGLABLE_OFFSET UNITYSDK_OFFSET(0x1D61A240)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D6176A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_MATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D617690)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_MATERIALSETTTINGS_OFFSET UNITYSDK_OFFSET(0x1D617680)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_REVERSETRIORDER_OFFSET UNITYSDK_OFFSET(0x1D617530)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_SPLITLENGTH_OFFSET UNITYSDK_OFFSET(0x1D6175D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_SPLITUV2_OFFSET UNITYSDK_OFFSET(0x1D617630)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_SPLIT_OFFSET UNITYSDK_OFFSET(0x1D617580)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_UNSCALEU_OFFSET UNITYSDK_OFFSET(0x1D617490)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_UNSCALINGORIGIN_OFFSET UNITYSDK_OFFSET(0x1D6174E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_PREPARESUBMESHES_OFFSET UNITYSDK_OFFSET(0x1D619870)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1D617F60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_REMOVEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D6193E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1D6177C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D6195B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_GENERATEUV2_OFFSET UNITYSDK_OFFSET(0x1D617450)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_GENERATEUV_OFFSET UNITYSDK_OFFSET(0x1D617400)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_REVERSETRIORDER_OFFSET UNITYSDK_OFFSET(0x1D617540)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_SPLITLENGTH_OFFSET UNITYSDK_OFFSET(0x1D6175E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_SPLITUV2_OFFSET UNITYSDK_OFFSET(0x1D617640)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_SPLIT_OFFSET UNITYSDK_OFFSET(0x1D617590)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_UNSCALEU_OFFSET UNITYSDK_OFFSET(0x1D6174A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_UNSCALINGORIGIN_OFFSET UNITYSDK_OFFSET(0x1D6174F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_VALIDATEMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0x1D619530)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61A260)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeMesh_TypeDefinitionIndex = 39055;

	class BuildVolumeMesh : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		// static const ::System::Single DefaultUnscalingOrigin; // 0x0
		// static const ::System::Int32 DefaultSplitLength = 0x64; // 0x0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InVolume; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutVMesh; // 0xC0
		::System::Boolean m_ReverseTriOrder; // 0xC8
		::System::Boolean m_GenerateUV; // 0xC9
		::System::Boolean unscaleU; // 0xCA
		::System::Single unscalingOrigin; // 0xCC
		::System::Boolean m_GenerateUV2; // 0xD0
		::System::Boolean m_Split; // 0xD1
		::System::Single m_SplitLength; // 0xD4
		::System::Boolean splitUV2; // 0xD8
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMaterialSettingsEx*>* m_MaterialSettings; // 0xE0
		::Il2CppArray<::UnityEngine::Material*>* m_Material; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH__CTOR_OFFSET))(this);
		}

		::System::Boolean get_GenerateUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_GENERATEUV_OFFSET))(this);
		}

		::System::Void set_GenerateUV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_GENERATEUV_OFFSET))(this, value);
		}

		::System::Boolean get_GenerateUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_GENERATEUV2_OFFSET))(this);
		}

		::System::Void set_GenerateUV2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_GENERATEUV2_OFFSET))(this, value);
		}

		::System::Boolean get_UnscaleU()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_UNSCALEU_OFFSET))(this);
		}

		::System::Void set_UnscaleU(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_UNSCALEU_OFFSET))(this, value);
		}

		::System::Single get_UnscalingOrigin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_UNSCALINGORIGIN_OFFSET))(this);
		}

		::System::Void set_UnscalingOrigin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_UNSCALINGORIGIN_OFFSET))(this, value);
		}

		::System::Boolean get_ReverseTriOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_REVERSETRIORDER_OFFSET))(this);
		}

		::System::Void set_ReverseTriOrder(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_REVERSETRIORDER_OFFSET))(this, value);
		}

		::System::Boolean get_Split()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_SPLIT_OFFSET))(this);
		}

		::System::Void set_Split(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_SPLIT_OFFSET))(this, value);
		}

		::System::Single get_SplitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_SPLITLENGTH_OFFSET))(this);
		}

		::System::Void set_SplitLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_SPLITLENGTH_OFFSET))(this, value);
		}

		::System::Boolean get_SplitUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_SPLITUV2_OFFSET))(this);
		}

		::System::Void set_SplitUV2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SET_SPLITUV2_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMaterialSettingsEx*>* get_MaterialSetttings()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMaterialSettingsEx*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_MATERIALSETTTINGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMaterialSettingsEx*>* get_MaterialSettings()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMaterialSettingsEx*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_MATERIALSETTINGS_OFFSET))(this);
		}

		::System::Int32 get_MaterialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_MATERIALCOUNT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_REFRESH_OFFSET))(this);
		}

		::System::Int32 AddMaterial()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_ADDMATERIAL_OFFSET))(this);
		}

		::System::Void RemoveMaterial(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_REMOVEMATERIAL_OFFSET))(this, index);
		}

		::System::Void SetMaterial(::System::Int32 index, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_SETMATERIAL_OFFSET))(this, index, mat);
		}

		::UnityEngine::Material* GetMaterial(::System::Int32 index)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GETMATERIAL_OFFSET))(this, index);
		}

		::System::Void build(::FluffyUnderware::Curvy::Generator::CGVMesh* vmesh, ::FluffyUnderware::Curvy::Generator::CGVolume* vol, ::FluffyUnderware::DevTools::IntRegion subset, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroupCollection*>* materialIdGroups)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::DevTools::IntRegion, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroupCollection*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_BUILD_OFFSET))(this, vmesh, vol, subset, materialIdGroups);
		}

		static ::System::Void prepareSubMeshes(::FluffyUnderware::Curvy::Generator::CGVMesh* vmesh, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroupCollection*>* groupsBySubMeshes, ::System::Int32 extrusions, ::Il2CppArray<::UnityEngine::Material*>*& materials)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGVMesh*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroupCollection*>*, ::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_PREPARESUBMESHES_OFFSET))(vmesh, groupsBySubMeshes, extrusions, materials);
		}

		::System::Void createMaterialGroupUV(::FluffyUnderware::Curvy::Generator::CGVMesh* vmesh, ::FluffyUnderware::Curvy::Generator::CGVolume* volume, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* materialGroup, ::System::Int32 matIndex, ::System::Single aspectCorrectionV, ::System::Single aspectCorrectionU, ::System::Int32 sample, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_CREATEMATERIALGROUPUV_OFFSET))(this, vmesh, volume, materialGroup, matIndex, aspectCorrectionV, aspectCorrectionU, sample, baseVertex);
		}

		::System::Void createMaterialGroupUV2(::FluffyUnderware::Curvy::Generator::CGVMesh* vmesh, ::FluffyUnderware::Curvy::Generator::CGVolume* volume, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* materialGroup, ::System::Int32 sample, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_CREATEMATERIALGROUPUV2_OFFSET))(this, vmesh, volume, materialGroup, sample, baseVertex);
		}

		static ::System::Void createPatchTriangles(::Il2CppArray<::System::Int32>* triangles, ::System::Int32& triIdx, ::System::Int32 curVTIndex, ::System::Int32 patchSize, ::System::Int32 crossSize, ::System::Boolean reverse)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_CREATEPATCHTRIANGLES_OFFSET))(triangles, triIdx, curVTIndex, patchSize, crossSize, reverse);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroupCollection*>* getMaterialIDGroups(::FluffyUnderware::Curvy::Generator::CGVolume* volume)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroupCollection*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVolume*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GETMATERIALIDGROUPS_OFFSET))(this, volume);
		}

		::System::Boolean validateMaterialIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_VALIDATEMATERIALINDEX_OFFSET))(this, index);
		}

		::System::Boolean get_IsSplitUV2Togglable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMEMESH_GET_ISSPLITUV2TOGGLABLE_OFFSET))(this);
		}
	};
}
