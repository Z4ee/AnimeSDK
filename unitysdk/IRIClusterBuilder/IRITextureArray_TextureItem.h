#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define IRICLUSTERBUILDER_IRITEXTUREARRAY_TEXTUREITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65E20)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRITextureArray_TextureItem_TypeDefinitionIndex = 48211;

	class IRITextureArray_TextureItem : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* Texture; // 0x10
		::System::UInt64 Hash; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRITEXTUREARRAY_TEXTUREITEM__CTOR_OFFSET))(this);
		}
	};
}
