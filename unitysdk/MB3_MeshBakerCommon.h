#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MB3_MeshBakerRoot.h"

class MB2_TextureBakeResults;
class MB3_TextureBaker;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombiner; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombiner_GenerateUV2Delegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MB3_MESHBAKERCOMMON_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1F55E8B0)
#define MB3_MESHBAKERCOMMON_APPLY_OFFSET UNITYSDK_OFFSET(0x1F55E510)
#define MB3_MESHBAKERCOMMON_CLEARMESH_1_OFFSET UNITYSDK_OFFSET(0x1F55DF50)
#define MB3_MESHBAKERCOMMON_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1F55DED0)
#define MB3_MESHBAKERCOMMON_COMBINEDMESHCONTAINS_OFFSET UNITYSDK_OFFSET(0x1F55ECF0)
#define MB3_MESHBAKERCOMMON_DESTROYMESHEDITOR_OFFSET UNITYSDK_OFFSET(0x1F55E050)
#define MB3_MESHBAKERCOMMON_DESTROYMESH_OFFSET UNITYSDK_OFFSET(0x1F55DFD0)
#define MB3_MESHBAKERCOMMON_ENABLEDISABLESOURCEOBJECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x1F55D910)
#define MB3_MESHBAKERCOMMON_GETNUMOBJECTSINCOMBINED_OFFSET UNITYSDK_OFFSET(0x1F55E090)
#define MB3_MESHBAKERCOMMON_GETOBJECTSTOCOMBINE_OFFSET UNITYSDK_OFFSET(0x1F55CD30)
#define MB3_MESHBAKERCOMMON_GETTEXTUREBAKER_OFFSET UNITYSDK_OFFSET(0x1F55E0C0)
#define MB3_MESHBAKERCOMMON_GET_CLEARBUFFERSAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1F55CAD0)
#define MB3_MESHBAKERCOMMON_GET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1F55CCC0)
#define MB3_MESHBAKERCOMMON_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F55CAC0)
#define MB3_MESHBAKERCOMMON_PURGENULLSFROMOBJECTSTOCOMBINE_OFFSET UNITYSDK_OFFSET(0x1F55D300)
#define MB3_MESHBAKERCOMMON_SET_CLEARBUFFERSAFTERBAKE_OFFSET UNITYSDK_OFFSET(0x1F55CBF0)
#define MB3_MESHBAKERCOMMON_SET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1F55CCF0)
#define MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_1_OFFSET UNITYSDK_OFFSET(0x1F55EED0)
#define MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_2_OFFSET UNITYSDK_OFFSET(0x1F55F070)
#define MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_3_OFFSET UNITYSDK_OFFSET(0x1F55F230)
#define MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1F55ED30)
#define MB3_MESHBAKERCOMMON_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONES_OFFSET UNITYSDK_OFFSET(0x1F55F490)
#define MB3_MESHBAKERCOMMON_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F55F4E0)
#define MB3_MESHBAKERCOMMON_UPDATESKINNEDMESHAPPROXIMATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F55F440)
#define MB3_MESHBAKERCOMMON_UPGRADETOCURRENTVERSIONIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1F55CBA0)
#define MB3_MESHBAKERCOMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x1F55F850)
#define MB3_MESHBAKERCOMMON__VALIDATEFORUPDATESKINNEDMESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F55F530)

inline static constexpr unsigned int MB3_MeshBakerCommon_TypeDefinitionIndex = 94473;

class MB3_MeshBakerCommon : public ::MB3_MeshBakerRoot
{
public:
	::System::Int32 version; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh; // 0x30
	::System::Boolean useObjsToMeshFromTexBaker; // 0x38
	::System::Boolean _clearBuffersAfterBake; // 0x39
	::System::String* bakeAssetsInPlaceFolderPath; // 0x40
	::UnityEngine::GameObject* resultPrefab; // 0x48
	::System::Boolean resultPrefabLeaveInstanceInSceneAfterBake; // 0x50
	::UnityEngine::Transform* parentSceneObject; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON__CTOR_OFFSET))(this);
	}

	static ::System::Int32 get_VERSION()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_GET_VERSION_OFFSET))();
	}

	::System::Boolean get_clearBuffersAfterBake()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_GET_CLEARBUFFERSAFTERBAKE_OFFSET))(this);
	}

	::System::Void set_clearBuffersAfterBake(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_SET_CLEARBUFFERSAFTERBAKE_OFFSET))(this, value);
	}

	::System::Void UpgradeToCurrentVersionIfNecessary()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPGRADETOCURRENTVERSIONIFNECESSARY_OFFSET))(this);
	}

	::MB2_TextureBakeResults* get_textureBakeResults()
	{
		return ((::MB2_TextureBakeResults*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_GET_TEXTUREBAKERESULTS_OFFSET))(this);
	}

	::System::Void set_textureBakeResults(::MB2_TextureBakeResults* value)
	{
		return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_SET_TEXTUREBAKERESULTS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetObjectsToCombine()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_GETOBJECTSTOCOMBINE_OFFSET))(this);
	}

	::System::Void PurgeNullsFromObjectsToCombine()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_PURGENULLSFROMOBJECTSTOCOMBINE_OFFSET))(this);
	}

	::System::Void EnableDisableSourceObjectRenderers(::System::Boolean show)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_ENABLEDISABLESOURCEOBJECTRENDERERS_OFFSET))(this, show);
	}

	::System::Void ClearMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_CLEARMESH_OFFSET))(this);
	}

	::System::Void ClearMesh_1(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
	{
		return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_CLEARMESH_1_OFFSET))(this, editorMethods);
	}

	::System::Void DestroyMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_DESTROYMESH_OFFSET))(this);
	}

	::System::Void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
	{
		return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_DESTROYMESHEDITOR_OFFSET))(this, editorMethods);
	}

	::System::Int32 GetNumObjectsInCombined()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_GETNUMOBJECTSINCOMBINED_OFFSET))(this);
	}

	::MB3_TextureBaker* GetTextureBaker()
	{
		return ((::MB3_TextureBaker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_GETTEXTUREBAKER_OFFSET))(this);
	}

	::System::Boolean Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
	{
		return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_APPLY_OFFSET))(this, uv2GenerationMethod);
	}

	::System::Boolean Apply_1(::System::Boolean triangles, ::System::Boolean vertices, ::System::Boolean normals, ::System::Boolean tangents, ::System::Boolean uvs, ::System::Boolean uv2, ::System::Boolean uv3, ::System::Boolean uv4, ::System::Boolean colors, ::System::Boolean bones, ::System::Boolean blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_APPLY_1_OFFSET))(this, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod);
	}

	::System::Boolean CombinedMeshContains(::UnityEngine::GameObject* go)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_COMBINEDMESHCONTAINS_OFFSET))(this, go);
	}

	::System::Boolean UpdateGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_OFFSET))(this, gos);
	}

	::System::Boolean UpdateGameObjects_1(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean updateBounds)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_1_OFFSET))(this, gos, updateBounds);
	}

	::System::Boolean UpdateGameObjects_2(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV1, ::System::Boolean updateUV2, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_2_OFFSET))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV1, updateUV2, updateColors, updateSkinningInfo);
	}

	::System::Boolean UpdateGameObjects_3(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateUV5, ::System::Boolean updateUV6, ::System::Boolean updateUV7, ::System::Boolean updateUV8, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPDATEGAMEOBJECTS_3_OFFSET))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
	}

	::System::Void UpdateSkinnedMeshApproximateBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPDATESKINNEDMESHAPPROXIMATEBOUNDS_OFFSET))(this);
	}

	::System::Void UpdateSkinnedMeshApproximateBoundsFromBones()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONES_OFFSET))(this);
	}

	::System::Void UpdateSkinnedMeshApproximateBoundsFromBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDS_OFFSET))(this);
	}

	::System::Boolean _ValidateForUpdateSkinnedMeshBounds()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERCOMMON__VALIDATEFORUPDATESKINNEDMESHBOUNDS_OFFSET))(this);
	}
};
