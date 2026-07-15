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

#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0xF1DF1B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xF1DFE10)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xF1DE890)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xF1DE950)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0xF1DE7B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0xF1DFD80)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xF1DEA10)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1E08F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1E08B0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_GPUParticleComponent_TypeDefinitionIndex = 47447;

	class ES_GPUParticleComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		static ::System::Int32* StaticGet_Field_6_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DD0);
		}
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DD4);
		}
		static ::System::Int32* StaticGet_Field_6_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DD8);
		}
		static ::System::Int32* StaticGet_Field_6_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DDC);
		}
		static ::System::Int32* StaticGet_Field_6_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DE0);
		}
		static ::System::Int32* StaticGet_Field_6_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DE4);
		}
		static ::System::Int32* StaticGet_Field_6_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DE8);
		}
		static ::System::Int32* StaticGet_Field_6_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DEC);
		}
		static ::System::Int32* StaticGet_Field_6_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DF0);
		}
		static ::System::Int32* StaticGet_Field_6_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DF4);
		}
		static ::System::Int32* StaticGet_Field_6_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DF8);
		}
		static ::System::Int32* StaticGet_Field_6_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8DFC);
		}
		static ::System::Int32* StaticGet_Field_6_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E00);
		}
		static ::System::Int32* StaticGet_Field_6_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E04);
		}
		static ::System::Int32* StaticGet_Field_6_14()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E08);
		}
		static ::System::Int32* StaticGet_Field_6_15()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E0C);
		}
		static ::System::Int32* StaticGet_Field_6_16()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E10);
		}
		static ::System::Int32* StaticGet_Field_6_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E14);
		}
		static ::System::Int32* StaticGet_Field_6_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E18);
		}
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E1C);
		}
		static ::System::Int32* StaticGet_IsTransitionTargetID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x8E20);
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
		::System::Boolean Field_6_37; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_38; // 0xB0

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
