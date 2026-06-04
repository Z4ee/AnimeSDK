#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1467D390)
#define COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS7_0__SORTFORRENDERING_B__0_OFFSET UNITYSDK_OFFSET(0x1467D6B0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int ParticleSystemExtensions___c__DisplayClass7_0_TypeDefinitionIndex = 41529;

	class ParticleSystemExtensions___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* self; // 0x10
		::UnityEngine::Transform* transform; // 0x18
		::System::Boolean sortByMaterial; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortForRendering_b__0(::UnityEngine::ParticleSystem* a1, ::UnityEngine::ParticleSystem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS7_0__SORTFORRENDERING_B__0_OFFSET))(this, a1, a2);
		}
	};
}
