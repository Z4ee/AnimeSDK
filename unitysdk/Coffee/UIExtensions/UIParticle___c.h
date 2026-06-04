#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146750F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__108_0_OFFSET UNITYSDK_OFFSET(0x14675240)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14675120)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__98_0_OFFSET UNITYSDK_OFFSET(0x14675130)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__103_0_OFFSET UNITYSDK_OFFSET(0x14675180)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__102_0_OFFSET UNITYSDK_OFFSET(0x14675150)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__106_0_OFFSET UNITYSDK_OFFSET(0x146751E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__107_0_OFFSET UNITYSDK_OFFSET(0x14675210)
#define COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__105_0_OFFSET UNITYSDK_OFFSET(0x146751B0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle___c_TypeDefinitionIndex = 41536;

	class UIParticle___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__108_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1350);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__105_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1358);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__107_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1360);
		}
		static ::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet___9__98_0()
		{
			return (::System::Action_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1368);
		}
		static ::Coffee::UIExtensions::UIParticle___c** StaticGet___9()
		{
			return (::Coffee::UIExtensions::UIParticle___c**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1370);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__103_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1378);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__102_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1380);
		}
		static ::System::Action_1<::UnityEngine::ParticleSystem*>** StaticGet___9__106_0()
		{
			return (::System::Action_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticle___c_TypeDefinitionIndex)->GetStaticField(0x1388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnDisable_b__98_0(::Coffee::UIExtensions::UIParticleRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__ONDISABLE_B__98_0_OFFSET))(this, a1);
		}

		::System::Void _Play_b__102_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PLAY_B__102_0_OFFSET))(this, a1);
		}

		::System::Void _Pause_b__103_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__PAUSE_B__103_0_OFFSET))(this, a1);
		}

		::System::Void _Stop_b__105_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOP_B__105_0_OFFSET))(this, a1);
		}

		::System::Void _StartEmission_b__106_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STARTEMISSION_B__106_0_OFFSET))(this, a1);
		}

		::System::Void _StopEmission_b__107_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__STOPEMISSION_B__107_0_OFFSET))(this, a1);
		}

		::System::Void _Clear_b__108_0(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE___C__CLEAR_B__108_0_OFFSET))(this, a1);
		}
	};
}
