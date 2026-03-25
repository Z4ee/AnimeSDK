#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleAttractor; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x119EE0A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET UNITYSDK_OFFSET(0x119EEEB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GET_UIPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x119EE870)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x119EE8C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET UNITYSDK_OFFSET(0x119EE9D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x119E9950)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_OFFSET UNITYSDK_OFFSET(0x119E4D80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x119E9A90)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x119E52C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET UNITYSDK_OFFSET(0x119EEFE0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleUpdater_TypeDefinitionIndex = 34898;

	class UIParticleUpdater : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>** StaticGet_s_ActiveAttractors()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0xFE0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt64>** StaticGet_s_UpdatedGroupIds()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0xFE8);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>** StaticGet_s_ActiveParticles()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0xFF0);
		}
		static ::System::Int32* StaticGet_s_FrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0xD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET))();
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

		static ::System::Void Refresh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET))();
		}

		static ::System::Void GetGroupedRenderers(::System::UInt64 groupId, ::System::Int32 index, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>* results)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::Int32, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET))(groupId, index, results);
		}

		static ::Coffee::UIExtensions::UIParticle* GetPrimary(::System::UInt64 groupId)
		{
			return ((::Coffee::UIExtensions::UIParticle*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET))(groupId);
		}
	};
}
