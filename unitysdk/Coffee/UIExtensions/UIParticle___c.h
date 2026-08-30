#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164944B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__116_0_OFFSET UNITYSDK_OFFSET(0x16494600)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164944E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__106_0_OFFSET UNITYSDK_OFFSET(0x164944F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__111_0_OFFSET UNITYSDK_OFFSET(0x16494540)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__110_0_OFFSET UNITYSDK_OFFSET(0x16494510)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__114_0_OFFSET UNITYSDK_OFFSET(0x164945A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__115_0_OFFSET UNITYSDK_OFFSET(0x164945D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__113_0_OFFSET UNITYSDK_OFFSET(0x16494570)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle___c_TypeDefinitionIndex = 43962;

	class UIParticle___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__115_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1260);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__111_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1268);
		}
		static ::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet___9__106_0()
		{
			return (::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1270);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__116_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1278);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__110_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1280);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__114_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1288);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__113_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1290);
		}
		static ::Coffee::UIExtensions::UIParticle___c** StaticGet___9()
		{
			return (::Coffee::UIExtensions::UIParticle___c**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnDisable_b__106_0(::Coffee::UIExtensions::UIParticleRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__106_0_OFFSET))(this, a1);
		}

		::System::Void _Play_b__110_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__110_0_OFFSET))(this, a1);
		}

		::System::Void _Pause_b__111_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__111_0_OFFSET))(this, a1);
		}

		::System::Void _Stop_b__113_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__113_0_OFFSET))(this, a1);
		}

		::System::Void _StartEmission_b__114_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__114_0_OFFSET))(this, a1);
		}

		::System::Void _StopEmission_b__115_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__115_0_OFFSET))(this, a1);
		}

		::System::Void _Clear_b__116_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__116_0_OFFSET))(this, a1);
		}
	};
}
