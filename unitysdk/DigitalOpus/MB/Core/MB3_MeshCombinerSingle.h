#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LightmapOptions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombiner.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BufferDataFromPreviousBake.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_MeshCombinerSingle_MeshCreationConditions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_RenderType.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_Utility_MeshAnalysisResult.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MBBlendShape; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_SerializableIntArray; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_UVAdjuster_Atlas; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombiner_GenerateUV2Delegate; }
namespace DigitalOpus::MB::Core { class MB_IMeshCombinerSingle_BoneProcessor; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class OrderedDictionary; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_ADDDELETEGAMEOBJECTSBYID_OFFSET UNITYSDK_OFFSET(0x1D3A7610)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_ADDDELETEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D3A7190)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLYSHOWHIDE_OFFSET UNITYSDK_OFFSET(0x1D3A4EC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1D3A5020)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1D3A52A0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLY_OFFSET UNITYSDK_OFFSET(0x1D3A4D40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BUILDSCENEHIERARCHPREBAKE_OFFSET UNITYSDK_OFFSET(0x1D3A8EB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BUILDSCENEMESHOBJECT_OFFSET UNITYSDK_OFFSET(0x1D3A8280)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BUILDSOURCEMATSTOSUBMESHIDXMAP_OFFSET UNITYSDK_OFFSET(0x1D3A1740)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CHECKINTEGRITY_OFFSET UNITYSDK_OFFSET(0x1D3AAD20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CLEARBUFFERS_OFFSET UNITYSDK_OFFSET(0x1D3A84C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CLEARMESH_1_OFFSET UNITYSDK_OFFSET(0x1D3A8B90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1D3A89B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_COMBINEDMESHCONTAINS_OFFSET UNITYSDK_OFFSET(0x1D3A8460)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CREATE_BONEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1D3A1AB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CREATE_MESHCHANNELSCACHE_OFFSET UNITYSDK_OFFSET(0x1D3A1A60)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CREATE_VERTEXANDTRIANGLEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1D39F1C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_DESTROYMESHEDITOR_OFFSET UNITYSDK_OFFSET(0x1D3A8CA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_DESTROYMESH_OFFSET UNITYSDK_OFFSET(0x1D3A15D0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D39BF10)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETBONES_OFFSET UNITYSDK_OFFSET(0x1D39D0B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETLIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1D39D0C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETMATERIALSONTARGETRENDERER_OFFSET UNITYSDK_OFFSET(0x1D3A80B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETMESH_OFFSET UNITYSDK_OFFSET(0x1D39CD00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETNUMOBJECTSINCOMBINED_OFFSET UNITYSDK_OFFSET(0x1D39CC20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETOBJECTSINCOMBINED_OFFSET UNITYSDK_OFFSET(0x1D39CC40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1D39C2B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPADD_OFFSET UNITYSDK_OFFSET(0x1D39C650)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPCLEAR_OFFSET UNITYSDK_OFFSET(0x1D39C840)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPCONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1D39C8B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D39C810)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPGET_OFFSET UNITYSDK_OFFSET(0x1D39C5F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPREMOVE_OFFSET UNITYSDK_OFFSET(0x1D39C6E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D39C740)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCEID2DGO_OFFSET UNITYSDK_OFFSET(0x1D39C940)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_ISMIRRORED_OFFSET UNITYSDK_OFFSET(0x1D3A4AB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_PRINTPROFILEINFO_OFFSET UNITYSDK_OFFSET(0x1D39B910)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SETMESH_OFFSET UNITYSDK_OFFSET(0x1D39CF70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SET_RENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1D39C2D0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SET_RESULTSCENEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D39C360)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1D39C100)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SHOWHIDEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D3A6EB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_STARTPROFILE_OFFSET UNITYSDK_OFFSET(0x1D39B870)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATEGAMEOBJECTS_1_OFFSET UNITYSDK_OFFSET(0x1D3A6250)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D3A5590)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONES_OFFSET UNITYSDK_OFFSET(0x1D3AB1F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D3AAF00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATESKINNEDMESHAPPROXIMATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D3AAEF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VALIDATETARGRENDERERANDMESHANDRESULTSCENEOBJ_OFFSET UNITYSDK_OFFSET(0x1D3A0F30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__ADDTOCOMBINED_OFFSET UNITYSDK_OFFSET(0x1D39F240)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__COLLECTMATERIALTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D39D770)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__COLLECTOUTOFBOUNDSUVRECTS2_OFFSET UNITYSDK_OFFSET(0x1D39E500)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__CONFIGURESCENEHIERARCH_OFFSET UNITYSDK_OFFSET(0x1D3AA310)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AB980)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__DISPOSERUNTIMECREATED_OFFSET UNITYSDK_OFFSET(0x1D3A8BA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__GETBONES_OFFSET UNITYSDK_OFFSET(0x1D3A4D30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D39D260)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__NEWMESH_OFFSET UNITYSDK_OFFSET(0x1D39CED0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__SETLIGHTMAPINDEXIFPRESERVELIGHTMAPPING_OFFSET UNITYSDK_OFFSET(0x1D3AAA40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__SHOWHIDE_OFFSET UNITYSDK_OFFSET(0x1D39EB70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__UPDATEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D3A57E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__UPDATEMATERIALSONTARGETRENDERER_OFFSET UNITYSDK_OFFSET(0x1D3AB4E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__USENATIVEARRAYAPIORNOT_OFFSET UNITYSDK_OFFSET(0x1D39F1B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__VALIDATETEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1D39E9A0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___ADDTOCOMBINED_OFFSET UNITYSDK_OFFSET(0x1D3A1B00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___UPDATEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D3A6510)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_TypeDefinitionIndex = 90629;

	class MB3_MeshCombinerSingle : public ::DigitalOpus::MB::Core::MB3_MeshCombiner
	{
	public:
		::System::Diagnostics::Stopwatch* db_showHideGameObjects; // 0x90
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects; // 0x98
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_CollectMeshData; // 0xA0
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_CollectMeshData_a; // 0xA8
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_CollectMeshData_b; // 0xB0
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_CollectMeshData_c; // 0xB8
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_InitFromMeshCombiner; // 0xC0
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_Init; // 0xC8
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_CopyArraysFromPreviousBakeBuffersToNewBuffers; // 0xD0
		::System::Diagnostics::Stopwatch* db_addDeleteGameObjects_CopyFromDGOMeshToBuffers; // 0xD8
		::System::Diagnostics::Stopwatch* db_apply; // 0xE0
		::System::Diagnostics::Stopwatch* db_applyShowHide; // 0xE8
		::System::Diagnostics::Stopwatch* db_updateGameObjects; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objectsInCombinedMesh; // 0xF8
		::System::Int32 lightmapIndex; // 0x100
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* mbDynamicObjectsInCombinedMesh; // 0x108
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* _instance2combined_map; // 0x110
		::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags channelsLastBake; // 0x118
		::Il2CppArray<::UnityEngine::Vector3>* verts; // 0x120
		::Il2CppArray<::UnityEngine::Vector3>* normals; // 0x128
		::Il2CppArray<::UnityEngine::Vector4>* tangents; // 0x130
		::Il2CppArray<::UnityEngine::Vector2>* uvs; // 0x138
		::Il2CppArray<::System::Single>* uvsSliceIdx; // 0x140
		::Il2CppArray<::UnityEngine::Vector2>* uv2s; // 0x148
		::Il2CppArray<::UnityEngine::Vector2>* uv3s; // 0x150
		::Il2CppArray<::UnityEngine::Vector2>* uv4s; // 0x158
		::Il2CppArray<::UnityEngine::Vector2>* uv5s; // 0x160
		::Il2CppArray<::UnityEngine::Vector2>* uv6s; // 0x168
		::Il2CppArray<::UnityEngine::Vector2>* uv7s; // 0x170
		::Il2CppArray<::UnityEngine::Vector2>* uv8s; // 0x178
		::Il2CppArray<::UnityEngine::Color>* colors; // 0x180
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>* submeshTris; // 0x188
		::Il2CppArray<::UnityEngine::Matrix4x4>* bindPoses; // 0x190
		::Il2CppArray<::UnityEngine::Transform*>* bones; // 0x198
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>* blendShapes; // 0x1A0
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake bufferDataFromPrevious; // 0x1A8
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshCreationConditions _meshBirth; // 0x1BC
		::UnityEngine::Mesh* _mesh; // 0x1C0
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* _vertexAndTriProcessor; // 0x1C8
		::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* _boneProcessor; // 0x1D0
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BlendShapeProcessor* _blendShapeProcessor; // 0x1D8
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* _meshChannelsCache; // 0x1E0
		::Il2CppArray<::UnityEngine::GameObject*>* empty; // 0x1E8
		::Il2CppArray<::System::Int32>* emptyIDs; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__CTOR_OFFSET))(this);
		}

		::System::Void StartProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_STARTPROFILE_OFFSET))(this);
		}

		::System::Void PrintProfileInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_PRINTPROFILEINFO_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void set_textureBakeResults(::MB2_TextureBakeResults* value)
		{
			return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SET_TEXTUREBAKERESULTS_OFFSET))(this, value);
		}

		::System::Void set_renderType(::DigitalOpus::MB::Core::MB_RenderType value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_RenderType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SET_RENDERTYPE_OFFSET))(this, value);
		}

		::System::Void set_resultSceneObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SET_RESULTSCENEOBJECT_OFFSET))(this, value);
		}

		::System::Int32 GetVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETVERTEXCOUNT_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* instance2Combined_MapGet(::UnityEngine::GameObject* gameObjectID)
		{
			return ((::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPGET_OFFSET))(this, gameObjectID);
		}

		::System::Void instance2Combined_MapAdd(::UnityEngine::GameObject* gameObjectID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPADD_OFFSET))(this, gameObjectID, dgo);
		}

		::System::Void instance2Combined_MapRemove(::UnityEngine::GameObject* gameObjectID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPREMOVE_OFFSET))(this, gameObjectID);
		}

		::System::Boolean instance2Combined_MapTryGetValue(::UnityEngine::GameObject* gameObjectID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*& dgo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPTRYGETVALUE_OFFSET))(this, gameObjectID, dgo);
		}

		::System::Int32 instance2Combined_MapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPCOUNT_OFFSET))(this);
		}

		::System::Void instance2Combined_MapClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPCLEAR_OFFSET))(this);
		}

		::System::Boolean instance2Combined_MapContainsKey(::UnityEngine::GameObject* gameObjectID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCE2COMBINED_MAPCONTAINSKEY_OFFSET))(this, gameObjectID);
		}

		::System::Boolean InstanceID2DGO(::System::Int32 instanceID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*& dgoGameObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_INSTANCEID2DGO_OFFSET))(this, instanceID, dgoGameObject);
		}

		::System::Int32 GetNumObjectsInCombined()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETNUMOBJECTSINCOMBINED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetObjectsInCombined()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETOBJECTSINCOMBINED_OFFSET))(this);
		}

		::UnityEngine::Mesh* GetMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETMESH_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshCreationConditions SetMesh(::UnityEngine::Mesh* m)
		{
			return ((::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshCreationConditions(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SETMESH_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Transform*>* GetBones()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETBONES_OFFSET))(this);
		}

		::System::Int32 GetLightmapIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETLIGHTMAPINDEX_OFFSET))(this);
		}

		::System::Boolean _Initialize(::System::Int32 numResultMats)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__INITIALIZE_OFFSET))(this, numResultMats);
		}

		::System::Boolean _collectMaterialTriangles(::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::Il2CppArray<::UnityEngine::Material*>* sharedMaterials, ::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Collections::Specialized::OrderedDictionary*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__COLLECTMATERIALTRIANGLES_OFFSET))(this, m, dgo, sharedMaterials, sourceMats2submeshIdx_map);
		}

		::System::Boolean _collectOutOfBoundsUVRects2(::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::Il2CppArray<::UnityEngine::Material*>* sharedMaterials, ::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>* meshAnalysisResults)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Collections::Specialized::OrderedDictionary*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__COLLECTOUTOFBOUNDSUVRECTS2_OFFSET))(this, m, dgo, sharedMaterials, sourceMats2submeshIdx_map, meshAnalysisResults);
		}

		::System::Boolean _validateTextureBakeResults()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__VALIDATETEXTUREBAKERESULTS_OFFSET))(this);
		}

		::System::Boolean _ShowHide(::Il2CppArray<::UnityEngine::GameObject*>* goToShow, ::Il2CppArray<::UnityEngine::GameObject*>* goToHide)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__SHOWHIDE_OFFSET))(this, goToShow, goToHide);
		}

		::System::Boolean _AddToCombined(::Il2CppArray<::UnityEngine::GameObject*>* goToAdd, ::Il2CppArray<::System::Int32>* goToDelete, ::System::Boolean disableRendererInSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__ADDTOCOMBINED_OFFSET))(this, goToAdd, goToDelete, disableRendererInSource);
		}

		::System::Boolean __AddToCombined(::Il2CppArray<::UnityEngine::GameObject*>* _goToAdd, ::Il2CppArray<::System::Int32>* _goToDelete, ::System::Boolean disableRendererInSource, ::System::Int32 numResultMats, ::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*& oldMeshData, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags newChannels, ::System::Diagnostics::Stopwatch* sw)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::System::Int32, ::System::Collections::Specialized::OrderedDictionary*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*&, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Diagnostics::Stopwatch*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___ADDTOCOMBINED_OFFSET))(this, _goToAdd, _goToDelete, disableRendererInSource, numResultMats, sourceMats2submeshIdx_map, oldMeshData, newChannels, sw);
		}

		::Il2CppArray<::UnityEngine::Transform*>* _getBones(::UnityEngine::Renderer* r, ::System::Boolean isSkinnedMeshWithBones)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__GETBONES_OFFSET))(this, r, isSkinnedMeshWithBones);
		}

		::System::Boolean Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLY_OFFSET))(this, uv2GenerationMethod);
		}

		::System::Void ApplyShowHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLYSHOWHIDE_OFFSET))(this);
		}

		::System::Boolean Apply_1(::System::Boolean triangles, ::System::Boolean vertices, ::System::Boolean normals, ::System::Boolean tangents, ::System::Boolean uvs, ::System::Boolean uv2, ::System::Boolean uv3, ::System::Boolean uv4, ::System::Boolean colors, ::System::Boolean bones, ::System::Boolean blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLY_1_OFFSET))(this, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod);
		}

		::System::Boolean Apply_2(::System::Boolean triangles, ::System::Boolean vertices, ::System::Boolean normals, ::System::Boolean tangents, ::System::Boolean uvs, ::System::Boolean uv2, ::System::Boolean uv3, ::System::Boolean uv4, ::System::Boolean uv5, ::System::Boolean uv6, ::System::Boolean uv7, ::System::Boolean uv8, ::System::Boolean colors, ::System::Boolean bones, ::System::Boolean blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* uv2GenerationMethod)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_APPLY_2_OFFSET))(this, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, uv5, uv6, uv7, uv8, colors, bones, blendShapesFlag, uv2GenerationMethod);
		}

		::System::Boolean UpdateGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATEGAMEOBJECTS_OFFSET))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo);
		}

		::System::Boolean UpdateGameObjects_1(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateUV5, ::System::Boolean updateUV6, ::System::Boolean updateUV7, ::System::Boolean updateUV8, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATEGAMEOBJECTS_1_OFFSET))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
		}

		::System::Boolean _UpdateGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateUV5, ::System::Boolean updateUV6, ::System::Boolean updateUV7, ::System::Boolean updateUV8, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__UPDATEGAMEOBJECTS_OFFSET))(this, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
		}

		::System::Boolean __UpdateGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean recalcBounds, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags newChannels, ::System::Boolean updateVertices, ::System::Boolean updateNormals, ::System::Boolean updateTangents, ::System::Boolean updateUV, ::System::Boolean updateUV2, ::System::Boolean updateUV3, ::System::Boolean updateUV4, ::System::Boolean updateUV5, ::System::Boolean updateUV6, ::System::Boolean updateUV7, ::System::Boolean updateUV8, ::System::Boolean updateColors, ::System::Boolean updateSkinningInfo, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>* meshAnalysisResultsCache, ::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas* uVAdjuster)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult>*>*, ::System::Collections::Specialized::OrderedDictionary*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___UPDATEGAMEOBJECTS_OFFSET))(this, gos, recalcBounds, newChannels, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo, meshAnalysisResultsCache, sourceMats2submeshIdx_map, uVAdjuster);
		}

		::System::Boolean ShowHideGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* toShow, ::Il2CppArray<::UnityEngine::GameObject*>* toHide)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SHOWHIDEGAMEOBJECTS_OFFSET))(this, toShow, toHide);
		}

		::System::Boolean AddDeleteGameObjects(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::UnityEngine::GameObject*>* deleteGOs, ::System::Boolean disableRendererInSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_ADDDELETEGAMEOBJECTS_OFFSET))(this, gos, deleteGOs, disableRendererInSource);
		}

		::System::Boolean AddDeleteGameObjectsByID(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::Il2CppArray<::System::Int32>* deleteGOinstanceIDs, ::System::Boolean disableRendererInSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_ADDDELETEGAMEOBJECTSBYID_OFFSET))(this, gos, deleteGOinstanceIDs, disableRendererInSource);
		}

		::System::Boolean CombinedMeshContains(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_COMBINEDMESHCONTAINS_OFFSET))(this, go);
		}

		::System::Void ClearBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CLEARBUFFERS_OFFSET))(this);
		}

		::UnityEngine::Mesh* _NewMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__NEWMESH_OFFSET))(this);
		}

		::System::Void ClearMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CLEARMESH_OFFSET))(this);
		}

		::System::Void ClearMesh_1(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CLEARMESH_1_OFFSET))(this, editorMethods);
		}

		::System::Void _DisposeRuntimeCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__DISPOSERUNTIMECREATED_OFFSET))(this);
		}

		::System::Void DestroyMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_DESTROYMESH_OFFSET))(this);
		}

		::System::Void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_DESTROYMESHEDITOR_OFFSET))(this, editorMethods);
		}

		::System::Boolean ValidateTargRendererAndMeshAndResultSceneObj()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VALIDATETARGRENDERERANDMESHANDRESULTSCENEOBJ_OFFSET))(this);
		}

		::System::Collections::Specialized::OrderedDictionary* BuildSourceMatsToSubmeshIdxMap(::System::Int32 numResultMats)
		{
			return ((::System::Collections::Specialized::OrderedDictionary*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BUILDSOURCEMATSTOSUBMESHIDXMAP_OFFSET))(this, numResultMats);
		}

		::UnityEngine::Renderer* BuildSceneHierarchPreBake(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* mom, ::UnityEngine::GameObject* root, ::UnityEngine::Mesh* m, ::System::Boolean createNewChild, ::Il2CppArray<::UnityEngine::GameObject*>* objsToBeAdded)
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::UnityEngine::GameObject*, ::UnityEngine::Mesh*, ::System::Boolean, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BUILDSCENEHIERARCHPREBAKE_OFFSET))(this, mom, root, m, createNewChild, objsToBeAdded);
		}

		static ::System::Void _ConfigureSceneHierarch(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* mom, ::UnityEngine::GameObject* root, ::UnityEngine::MeshRenderer* mr, ::UnityEngine::MeshFilter* mf, ::UnityEngine::SkinnedMeshRenderer* smr, ::UnityEngine::Mesh* m, ::Il2CppArray<::UnityEngine::GameObject*>* objsToBeAdded)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::UnityEngine::GameObject*, ::UnityEngine::MeshRenderer*, ::UnityEngine::MeshFilter*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__CONFIGURESCENEHIERARCH_OFFSET))(mom, root, mr, mf, smr, m, objsToBeAdded);
		}

		::System::Void _SetLightmapIndexIfPreserveLightmapping(::UnityEngine::Renderer* tr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__SETLIGHTMAPINDEXIFPRESERVELIGHTMAPPING_OFFSET))(this, tr);
		}

		::System::Void BuildSceneMeshObject(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Boolean createNewChild)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BUILDSCENEMESHOBJECT_OFFSET))(this, gos, createNewChild);
		}

		::System::Boolean IsMirrored(::UnityEngine::Matrix4x4 tm)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_ISMIRRORED_OFFSET))(this, tm);
		}

		::System::Void CheckIntegrity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CHECKINTEGRITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetMaterialsOnTargetRenderer()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_GETMATERIALSONTARGETRENDERER_OFFSET))(this);
		}

		::System::Boolean _UseNativeArrayAPIorNot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__USENATIVEARRAYAPIORNOT_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* Create_BoneProcessor(::System::Boolean doNativeArrays)
		{
			return ((::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CREATE_BONEPROCESSOR_OFFSET))(this, doNativeArrays);
		}

		static ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* Create_VertexAndTriangleProcessor(::System::Boolean doNativeArrays)
		{
			return ((::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CREATE_VERTEXANDTRIANGLEPROCESSOR_OFFSET))(doNativeArrays);
		}

		static ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* Create_MeshChannelsCache(::System::Boolean doNativeArrays, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL, ::DigitalOpus::MB::Core::MB2_LightmapOptions lightmapOption)
		{
			return ((::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*(*)(::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB2_LightmapOptions))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_CREATE_MESHCHANNELSCACHE_OFFSET))(doNativeArrays, LOG_LEVEL, lightmapOption);
		}

		::System::Void UpdateSkinnedMeshApproximateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATESKINNEDMESHAPPROXIMATEBOUNDS_OFFSET))(this);
		}

		::System::Void UpdateSkinnedMeshApproximateBoundsFromBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBONES_OFFSET))(this);
		}

		::System::Void UpdateSkinnedMeshApproximateBoundsFromBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_UPDATESKINNEDMESHAPPROXIMATEBOUNDSFROMBOUNDS_OFFSET))(this);
		}

		static ::System::Void _UpdateMaterialsOnTargetRenderer(::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Renderer* targetRenderer, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>* subTris, ::System::Int32 numNonZeroLengthSubmeshTris)
		{
			return ((::System::Void(*)(::MB2_TextureBakeResults*, ::UnityEngine::Renderer*, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE__UPDATEMATERIALSONTARGETRENDERER_OFFSET))(textureBakeResults, targetRenderer, subTris, numNonZeroLengthSubmeshTris);
		}
	};
}
