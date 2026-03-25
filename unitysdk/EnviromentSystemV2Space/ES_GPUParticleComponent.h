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

#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_APPLY_OFFSET UNITYSDK_OFFSET(0x10355410)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x10356070)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x10354B60)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x10354C20)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_ONFADING_OFFSET UNITYSDK_OFFSET(0x10354A80)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x10355FE0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x10354CE0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x10356BA0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10356B60)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0x10356EA0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x10356F30)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x10356DA0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x10356DF0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x10356D40)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x10356EF0)
#define ENVIROMENTSYSTEMV2SPACE_ES_GPUPARTICLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10356E40)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_GPUParticleComponent_TypeDefinitionIndex = 39990;

	class ES_GPUParticleComponent : public ::EnviromentSystemV2Space::PrefabPropertyComponent
	{
	public:
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54A0);
		}
		static ::System::Int32* StaticGet_Field_6_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54A4);
		}
		static ::System::Int32* StaticGet_Field_6_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54A8);
		}
		static ::System::Int32* StaticGet_Field_6_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54AC);
		}
		static ::System::Int32* StaticGet_IsTransitionTargetID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54B0);
		}
		static ::System::Int32* StaticGet_Field_6_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54B4);
		}
		static ::System::Int32* StaticGet_Field_6_35()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54B8);
		}
		static ::System::Int32* StaticGet_Field_6_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54BC);
		}
		static ::System::Int32* StaticGet_Field_6_33()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}
		static ::System::Int32* StaticGet_Field_6_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54C4);
		}
		static ::System::Int32* StaticGet_Field_6_38()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54C8);
		}
		static ::System::Int32* StaticGet_Field_6_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54CC);
		}
		static ::System::Int32* StaticGet_Field_6_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54D0);
		}
		static ::System::Int32* StaticGet_Field_6_37()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54D4);
		}
		static ::System::Int32* StaticGet_Field_6_36()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54D8);
		}
		static ::System::Int32* StaticGet_Field_6_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54DC);
		}
		static ::System::Int32* StaticGet_Field_6_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54E0);
		}
		static ::System::Int32* StaticGet_Field_6_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54E4);
		}
		static ::System::Int32* StaticGet_Field_6_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54E8);
		}
		static ::System::Int32* StaticGet_Field_6_32()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54EC);
		}
		static ::System::Int32* StaticGet_Field_6_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ES_GPUParticleComponent_TypeDefinitionIndex)->GetStaticField(0x54F0);
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
