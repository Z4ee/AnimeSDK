#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F06E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1E2F0840)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F0720)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__85_0_OFFSET UNITYSDK_OFFSET(0x1E2F0730)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E2F0780)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__92_0_OFFSET UNITYSDK_OFFSET(0x1E2F0750)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__REFRESHPARTICLES_B__103_1_OFFSET UNITYSDK_OFFSET(0x1E2F0870)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__96_0_OFFSET UNITYSDK_OFFSET(0x1E2F07E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__97_0_OFFSET UNITYSDK_OFFSET(0x1E2F0810)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__95_0_OFFSET UNITYSDK_OFFSET(0x1E2F07B0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle___c_TypeDefinitionIndex = 34859;

	class UIParticle___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__93_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x29070);
		}
		static ::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet___9__85_0()
		{
			return (::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x29078);
		}
		static ::Coffee::UIExtensions::UIParticle___c** StaticGet___9()
		{
			return (::Coffee::UIExtensions::UIParticle___c**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x29080);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__92_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x29088);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__97_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x29090);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__98_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x29098);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__95_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x290A0);
		}
		static ::System::Predicate_1<::UnityEngine::ParticleSystem*>** StaticGet___9__103_1()
		{
			return (::System::Predicate_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x290A8);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__96_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x290B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnDisable_b__85_0(::Coffee::UIExtensions::UIParticleRenderer* r)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__85_0_OFFSET))(this, r);
		}

		::System::Void _Play_b__92_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__92_0_OFFSET))(this, p);
		}

		::System::Void _Pause_b__93_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__93_0_OFFSET))(this, p);
		}

		::System::Void _Stop_b__95_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__95_0_OFFSET))(this, p);
		}

		::System::Void _StartEmission_b__96_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__96_0_OFFSET))(this, p);
		}

		::System::Void _StopEmission_b__97_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__97_0_OFFSET))(this, p);
		}

		::System::Void _Clear_b__98_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__98_0_OFFSET))(this, p);
		}

		::System::Boolean _RefreshParticles_b__103_1(::UnityEngine::ParticleSystem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__REFRESHPARTICLES_B__103_1_OFFSET))(this, x);
		}
	};
}
