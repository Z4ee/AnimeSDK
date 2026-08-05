#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_TEMPORARYTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4365B0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner_TemporaryTexture_TypeDefinitionIndex = 94627;

	class MB3_TextureCombiner_TemporaryTexture : public ::System::Object
	{
	public:
		::System::String* property; // 0x10
		::UnityEngine::Texture2D* texture; // 0x18

		::System::Void _ctor(::System::String* prop, ::UnityEngine::Texture2D* tex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_TEMPORARYTEXTURE__CTOR_OFFSET))(this, prop, tex);
		}
	};
}
