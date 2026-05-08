#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_TEXPROPERTYNAMECOLORPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x3A5680)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair_TypeDefinitionIndex = 85141;

	struct alignas(8) MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair
	{
		::System::String* name; // 0x10
		::UnityEngine::Color color; // 0x18

		::System::Void _ctor(::System::String* nm, ::UnityEngine::Color col)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_TEXPROPERTYNAMECOLORPAIR__CTOR_OFFSET))(this, nm, col);
		}
	};
}
