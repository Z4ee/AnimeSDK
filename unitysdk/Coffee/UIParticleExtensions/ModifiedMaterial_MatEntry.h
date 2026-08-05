#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL_MATENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E30EBE0)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int ModifiedMaterial_MatEntry_TypeDefinitionIndex = 34845;

	class ModifiedMaterial_MatEntry : public ::System::Object
	{
	public:
		::UnityEngine::Material* baseMat; // 0x10
		::UnityEngine::Texture* texture; // 0x18
		::UnityEngine::Material* customMat; // 0x20
		::System::Int32 count; // 0x28
		::System::Int32 id; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL_MATENTRY__CTOR_OFFSET))(this);
		}
	};
}
