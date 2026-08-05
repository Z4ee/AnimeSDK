#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RENDERERMATERIALENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F76E0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_RendererMaterialEntry_TypeDefinitionIndex = 34865;

	class UIParticleRenderer_RendererMaterialEntry : public ::System::Object
	{
	public:
		::UnityEngine::Material* originalSharedMaterial; // 0x10
		::UnityEngine::Material* instantiatedMaterial; // 0x18
		::System::Int32 refCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RENDERERMATERIALENTRY__CTOR_OFFSET))(this);
		}
	};
}
