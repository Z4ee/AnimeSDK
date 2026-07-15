#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomProfileCounter_TypeDefinitionIndex = 36373;

	enum class CustomProfileCounter : ::System::Int32
	{
		ExecuteSRP = 0,
		CRPCull = 1,
		CRPCullScene = 2,
		CRPPostCull = 3,
		PrepareRender = 4,
		PrepareCSharp = 5,
		UpdateLogic = 6,
		RenderMainCamera = 7,
		ExecuteRender = 8,
		SetupPass = 9,
		ExecutePass = 10,
		ApplyShader = 11,
		SRPBatchApplyShader = 12,
		SRPBatchApplyShaderOpt = 13,
		ShadowApplyShader = 14,
		ShadowSRPBatchApplyShader = 15,
		ShadowSRPBatchApplyShaderOpt = 16,
		ExcuteGame = 17,
		RHIWaitForWrite = 18,
		PhysicsFixedUpdate = 19,
		RaycastNonAlloc = 20,
		Raycast = 21,
		AnimationUpdate = 22,
		AnimatorsUpdate = 23,
		SkinnedMeshUpdate = 24,
		ParticleSystemUpdate = 25,
		ParticleSyncJobs = 26,
		Num = 27,
	};
}
