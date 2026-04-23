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

#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0xF91C1A0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xF91CE00)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xF91B8F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xF91B9B0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0xF91B810)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0xF91CD70)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xF91BA70)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF91D930)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF91D8F0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0xF91DC30)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xF91DCC0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xF91DB30)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0xF91DB80)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0xF91DAD0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0xF91DC80)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xF91DBD0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_GPUParticleComponent_TypeDefinitionIndex = 45899;

	class ES_GPUParticleComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		static ::System::Int32* StaticGet_Field_6_38()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4820);
		}
		static ::System::Int32* StaticGet_Field_6_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4824);
		}
		static ::System::Int32* StaticGet_Field_6_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4828);
		}
		static ::System::Int32* StaticGet_Field_6_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x482C);
		}
		static ::System::Int32* StaticGet_IsTransitionTargetID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4830);
		}
		static ::System::Int32* StaticGet_Field_6_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4834);
		}
		static ::System::Int32* StaticGet_Field_6_32()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4838);
		}
		static ::System::Int32* StaticGet_Field_6_33()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x483C);
		}
		static ::System::Int32* StaticGet_Field_6_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4840);
		}
		static ::System::Int32* StaticGet_Field_6_36()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4844);
		}
		static ::System::Int32* StaticGet_Field_6_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4848);
		}
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x484C);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4850);
		}
		static ::System::Int32* StaticGet_Field_6_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4854);
		}
		static ::System::Int32* StaticGet_Field_6_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4858);
		}
		static ::System::Int32* StaticGet_Field_6_35()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x485C);
		}
		static ::System::Int32* StaticGet_Field_6_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4860);
		}
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4864);
		}
		static ::System::Int32* StaticGet_Field_6_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4868);
		}
		static ::System::Int32* StaticGet_Field_6_37()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x486C);
		}
		static ::System::Int32* StaticGet_Field_6_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x4870);
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
		::System::Boolean Field_6_16; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_18; // 0xB0

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

		::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Apply(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_APPLY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}
	};
}
