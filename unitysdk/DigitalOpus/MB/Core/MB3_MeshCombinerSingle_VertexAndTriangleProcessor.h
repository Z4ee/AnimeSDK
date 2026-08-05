#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshPivotLocation.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_RenderType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class IAssignToMeshCustomizer; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MeshChannelsCache; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_SerializableIntArray; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_UVAdjuster_Atlas; }
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace DigitalOpus::MB::Core { class MB_IMeshCombinerSingle_BoneProcessor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ADJUSTVERTSTOWRITEACCORDINGTOPIVOTPOSITIONIFNECESSARY_OFFSET UNITYSDK_OFFSET(0xAA4210)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ASSIGNBUFFERSTOMESH_OFFSET UNITYSDK_OFFSET(0xAA41F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ASSIGNTRIANGLEDATAFORSUBMESHES_OFFSET UNITYSDK_OFFSET(0xAA4200)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ASSIGNTRIANGLEDATAFORSUBMESHES_SHOWHIDE_OFFSET UNITYSDK_OFFSET(0xAA4200)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_COPYARRAYSFROMPREVIOUSBAKEBUFFERSTONEWBUFFERS_OFFSET UNITYSDK_OFFSET(0xAA4170)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_COPYFROMDGOMESHTOBUFFERS_OFFSET UNITYSDK_OFFSET(0xAA4180)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_COPYUV2UNCHANGEDTOSEPARATERECTS_OFFSET UNITYSDK_OFFSET(0xAA4270)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA4050)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETSUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xAA4120)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETSUBMESHTRISWITHSHOWHIDEAPPLIED_OFFSET UNITYSDK_OFFSET(0xAA4280)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETTRIANGLESIZES_OFFSET UNITYSDK_OFFSET(0xAA4290)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xAA4100)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_INITFROMMESHCOMBINER_OFFSET UNITYSDK_OFFSET(0xAA40F0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_INITSHOWHIDE_OFFSET UNITYSDK_OFFSET(0xAA40C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_INIT_OFFSET UNITYSDK_OFFSET(0xAA4090)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x324690)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x458BA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_SET_CHANNELS_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_TRANSFEROWNERSHIPOFSERIALIZABLEBUFFERSTOCOMBINER_OFFSET UNITYSDK_OFFSET(0xAA4140)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__COPYANDADJUSTUV2FROMMESH_OFFSET UNITYSDK_OFFSET(0xAA4260)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__COPYANDADJUSTUVSFROMMESH_OFFSET UNITYSDK_OFFSET(0xAA4250)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLDMATRIX_TRS_OFFSET UNITYSDK_OFFSET(0x1F435880)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0xAA42A0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLD_TRS_OFFSET UNITYSDK_OFFSET(0x1F435ED0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLD_TR_OFFSET UNITYSDK_OFFSET(0x1F435340)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__NUMNONZEROLENGTHSUBMESHTRIS_OFFSET UNITYSDK_OFFSET(0x1F434B00)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_VertexAndTriangleProcessor_TypeDefinitionIndex = 94579;

	struct alignas(8) MB3_MeshCombinerSingle_VertexAndTriangleProcessor
	{
		::System::Boolean _disposed; // 0x10
		::System::Boolean _isInitialized; // 0x11
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x14
		::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags _channels_k__BackingField; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* verticies; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* normals; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* tangents; // 0x30
		::Il2CppArray<::UnityEngine::Color>* colors; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* uv0s; // 0x40
		::Il2CppArray<::System::Single>* uvsSliceIdx; // 0x48
		::Il2CppArray<::UnityEngine::Vector2>* uv2s; // 0x50
		::Il2CppArray<::UnityEngine::Vector2>* uv3s; // 0x58
		::Il2CppArray<::UnityEngine::Vector2>* uv4s; // 0x60
		::Il2CppArray<::UnityEngine::Vector2>* uv5s; // 0x68
		::Il2CppArray<::UnityEngine::Vector2>* uv6s; // 0x70
		::Il2CppArray<::UnityEngine::Vector2>* uv7s; // 0x78
		::Il2CppArray<::UnityEngine::Vector2>* uv8s; // 0x80
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>* submeshTris; // 0x88

		::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags get_channels()
		{
			return ((::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GET_CHANNELS_OFFSET))(this);
		}

		::System::Void set_channels(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_SET_CHANNELS_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ISINITIALIZED_OFFSET))(this);
		}

		::System::Boolean IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ISDISPOSED_OFFSET))(this);
		}

		::System::Void Init(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags newChannels, ::System::Int32 vertexCount, ::Il2CppArray<::System::Int32>* newSubmeshTrisSize, ::System::Int32 uvChannelWithExtraParameter, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* meshChannelsCache, ::System::Boolean loadDataFromCombinedMesh, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_INIT_OFFSET))(this, combiner, newChannels, vertexCount, newSubmeshTrisSize, uvChannelWithExtraParameter, meshChannelsCache, loadDataFromCombinedMesh, logLevel);
		}

		::System::Void InitShowHide(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_INITSHOWHIDE_OFFSET))(this, combiner);
		}

		::System::Void InitFromMeshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags newChannels, ::System::Int32 uvChannelWithExtraParameter)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_INITFROMMESHCOMBINER_OFFSET))(this, combiner, newChannels, uvChannelWithExtraParameter);
		}

		::System::Int32 GetVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETVERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 GetSubmeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETSUBMESHCOUNT_OFFSET))(this);
		}

		/*
		::System::Void TransferOwnershipOfSerializableBuffersToCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* c, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags channelsToTransfer, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake serializableBufferData)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_TRANSFEROWNERSHIPOFSERIALIZABLEBUFFERSTOCOMBINER_OFFSET))(this, c, channelsToTransfer, serializableBufferData);
		}
		*/

		::System::Void CopyArraysFromPreviousBakeBuffersToNewBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*& iOldBuffers, ::System::Int32 destStartVertIdx, ::System::Int32 triangleIdxAdjustment, ::Il2CppArray<::System::Int32>* targSubmeshTidx, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*&, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_COPYARRAYSFROMPREVIOUSBAKEBUFFERSTONEWBUFFERS_OFFSET))(this, dgo, iOldBuffers, destStartVertIdx, triangleIdxAdjustment, targSubmeshTidx, LOG_LEVEL);
		}

		::System::Void CopyFromDGOMeshToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::System::Int32 destStartVertsIdx, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags channelsToUpdate, ::System::Boolean updateTris, ::System::Boolean updateBWdata, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor* boneProcessor, ::Il2CppArray<::System::Int32>* targSubmeshTidx, ::MB2_TextureBakeResults* textureBakeResults, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas* uvAdjuster, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface* meshChannelCacheParam)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::System::Int32, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Boolean, ::System::Boolean, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*, ::Il2CppArray<::System::Int32>*, ::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_UVAdjuster_Atlas*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IMeshChannelsCacheTaggingInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_COPYFROMDGOMESHTOBUFFERS_OFFSET))(this, dgo, destStartVertsIdx, channelsToUpdate, updateTris, updateBWdata, settings, boneProcessor, targSubmeshTidx, textureBakeResults, uvAdjuster, LOG_LEVEL, meshChannelCacheParam);
		}

		/*
		::System::Void AssignBuffersToMesh(::UnityEngine::Mesh* mesh, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags channelsToWriteToMesh, ::System::Boolean doWriteTrisToMesh, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* assignToMeshCustomizer, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* mbDynamicObjectsInCombinedMesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake& serializableBufferData, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*& submeshTrisToUse, ::System::Int32& numNonZeroLengthSubmeshes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, ::System::Boolean, ::DigitalOpus::MB::Core::IAssignToMeshCustomizer*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake&, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ASSIGNBUFFERSTOMESH_OFFSET))(this, mesh, settings, textureBakeResults, channelsToWriteToMesh, doWriteTrisToMesh, assignToMeshCustomizer, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
		}
		*/

		/*
		::System::Void AssignTriangleDataForSubmeshes(::UnityEngine::Mesh* mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* mbDynamicObjectsInCombinedMesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake& serializableBufferData, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*& submeshTrisToUse, ::System::Int32& numNonZeroLengthSubmeshes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake&, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ASSIGNTRIANGLEDATAFORSUBMESHES_OFFSET))(this, mesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
		}
		*/

		/*
		::System::Void AssignTriangleDataForSubmeshes_ShowHide(::UnityEngine::Mesh* mesh, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* mbDynamicObjectsInCombinedMesh, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake& serializableBufferData, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*& submeshTrisToUse, ::System::Int32& numNonZeroLengthSubmeshes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake&, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ASSIGNTRIANGLEDATAFORSUBMESHES_SHOWHIDE_OFFSET))(this, mesh, mbDynamicObjectsInCombinedMesh, serializableBufferData, submeshTrisToUse, numNonZeroLengthSubmeshes);
		}
		*/

		/*
		::System::Void AdjustVertsToWriteAccordingToPivotPositionIfNecessary(::DigitalOpus::MB::Core::MB_MeshPivotLocation pivotLocationType, ::DigitalOpus::MB::Core::MB_RenderType renderType, ::System::Boolean clearBuffersAfterBake, ::UnityEngine::Vector3 pivotLocation_wld, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake& serializableBufferData, ::Il2CppArray<::UnityEngine::Vector3>*& verts2Write)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_MeshPivotLocation, ::DigitalOpus::MB::Core::MB_RenderType, ::System::Boolean, ::UnityEngine::Vector3, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_BufferDataFromPreviousBake&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_ADJUSTVERTSTOWRITEACCORDINGTOPIVOTPOSITIONIFNECESSARY_OFFSET))(this, pivotLocationType, renderType, clearBuffersAfterBake, pivotLocation_wld, serializableBufferData, verts2Write);
		}
		*/

		static ::System::Int32 _NumNonZeroLengthSubmeshTris(::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>* subTris, ::System::Int32& numIndexes)
		{
			return ((::System::Int32(*)(::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__NUMNONZEROLENGTHSUBMESHTRIS_OFFSET))(subTris, numIndexes);
		}

		::System::Void _copyAndAdjustUVsFromMesh(::MB2_TextureBakeResults* tbr, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::UnityEngine::Mesh* mesh, ::System::Int32 uvChannel, ::System::Int32 vertsIdx, ::Il2CppArray<::UnityEngine::Vector2>* uvsOut, ::Il2CppArray<::System::Single>* uvsSliceIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache* meshChannelsCache, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL, ::MB2_TextureBakeResults* textureBakeResults)
		{
			return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::MB2_TextureBakeResults*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__COPYANDADJUSTUVSFROMMESH_OFFSET))(this, tbr, dgo, mesh, uvChannel, vertsIdx, uvsOut, uvsSliceIdx, meshChannelsCache, LOG_LEVEL, textureBakeResults);
		}

		::System::Void _CopyAndAdjustUV2FromMesh(::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache* meshChannelsCache, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::System::Int32 vertsIdx, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MeshChannelsCache*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::System::Int32, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__COPYANDADJUSTUV2FROMMESH_OFFSET))(this, settings, meshChannelsCache, dgo, vertsIdx, LOG_LEVEL);
		}

		::System::Void CopyUV2unchangedToSeparateRects(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* mbDynamicObjectsInCombinedMesh, ::System::Single uv2UnwrappingParamsPackMargin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_COPYUV2UNCHANGEDTOSEPARATERECTS_OFFSET))(this, mbDynamicObjectsInCombinedMesh, uv2UnwrappingParamsPackMargin);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>* GetSubmeshTrisWithShowHideApplied(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>* mbDynamicObjectsInCombinedMesh)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_SerializableIntArray*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETSUBMESHTRISWITHSHOWHIDEAPPLIED_OFFSET))(this, mbDynamicObjectsInCombinedMesh);
		}

		::Il2CppArray<::System::Int32>* GetTriangleSizes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR_GETTRIANGLESIZES_OFFSET))(this);
		}

		::System::Void _LocalToWorld(::UnityEngine::Transform* t, ::System::Boolean doNorm, ::System::Boolean doTan, ::System::Int32 destStartVertsIdx, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshVerts, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshNorms, ::Il2CppArray<::UnityEngine::Vector4>* dgoMeshTans, ::Il2CppArray<::UnityEngine::Vector3>* verticies, ::Il2CppArray<::UnityEngine::Vector3>* normals, ::Il2CppArray<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLD_OFFSET))(this, t, doNorm, doTan, destStartVertsIdx, dgoMeshVerts, dgoMeshNorms, dgoMeshTans, verticies, normals, tangents);
		}

		/*
		static ::System::Void _LocalToWorldMatrix_TRS(::UnityEngine::Matrix4x4& wld_X_local, ::System::Boolean doNorm, ::System::Boolean doTan, ::System::Int32 destStartVertsIdx, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshVerts, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshNorms, ::Il2CppArray<::UnityEngine::Vector4>* dgoMeshTans, ::Il2CppArray<::UnityEngine::Vector3>* verticies, ::Il2CppArray<::UnityEngine::Vector3>* normals, ::Il2CppArray<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLDMATRIX_TRS_OFFSET))(wld_X_local, doNorm, doTan, destStartVertsIdx, dgoMeshVerts, dgoMeshNorms, dgoMeshTans, verticies, normals, tangents);
		}
		*/

		/*
		static ::System::Void _LocalToWorld_TR(::UnityEngine::Quaternion wld_Rot_local, ::UnityEngine::Vector3 position_wld, ::System::Boolean doNorm, ::System::Boolean doTan, ::System::Int32 destStartVertsIdx, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshVerts_local, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshNorms_local, ::Il2CppArray<::UnityEngine::Vector4>* dgoMeshTans_local, ::Il2CppArray<::UnityEngine::Vector3>* verticies, ::Il2CppArray<::UnityEngine::Vector3>* normals, ::Il2CppArray<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLD_TR_OFFSET))(wld_Rot_local, position_wld, doNorm, doTan, destStartVertsIdx, dgoMeshVerts_local, dgoMeshNorms_local, dgoMeshTans_local, verticies, normals, tangents);
		}
		*/

		/*
		static ::System::Void _LocalToWorld_TRS(::UnityEngine::Quaternion wld_Rot_local, ::UnityEngine::Vector3 position_wld, ::UnityEngine::Vector3 scale, ::System::Boolean doNorm, ::System::Boolean doTan, ::System::Int32 destStartVertsIdx, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshVerts_local, ::Il2CppArray<::UnityEngine::Vector3>* dgoMeshNorms_local, ::Il2CppArray<::UnityEngine::Vector4>* dgoMeshTans_local, ::Il2CppArray<::UnityEngine::Vector3>* verticies, ::Il2CppArray<::UnityEngine::Vector3>* normals, ::Il2CppArray<::UnityEngine::Vector4>* tangents)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_VERTEXANDTRIANGLEPROCESSOR__LOCALTOWORLD_TRS_OFFSET))(wld_Rot_local, position_wld, scale, doNorm, doTan, destStartVertsIdx, dgoMeshVerts_local, dgoMeshNorms_local, dgoMeshTans_local, verticies, normals, tangents);
		}
		*/
	};
}
