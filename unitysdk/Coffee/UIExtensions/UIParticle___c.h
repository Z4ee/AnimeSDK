#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119E92C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__108_0_OFFSET UNITYSDK_OFFSET(0x119E9410)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119E92F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__98_0_OFFSET UNITYSDK_OFFSET(0x119E9300)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__103_0_OFFSET UNITYSDK_OFFSET(0x119E9350)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__102_0_OFFSET UNITYSDK_OFFSET(0x119E9320)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__106_0_OFFSET UNITYSDK_OFFSET(0x119E93B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__107_0_OFFSET UNITYSDK_OFFSET(0x119E93E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__105_0_OFFSET UNITYSDK_OFFSET(0x119E9380)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle___c_TypeDefinitionIndex = 34890;

	class UIParticle___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__102_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xF70);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__106_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xF78);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__108_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xF80);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__107_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xF88);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__103_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xF90);
		}
		static ::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet___9__98_0()
		{
			return (::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xF98);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__105_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xFA0);
		}
		static ::Coffee::UIExtensions::UIParticle___c** StaticGet___9()
		{
			return (::Coffee::UIExtensions::UIParticle___c**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0xFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnDisable_b__98_0(::Coffee::UIExtensions::UIParticleRenderer* r)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__98_0_OFFSET))(this, r);
		}

		::System::Void _Play_b__102_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__102_0_OFFSET))(this, p);
		}

		::System::Void _Pause_b__103_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__103_0_OFFSET))(this, p);
		}

		::System::Void _Stop_b__105_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__105_0_OFFSET))(this, p);
		}

		::System::Void _StartEmission_b__106_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__106_0_OFFSET))(this, p);
		}

		::System::Void _StopEmission_b__107_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__107_0_OFFSET))(this, p);
		}

		::System::Void _Clear_b__108_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__108_0_OFFSET))(this, p);
		}
	};
}
