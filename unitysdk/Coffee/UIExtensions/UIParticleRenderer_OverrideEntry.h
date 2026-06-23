#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStream.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_OVERRIDEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DA6E0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_OverrideEntry_TypeDefinitionIndex = 34228;

	class UIParticleRenderer_OverrideEntry : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* originalStreams; // 0x10
		::System::Int32 refCount; // 0x18
		::System::Boolean psrOverridden; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_OVERRIDEENTRY__CTOR_OFFSET))(this);
		}
	};
}
