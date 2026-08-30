#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Light_OnParticleLightEvent; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPPipeline___O_TypeDefinitionIndex = 36849;

	class CPPPipeline___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Light_OnParticleLightEvent** StaticGet__0___ParticleLightOnLoad()
		{
			return (::UnityEngine::Light_OnParticleLightEvent**)Il2CppClass::FromTypeDefinitionIndex(CPPPipeline___O_TypeDefinitionIndex)->GetStaticField(0x33850);
		}
	};
}
