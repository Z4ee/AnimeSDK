#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58A090)
#define COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS6_0__SORTFORRENDERING_B__0_OFFSET UNITYSDK_OFFSET(0x1B58A700)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int ParticleSystemExtensions___c__DisplayClass6_0_TypeDefinitionIndex = 32662;

	class ParticleSystemExtensions___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* self; // 0x10
		::UnityEngine::Transform* transform; // 0x18
		::System::Boolean sortByMaterial; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortForRendering_b__0(::UnityEngine::ParticleSystem* a, ::UnityEngine::ParticleSystem* b)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_PARTICLESYSTEMEXTENSIONS___C__DISPLAYCLASS6_0__SORTFORRENDERING_B__0_OFFSET))(this, a, b);
		}
	};
}
