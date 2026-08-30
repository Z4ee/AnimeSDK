#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DebugTextureType.h"
#include "unitysdk/RPG/Client/ImportanceSamplingMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG::Client { class SDFRayTraceSystemBehavior; }
namespace RPG::ScreenSpaceRayTracing { class BakedSDFInstanceData; }
namespace RPG::ScreenSpaceRayTracing { class BakedSDFPrefabData; }
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE007C40)
#define RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE007C00)
#define RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN_HASVALIDBAKEDDATA_OFFSET UNITYSDK_OFFSET(0xDFF6FE0)
#define RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE007D80)

namespace RPG::Client
{
	inline static constexpr unsigned int SDFRayTraceSystemMonoPlugin_TypeDefinitionIndex = 70917;

	class SDFRayTraceSystemMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::SDFRayTraceSystemBehavior*>
	{
	public:
		::System::Single resolutionScale; // 0x30
		::System::Boolean enableRayEmission; // 0x34
		::System::Single minSmoothnessToEmit; // 0x38
		::System::Single maxEyeDepthToEmit; // 0x3C
		::System::Int32 maxRaysPerPixel; // 0x40
		::System::Int32 maxRayPoolCapacity; // 0x44
		::System::Int32 maxSDFMetaCapacity; // 0x48
		::RPG::Client::ImportanceSamplingMode samplingMode; // 0x4C
		::System::Boolean useImprovedRandom; // 0x50
		::System::Boolean useFastGGX; // 0x51
		::UnityEngine::ComputeShader* rayEmitterCompute; // 0x58
		::UnityEngine::ComputeShader* bvhTraversalCompute; // 0x60
		::UnityEngine::ComputeShader* sdfTracingCompute; // 0x68
		::UnityEngine::ComputeShader* surfaceCardCompute; // 0x70
		::UnityEngine::ComputeShader* relightingCompute; // 0x78
		::UnityEngine::ComputeShader* rayEmitterUtilsCompute; // 0x80
		::UnityEngine::ComputeShader* bvhTraversalRayPoolCompute; // 0x88
		::UnityEngine::ComputeShader* sdfTracingRayPoolCompute; // 0x90
		::UnityEngine::ComputeShader* surfaceCardRayPoolCompute; // 0x98
		::UnityEngine::ComputeShader* relightingRayPoolCompute; // 0xA0
		::System::Boolean enableRelighting; // 0xA8
		::UnityEngine::GameObject* irradianceCacheSource; // 0xB0
		::System::Single voxelLightStrength; // 0xB8
		::System::Single voxelIrradianceRoughnessBias; // 0xBC
		::System::Single voxelIrradianceNormalOffset; // 0xC0
		::System::Boolean enableSSRRayInjection; // 0xC4
		::System::Boolean enableSSRPreFilter; // 0xC5
		::System::Int32 ssrFilterMaxSteps; // 0xC8
		::System::Single ssrFilterThickness; // 0xCC
		::UnityEngine::ComputeShader* ssrFilterCompute; // 0xD0
		::System::Int32 atlasDilateIterations; // 0xD8
		::System::Int32 maxSDFObjects; // 0xDC
		::System::Boolean rebuildBVHEveryFrame; // 0xE0
		::System::Boolean showBVHGizmos; // 0xE1
		::System::Boolean showDebugInfo; // 0xE2
		::System::Boolean logFrameUpdates; // 0xE3
		::System::Boolean enableBVHDebug; // 0xE4
		::System::Boolean enableBVHDebugKernel; // 0xE5
		::System::Int32 debugTargetObjectID; // 0xE8
		::System::Int32 debugBVHObjectIndex; // 0xEC
		::System::Boolean enableSDFTracingDebug; // 0xF0
		::System::Int32 debugSDFObjectIndex; // 0xF4
		::System::Boolean enableTexturePreview; // 0xF8
		::RPG::Client::DebugTextureType debugTextureType; // 0xFC
		::System::Boolean debugRayGenExecuted; // 0x100
		::System::Boolean debugBVHComputeValid; // 0x101
		::System::Boolean debugManagerValid; // 0x102
		::System::Boolean debugHasValidData; // 0x103
		::System::Boolean debugBuffersValid; // 0x104
		::System::Boolean debugBVHTraversalExecuted; // 0x105
		::System::Boolean debugSDFTracingExecuted; // 0x106
		::System::Boolean debugSurfaceCardExecuted; // 0x107
		::System::Boolean debugRelightingExecuted; // 0x108
		::System::Int32 debugObjectCount; // 0x10C
		::System::Int32 debugBVHNodeCount; // 0x110
		::System::Int32 debugBVHMaxDepth; // 0x114
		::System::Int32 debugRayCount; // 0x118
		::System::Int32 debugTaskCount; // 0x11C
		::System::Int32 debugHitRayCount; // 0x120
		::System::String* debugFailReason; // 0x128
		::UnityEngine::Texture2D* debugPreviewTexture; // 0x130
		::System::Boolean useBakedData; // 0x138
		::Il2CppArray<::RPG::ScreenSpaceRayTracing::BakedSDFPrefabData*>* bakedPrefabDatas; // 0x140
		::Il2CppArray<::RPG::ScreenSpaceRayTracing::BakedSDFInstanceData*>* bakedInstances; // 0x148
		::System::Boolean BFIPMABKDJC; // 0x150
		::System::Boolean OOHHJKPHAAD; // 0x151
		::System::Boolean irradianceCacheSyncAttempted; // 0x152
		::System::Boolean irradianceCacheSyncSuccess; // 0x153
		::System::String* irradianceCacheSyncError; // 0x158
		::System::Boolean vicComponentFound; // 0x160
		::System::Boolean vicDataValid; // 0x161
		::System::Boolean applyToMaterialSuccess; // 0x162
		::System::Boolean m_sdfRendererReplaceEnabled; // 0x163

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean HasValidBakedData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN_HASVALIDBAKEDDATA_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDFRAYTRACESYSTEMMONOPLUGIN_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
