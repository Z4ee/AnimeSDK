#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5000)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__95_0_OFFSET UNITYSDK_OFFSET(0x1D7D5160)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5040)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__85_0_OFFSET UNITYSDK_OFFSET(0x1D7D5050)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__90_0_OFFSET UNITYSDK_OFFSET(0x1D7D50A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__89_0_OFFSET UNITYSDK_OFFSET(0x1D7D5070)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__REFRESHPARTICLES_B__100_1_OFFSET UNITYSDK_OFFSET(0x1D7D5190)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__93_0_OFFSET UNITYSDK_OFFSET(0x1D7D5100)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__94_0_OFFSET UNITYSDK_OFFSET(0x1D7D5130)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__92_0_OFFSET UNITYSDK_OFFSET(0x1D7D50D0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle___c_TypeDefinitionIndex = 34223;

	class UIParticle___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__93_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27850);
		}
		static ::Coffee::UIExtensions::UIParticle___c** StaticGet___9()
		{
			return (::Coffee::UIExtensions::UIParticle___c**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27858);
		}
		static ::System::Predicate_1<::UnityEngine::ParticleSystem*>** StaticGet___9__100_1()
		{
			return (::System::Predicate_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27860);
		}
		static ::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet___9__85_0()
		{
			return (::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27868);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__92_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27870);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__90_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27878);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__94_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27880);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__89_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27888);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__95_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x27890);
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

		::System::Void _Play_b__89_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__89_0_OFFSET))(this, p);
		}

		::System::Void _Pause_b__90_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__90_0_OFFSET))(this, p);
		}

		::System::Void _Stop_b__92_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__92_0_OFFSET))(this, p);
		}

		::System::Void _StartEmission_b__93_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__93_0_OFFSET))(this, p);
		}

		::System::Void _StopEmission_b__94_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__94_0_OFFSET))(this, p);
		}

		::System::Void _Clear_b__95_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__95_0_OFFSET))(this, p);
		}

		::System::Boolean _RefreshParticles_b__100_1(::UnityEngine::ParticleSystem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__REFRESHPARTICLES_B__100_1_OFFSET))(this, x);
		}
	};
}
