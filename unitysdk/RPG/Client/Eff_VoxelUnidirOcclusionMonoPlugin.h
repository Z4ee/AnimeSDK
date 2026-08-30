#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Eff_VoxelUnidirOcclusionMonoPlugin_SeparationOffsetModeType.h"
#include "unitysdk/RPG/Client/Eff_VoxelUnidirOcclusionMonoPlugin_SeparationUniformScaleMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Eff_VoxelUnidirOcclusionBehavior; }
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCDC4060)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCDC4050)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCDC40B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionMonoPlugin_TypeDefinitionIndex = 70371;

	class Eff_VoxelUnidirOcclusionMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Eff_VoxelUnidirOcclusionBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::UnityEngine::GPUParticlesAsset* GPUParticleAsset; // 0x38
		::UnityEngine::ComputeShader* GPUParticleShader; // 0x40
		::UnityEngine::Vector4 ParticleSpawnScale; // 0x48
		::UnityEngine::Vector4 ParticleUnitScale; // 0x58
		::UnityEngine::Material* GPUParticleMaterial; // 0x68
		::System::Single FlyHeight; // 0x70
		::System::Single Disappear; // 0x74
		::System::Boolean AutoAdjustARPatternTiling; // 0x78
		::UnityEngine::Vector2 ARPatternTilingBase; // 0x7C
		::System::Boolean ARPatternUseAxisScale; // 0x84
		::System::Single ARPatternScaleMultiplier; // 0x88
		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin_SeparationOffsetModeType SeparationOffsetMode; // 0x8C
		::UnityEngine::Vector4 SeparationOffsetBase; // 0x90
		::System::Boolean AutoAdjustSeparationOffsetByScale; // 0xA0
		::System::Boolean SeparationXYZUseAxisCompensation; // 0xA1
		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin_SeparationUniformScaleMode SeparationUniformScale; // 0xA4
		::System::Boolean SeparationCompensateW; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
