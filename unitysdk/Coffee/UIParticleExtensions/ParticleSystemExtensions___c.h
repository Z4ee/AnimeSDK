#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30F480)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E30F4C0)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__EXEC_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E30F4D0)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int ParticleSystemExtensions___c_TypeDefinitionIndex = 34850;

	class ParticleSystemExtensions___c : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleExtensions::ParticleSystemExtensions___c** StaticGet___9()
		{
			return (::Coffee::UIParticleExtensions::ParticleSystemExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemExtensions___c_TypeDefinitionIndex)->GetStaticField(0x291A0);
		}
		static ::System::Predicate_1<::UnityEngine::ParticleSystem*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemExtensions___c_TypeDefinitionIndex)->GetStaticField(0x291A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Exec_b__9_0(::UnityEngine::ParticleSystem* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__EXEC_B__9_0_OFFSET))(this, p);
		}
	};
}
