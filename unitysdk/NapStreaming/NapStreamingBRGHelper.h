#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/GraphicsBufferHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingContext.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingOutput.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawCommand.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawRange.h"
#include "unitysdk/UnityEngine/Rendering/BatchID.h"
#include "unitysdk/UnityEngine/Rendering/BatchMaterialID.h"
#include "unitysdk/UnityEngine/Rendering/BatchMeshID.h"

namespace NapStreaming { class NapStreamingBRGHelper_BatchKeyData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class BatchRendererGroup; }

#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_BUILDFROMSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0xE95C060)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_BUILDSTATICCULLINGDATAFROMBATCHKEYS_OFFSET UNITYSDK_OFFSET(0xE95C440)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_DISPOSERESOURCES_OFFSET UNITYSDK_OFFSET(0xE95BE30)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_GETBUFFERHANDLE_OFFSET UNITYSDK_OFFSET(0xE95BC80)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_ISSERIALIZEDDATAVALID_OFFSET UNITYSDK_OFFSET(0xE95CC30)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE95BDE0)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE95BCD0)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_ONPERFORMCULLING_OFFSET UNITYSDK_OFFSET(0xE95D4A0)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_REGISTERMATERIAL_OFFSET UNITYSDK_OFFSET(0xE95D310)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_REGISTERMESH_OFFSET UNITYSDK_OFFSET(0xE95D180)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_RELEASERAWDATAINPLAYERAFTERINIT_OFFSET UNITYSDK_OFFSET(0xE95CBD0)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_SETSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0xE95CCB0)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER_TRYBUILDIFNEEDED_OFFSET UNITYSDK_OFFSET(0xE95BD20)
#define NAPSTREAMING_NAPSTREAMINGBRGHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xE95D560)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingBRGHelper_TypeDefinitionIndex = 66355;

	class NapStreamingBRGHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 kPerInstanceBit = 0x80000000; // 0x0
		// static const ::System::Int32 kSizeOfFloat4 = 0x10; // 0x0
		// static const ::System::Int32 kSizeOfPackedMatrix = 0x30; // 0x0
		// static const ::System::Int32 kZeroPrefixBytes = 0x40; // 0x0
		::System::Int32 instanceCount; // 0x18
		::UnityEngine::Bounds globalBounds; // 0x1C
		::Il2CppArray<::System::Int32>* rawData; // 0x38
		::System::Collections::Generic::List_1<::NapStreaming::NapStreamingBRGHelper_BatchKeyData*>* batchKeys; // 0x40
		::System::Boolean rawDataReleasedInPlayer; // 0x48
		::UnityEngine::Rendering::BatchRendererGroup* m_Brg; // 0x50
		::UnityEngine::ComputeBuffer* m_InstanceData; // 0x58
		::UnityEngine::Rendering::BatchID m_BatchID; // 0x60
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchDrawCommand> m_StaticDrawCommands; // 0x68
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchDrawRange> m_StaticDrawRanges; // 0x78
		::Unity::Collections::NativeArray_1<::System::Int32> m_StaticVisibleInstances; // 0x88
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Rendering::BatchMeshID>* m_MeshIDs; // 0x98
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Rendering::BatchMaterialID>* m_MaterialIDs; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::GraphicsBufferHandle GetBufferHandle(::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::UnityEngine::GraphicsBufferHandle(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_GETBUFFERHANDLE_OFFSET))(buffer);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_ONDISABLE_OFFSET))(this);
		}

		::System::Void BuildFromSerializedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_BUILDFROMSERIALIZEDDATA_OFFSET))(this);
		}

		::System::Void TryBuildIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_TRYBUILDIFNEEDED_OFFSET))(this);
		}

		::System::Void SetSerializedData(::Il2CppArray<::System::UInt32>* sourceRawData, ::System::Int32 sourceInstanceCount, ::UnityEngine::Bounds sourceGlobalBounds, ::System::Collections::Generic::List_1<::NapStreaming::NapStreamingBRGHelper_BatchKeyData*>* sourceBatchKeys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::NapStreaming::NapStreamingBRGHelper_BatchKeyData*>*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_SETSERIALIZEDDATA_OFFSET))(this, sourceRawData, sourceInstanceCount, sourceGlobalBounds, sourceBatchKeys);
		}

		::System::Void ReleaseRawDataInPlayerAfterInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_RELEASERAWDATAINPLAYERAFTERINIT_OFFSET))(this);
		}

		::System::Boolean IsSerializedDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_ISSERIALIZEDDATAVALID_OFFSET))(this);
		}

		::System::Void BuildStaticCullingDataFromBatchKeys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_BUILDSTATICCULLINGDATAFROMBATCHKEYS_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchMeshID RegisterMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::UnityEngine::Rendering::BatchMeshID(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_REGISTERMESH_OFFSET))(this, mesh);
		}

		::UnityEngine::Rendering::BatchMaterialID RegisterMaterial(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Rendering::BatchMaterialID(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_REGISTERMATERIAL_OFFSET))(this, material);
		}

		::System::Void DisposeResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_DISPOSERESOURCES_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle OnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext, ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGBRGHELPER_ONPERFORMCULLING_OFFSET))(this, rendererGroup, cullingContext, cullingOutput, userContext);
		}
	};
}
