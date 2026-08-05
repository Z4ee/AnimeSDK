#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobRendererUpdate.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleAttractor; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E300C20)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET UNITYSDK_OFFSET(0x1E30E070)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GET_UIPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1E30CD40)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x1E30CDC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHJOB_OFFSET UNITYSDK_OFFSET(0x1E30BE70)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHV2_OFFSET UNITYSDK_OFFSET(0x1E30D020)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E30D060)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x1E2F1180)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1E2E5A80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x1E2F13B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1E2E65A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30E560)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleUpdater_TypeDefinitionIndex = 34873;

	class UIParticleUpdater : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>** StaticGet_s_ActiveAttractors()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29140);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate>** StaticGet_s_JobPreparedRendererUpdates()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29148);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet_s_JobParticleSystems()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29150);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate>** StaticGet_s_JobRendererUpdates()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29158);
		}
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_s_JobParticlesTimes()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29160);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet_s_JobMaterialRenderers()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29168);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>** StaticGet_s_ActiveParticles()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29170);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_UpdatedGroupIds()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x29178);
		}
		static ::System::Int32* StaticGet_s_FrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET))();
		}

		static ::System::Void RefreshJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHJOB_OFFSET))();
		}

		static ::System::Int32 get_uiParticleCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GET_UIPARTICLECOUNT_OFFSET))();
		}

		static ::System::Void Register(::Coffee::UIExtensions::UIParticle* particle)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_OFFSET))(particle);
		}

		static ::System::Void Unregister(::Coffee::UIExtensions::UIParticle* particle)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_OFFSET))(particle);
		}

		static ::System::Void Register_1(::Coffee::UIExtensions::UIParticleAttractor* attractor)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticleAttractor*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_1_OFFSET))(attractor);
		}

		static ::System::Void Unregister_1(::Coffee::UIExtensions::UIParticleAttractor* attractor)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticleAttractor*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_1_OFFSET))(attractor);
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEONLOAD_OFFSET))();
		}

		static ::System::Void RefreshV2()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHV2_OFFSET))();
		}

		static ::System::Void Refresh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET))();
		}

		static ::System::Void GetGroupedRenderers(::System::Int32 groupId, ::System::Int32 index, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>* results)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET))(groupId, index, results);
		}

		static ::Coffee::UIExtensions::UIParticle* GetPrimary(::System::Int32 groupId)
		{
			return ((::Coffee::UIExtensions::UIParticle*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET))(groupId);
		}
	};
}
