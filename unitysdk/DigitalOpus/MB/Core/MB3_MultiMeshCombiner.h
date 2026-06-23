#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_ValidationLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombiner.h"

namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombiner_GenerateUV2Delegate; }
namespace DigitalOpus::MB::Core { class MB3_MultiMeshCombiner_CombinedMesh; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_ADDDELETEGAMEOBJECTSBYID_OFFSET UNITYSDK_OFFSET(0x1E2ECF10)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_ADDDELETEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E2ECBE0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1E2EC0D0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1E2EC190)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_APPLY_OFFSET UNITYSDK_OFFSET(0x1E2EBE80)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CHECKINTEGRITY_OFFSET UNITYSDK_OFFSET(0x1E2F1040)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CLEARBUFFERS_OFFSET UNITYSDK_OFFSET(0x1E2F0940)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CLEARMESH_1_OFFSET UNITYSDK_OFFSET(0x1E2F0DA0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1E2F0A70)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_COMBINEDMESHCONTAINS_OFFSET UNITYSDK_OFFSET(0x1E2EBC20)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_DESTROYMESHEDITOR_OFFSET UNITYSDK_OFFSET(0x1E2F0DC0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_DESTROYMESH_OFFSET UNITYSDK_OFFSET(0x1E2F0A90)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1E2EBBA0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETMATERIALSONTARGETRENDERER_OFFSET UNITYSDK_OFFSET(0x1E2ED7A0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETNUMOBJECTSINCOMBINED_OFFSET UNITYSDK_OFFSET(0x1E2EBA10)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETOBJECTSINCOMBINED_OFFSET UNITYSDK_OFFSET(0x1E2EBA40)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GET_LOG_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E2EB5D0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GET_MAXVERTSINMESH_OFFSET UNITYSDK_OFFSET(0x1E2EB730)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GET_VALIDATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E2EB720)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_SET_LOG_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E2EB5E0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_SET_MAXVERTSINMESH_OFFSET UNITYSDK_OFFSET(0x1E2EB740)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_SET_VALIDATIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1E2EB680)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATEGAMEOBJECTS_1_OFFSET UNITYSDK_OFFSET(0x1E2EC700)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E2EC660)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONES_OFFSET UNITYSDK_OFFSET(0x1E2EC520)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E2EC5C0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E2EC480)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__BAKESTEP1_OFFSET UNITYSDK_OFFSET(0x1E2EF130)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F1230)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F10F0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__DISPOSERUNTIMECREATED_OFFSET UNITYSDK_OFFSET(0x1E2F0FA0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__DISTRIBUTEAMONGBAKERS_OFFSET UNITYSDK_OFFSET(0x1E2EE460)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__SETMBVALUES_OFFSET UNITYSDK_OFFSET(0x1E2F06E0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__VALIDATETEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1E2EBCB0)
#define DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__VALIDATE_OFFSET UNITYSDK_OFFSET(0x1E2ED960)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MultiMeshCombiner_TypeDefinitionIndex = 90649;

	class MB3_MultiMeshCombiner : public ::DigitalOpus::MB::Core::MB3_MeshCombiner
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_emptyIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MB3_MultiMeshCombiner_TypeDefinitionIndex)->GetStaticField(0x4E450);
		}
		static ::Il2CppArray<::UnityEngine::GameObject*>** StaticGet_empty()
		{
			return (::Il2CppArray<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MB3_MultiMeshCombiner_TypeDefinitionIndex)->GetStaticField(0x4E458);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>* obj2MeshCombinerMap; // 0x90
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>* meshCombiners; // 0x98
		::System::Int32 _maxVertsInMesh; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__CCTOR_OFFSET))();
		}

		::DigitalOpus::MB::Core::MB2_LogLevel get_LOG_LEVEL()
		{
			return ((::DigitalOpus::MB::Core::MB2_LogLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GET_LOG_LEVEL_OFFSET))(this);
		}

		::System::Void set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_SET_LOG_LEVEL_OFFSET))(this, value);
		}

		::System::Void set_validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_ValidationLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_SET_VALIDATIONLEVEL_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB2_ValidationLevel get_validationLevel()
		{
			return ((::DigitalOpus::MB::Core::MB2_ValidationLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GET_VALIDATIONLEVEL_OFFSET))(this);
		}

		::System::Int32 get_maxVertsInMesh()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GET_MAXVERTSINMESH_OFFSET))(this);
		}

		::System::Void set_maxVertsInMesh(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_SET_MAXVERTSINMESH_OFFSET))(this, value);
		}

		::System::Int32 GetNumObjectsInCombined()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETNUMOBJECTSINCOMBINED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetObjectsInCombined()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETOBJECTSINCOMBINED_OFFSET))(this);
		}

		::System::Int32 GetLightmapIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETLIGHTMAPINDEX_OFFSET))(this);
		}

		::System::Boolean CombinedMeshContains(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_COMBINEDMESHCONTAINS_OFFSET))(this, go);
		}

		::System::Boolean _validateTextureBakeResults()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__VALIDATETEXTUREBAKERESULTS_OFFSET))(this);
		}

		::System::Boolean Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_APPLY_OFFSET))(this, uv2GenerationMethod);
		}

		::System::Boolean Apply_1(::System::Boolean triangles, ::System::Boolean vertices, ::System::Boolean normals, ::System::Boolean tangents, ::System::Boolean uvs, ::System::Boolean uv2, ::System::Boolean uv3, ::System::Boolean uv4, ::System::Boolean colors, ::System::Boolean bones, ::System::Boolean blendShapeFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_APPLY_1_OFFSET))(this, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapeFlag, uv2GenerationMethod);
		}

		::System::Boolean Apply_2(::System::Boolean triangles, ::System::Boolean vertices, ::System::Boolean normals, ::System::Boolean tangents, ::System::Boolean uvs, ::System::Boolean uv2, ::System::Boolean uv3, ::System::Boolean uv4, ::System::Boolean uv5, ::System::Boolean uv6, ::System::Boolean uv7, ::System::Boolean uv8, ::System::Boolean colors, ::System::Boolean bones, ::System::Boolean blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_APPLY_2_OFFSET))(this, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, uv5, uv6, uv7, uv8, colors, bones, blendShapesFlag, uv2GenerationMethod);
		}

		::System::Void UpdateSkinnedMeshApproximateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDS_OFFSET))(this);
		}

		::System::Void UpdateSkinnedMeshApproximateBoundsFromBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONES_OFFSET))(this);
		}

		::System::Void UpdateSkinnedMeshApproximateBoundsFromBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDS_OFFSET))(this);
		}

		::System::Boolean UpdateGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATEGAMEOBJECTS_OFFSET))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo);
		}

		::System::Boolean UpdateGameObjects_1(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateUV5, ::System::Boolean updateUV6, ::System::Boolean updateUV7, ::System::Boolean updateUV8, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_UPDATEGAMEOBJECTS_1_OFFSET))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
		}

		::System::Boolean AddDeleteGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::UnityEngine::GameObject*>* deleteGOs, ::System::Boolean disableRendererInSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_ADDDELETEGAMEOBJECTS_OFFSET))(this, gos, deleteGOs, disableRendererInSource);
		}

		::System::Boolean AddDeleteGameObjectsByID(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::System::Int32>* deleteGOinstanceIDs, ::System::Boolean disableRendererInSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_ADDDELETEGAMEOBJECTSBYID_OFFSET))(this, gos, deleteGOinstanceIDs, disableRendererInSource);
		}

		::System::Boolean _validate(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::System::Int32>* deleteGOinstanceIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__VALIDATE_OFFSET))(this, gos, deleteGOinstanceIDs);
		}

		::System::Void _distributeAmongBakers(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::System::Int32>* deleteGOinstanceIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__DISTRIBUTEAMONGBAKERS_OFFSET))(this, gos, deleteGOinstanceIDs);
		}

		::System::Boolean _bakeStep1(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::System::Int32>* deleteGOinstanceIDs, ::System::Boolean disableRendererInSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__BAKESTEP1_OFFSET))(this, gos, deleteGOinstanceIDs, disableRendererInSource);
		}

		::System::Void ClearBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CLEARBUFFERS_OFFSET))(this);
		}

		::System::Void ClearMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CLEARMESH_OFFSET))(this);
		}

		::System::Void ClearMesh_1(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CLEARMESH_1_OFFSET))(this, editorMethods);
		}

		::System::Void _DisposeRuntimeCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__DISPOSERUNTIMECREATED_OFFSET))(this);
		}

		::System::Void DestroyMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_DESTROYMESH_OFFSET))(this);
		}

		::System::Void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_DESTROYMESHEDITOR_OFFSET))(this, editorMethods);
		}

		::System::Void _setMBValues(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* targ)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER__SETMBVALUES_OFFSET))(this, targ);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetMaterialsOnTargetRenderer()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_GETMATERIALSONTARGETRENDERER_OFFSET))(this);
		}

		::System::Void CheckIntegrity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MULTIMESHCOMBINER_CHECKINTEGRITY_OFFSET))(this);
		}
	};
}
