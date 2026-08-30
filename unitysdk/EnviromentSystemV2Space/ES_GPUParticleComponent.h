#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/ES_GPUParticleComponent_ParticleSimulationType.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyComponent.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0x106CCF80)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x106CDBE0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x106CC660)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x106CC720)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x106CC580)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x106CDB50)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x106CC7E0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x106CE6C0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x106CE680)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_GPUParticleComponent_TypeDefinitionIndex = 49727;

	class ES_GPUParticleComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		static ::System::Int32* StaticGet_DKCAJJGMLAP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CD0);
		}
		static ::System::Int32* StaticGet_KLBOPOKAPNL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CD4);
		}
		static ::System::Int32* StaticGet_PIGBKOJJDAI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CD8);
		}
		static ::System::Int32* StaticGet_FKFKILFFPLI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CDC);
		}
		static ::System::Int32* StaticGet_JOIHPCGIGCN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CE0);
		}
		static ::System::Int32* StaticGet_AHELBELLIDM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CE4);
		}
		static ::System::Int32* StaticGet_BNDIEPGIJNO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CE8);
		}
		static ::System::Int32* StaticGet_ALDNKFOBOIF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CEC);
		}
		static ::System::Int32* StaticGet_IsTransitionTargetID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CF0);
		}
		static ::System::Int32* StaticGet_LECMCDEBBHA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CF4);
		}
		static ::System::Int32* StaticGet_CHDFDHFNOBE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CF8);
		}
		static ::System::Int32* StaticGet_PLAGCLBBDAB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14CFC);
		}
		static ::System::Int32* StaticGet_JCKILNLNDJO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D00);
		}
		static ::System::Int32* StaticGet_HGBAIEPJAGF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D04);
		}
		static ::System::Int32* StaticGet_EHKJHMDOOOC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D08);
		}
		static ::System::Int32* StaticGet_HMNAHOPLJFH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D0C);
		}
		static ::System::Int32* StaticGet_LINLNENIKAH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D10);
		}
		static ::System::Int32* StaticGet_MLDDPJFBOBL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D14);
		}
		static ::System::Int32* StaticGet_JJJEAOMNLHP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D18);
		}
		static ::System::Int32* StaticGet_DOFHONMAMLA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D1C);
		}
		static ::System::Int32* StaticGet_PCDJHNDMNOG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x14D20);
		}
		::EnviromentSystemV2Space::ES_GPUParticleComponent_ParticleSimulationType m_GpuSimType; // 0x18
		::UnityEngine::Vector3 m_SimulationRange; // 0x1C
		::UnityEngine::Vector2 m_GpuParticleSize; // 0x28
		::System::Single m_GpuParticleWindScale; // 0x30
		::UnityEngine::Vector3 m_GpuParticleWindNoiseScale; // 0x34
		::UnityEngine::Vector3 m_GpuParticleWindNoiseTilling; // 0x40
		::UnityEngine::Material* m_RenderignMat; // 0x50
		::System::Boolean m_OccluderAsVolume; // 0x58
		::UnityEngine::MeshRenderer* GPUParticleRenderer; // 0x60
		::UnityEngine::MeshFilter* GPUParticleMeshFilter; // 0x68
		::UnityEngine::RenderTexture* WeatherGPUParticlePosition; // 0x70
		::UnityEngine::RenderTexture* WeatherGPUParticleSpeed; // 0x78
		::UnityEngine::Vector3 GpuParticleBound_Mins_Old; // 0x80
		::UnityEngine::Vector3 GpuParticleBound_Maxs_Old; // 0x8C
		::System::Int32 FrameCount; // 0x98
		::UnityEngine::Material* m_RenderignMatInstanced; // 0xA0
		::System::Boolean DOFJLCMOJML; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* JMHEKAAEOPB; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_INIT_OFFSET))(this, a1);
		}
	};
}
