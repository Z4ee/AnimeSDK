#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_TEXTUREMATERIALPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_TextureMaterialPair_TypeDefinitionIndex = 79218;

	struct alignas(8) SpineSkeletonGraphicRenderTexture_TextureMaterialPair
	{
		::UnityEngine::Texture* texture; // 0x10
		::UnityEngine::Material* material; // 0x18

		::System::Void _ctor(::UnityEngine::Texture* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_TEXTUREMATERIALPAIR__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
