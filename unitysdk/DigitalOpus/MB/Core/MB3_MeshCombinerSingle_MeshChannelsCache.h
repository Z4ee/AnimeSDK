#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LightmapOptions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_RenderType.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_Utility_MeshAnalysisResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MBBlendShape; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MeshChannels; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_COLLECTCHANNELDATAFORALLMESHESINLIST_OFFSET UNITYSDK_OFFSET(0x1DE853B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DE84A10)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE849F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETBINDPOSES_OFFSET UNITYSDK_OFFSET(0x1DE86980)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1DE86BD0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1DE86AE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETCOLORS_OFFSET UNITYSDK_OFFSET(0x1DE852E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETNORMALS_OFFSET UNITYSDK_OFFSET(0x1DE84D80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETTANGENTS_OFFSET UNITYSDK_OFFSET(0x1DE84E50)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUV0MODIFIED_OFFSET UNITYSDK_OFFSET(0x1DE84F20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUV0RAW_OFFSET UNITYSDK_OFFSET(0x1DE84BB0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUV2MODIFIED_OFFSET UNITYSDK_OFFSET(0x1DE84FF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUVCHANNEL_OFFSET UNITYSDK_OFFSET(0x1DE850C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1DE84C80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_HASCOLLECTEDMESHDATA_OFFSET UNITYSDK_OFFSET(0x1DE84B70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_HASOUTOFBOUNDSUVS_OFFSET UNITYSDK_OFFSET(0x1DE84B80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE84930)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GENERATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1DE86E20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETBINDPOSES_OFFSET UNITYSDK_OFFSET(0x1DE86540)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1DE86780)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHCOLORS_OFFSET UNITYSDK_OFFSET(0x1DE863F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHNORMALS_OFFSET UNITYSDK_OFFSET(0x1DE860B0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHTANGENTS_OFFSET UNITYSDK_OFFSET(0x1DE86210)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHUV2S_OFFSET UNITYSDK_OFFSET(0x1DE85FD0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHUVS_OFFSET UNITYSDK_OFFSET(0x1DE85E40)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MeshChannelsCache_TypeDefinitionIndex = 90642;

	class MB3_MeshCombinerSingle_MeshChannelsCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannels*>* meshID2MeshChannels; // 0x10
		::System::Boolean _collectedMeshData; // 0x18
		::System::Boolean _disposed; // 0x19
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x1C
		::UnityEngine::Vector2 _HALF_UV; // 0x20
		::DigitalOpus::MB::Core::MB2_LightmapOptions lightmapOption; // 0x28

		::System::Void _ctor(::DigitalOpus::MB::Core::MB2_LogLevel ll, ::DigitalOpus::MB::Core::MB2_LightmapOptions lo)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB2_LightmapOptions))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__CTOR_OFFSET))(this, ll, lo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean HasCollectedMeshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_HASCOLLECTEDMESHDATA_OFFSET))(this);
		}

		::System::Boolean hasOutOfBoundsUVs(::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult& mar, ::System::Int32 submeshIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_Utility_MeshAnalysisResult&, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_HASOUTOFBOUNDSUVS_OFFSET))(this, m, mar, submeshIdx);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetVertices(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETVERTICES_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetNormals(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETNORMALS_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetTangents(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETTANGENTS_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetUv0Raw(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUV0RAW_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetUv0Modified(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUV0MODIFIED_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetUv2Modified(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUV2MODIFIED_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetUVChannel(::System::Int32 channel, ::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETUVCHANNEL_OFFSET))(this, channel, m);
		}

		::Il2CppArray<::UnityEngine::Color>* GetColors(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETCOLORS_OFFSET))(this, m);
		}

		::System::Void CollectChannelDataForAllMeshesInList(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* toUpdateDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* toAddDGOs, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags newChannels, ::DigitalOpus::MB::Core::MB_RenderType renderType, ::System::Boolean doBlendShapes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::DigitalOpus::MB::Core::MB_RenderType, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_COLLECTCHANNELDATAFORALLMESHESINLIST_OFFSET))(this, toUpdateDGOs, toAddDGOs, newChannels, renderType, doBlendShapes);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GetBindposes(::UnityEngine::Renderer* r, ::System::Boolean& isSkinnedMeshWithBones)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETBINDPOSES_OFFSET))(this, r, isSkinnedMeshWithBones);
		}

		::Il2CppArray<::UnityEngine::BoneWeight>* GetBoneWeights(::UnityEngine::Renderer* r, ::System::Int32 numVertsInMeshBeingAdded, ::System::Boolean isSkinnedMeshWithBones)
		{
			return ((::Il2CppArray<::UnityEngine::BoneWeight>*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETBONEWEIGHTS_OFFSET))(this, r, numVertsInMeshBeingAdded, isSkinnedMeshWithBones);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>* GetBlendShapes(::UnityEngine::Mesh* m, ::System::Int32 gameObjectID, ::UnityEngine::GameObject* gameObject)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>*(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE_GETBLENDSHAPES_OFFSET))(this, m, gameObjectID, gameObject);
		}

		::Il2CppArray<::UnityEngine::Color>* _getMeshColors(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHCOLORS_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector3>* _getMeshNormals(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHNORMALS_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector4>* _getMeshTangents(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHTANGENTS_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _getMeshUVs(::UnityEngine::Mesh* m)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHUVS_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _getMeshUV2s(::UnityEngine::Mesh* m, ::Il2CppArray<::UnityEngine::Vector2>*& uv2modified)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETMESHUV2S_OFFSET))(this, m, uv2modified);
		}

		static ::System::Void _getBindPoses(::UnityEngine::Renderer* r, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* poses, ::System::Boolean& isSkinnedMeshWithBones)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETBINDPOSES_OFFSET))(r, poses, isSkinnedMeshWithBones);
		}

		static ::Il2CppArray<::UnityEngine::BoneWeight>* _getBoneWeights(::UnityEngine::Renderer* r, ::System::Int32 numVertsInMeshBeingAdded, ::System::Boolean isSkinnedMeshWithBones)
		{
			return ((::Il2CppArray<::UnityEngine::BoneWeight>*(*)(::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GETBONEWEIGHTS_OFFSET))(r, numVertsInMeshBeingAdded, isSkinnedMeshWithBones);
		}

		::System::Void _generateTangents(::Il2CppArray<::System::Int32>* triangles, ::Il2CppArray<::UnityEngine::Vector3>* verts, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::UnityEngine::Vector3>* normals, ::Il2CppArray<::UnityEngine::Vector4>* outTangents)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELSCACHE__GENERATETANGENTS_OFFSET))(this, triangles, verts, uvs, normals, outTangents);
		}
	};
}
