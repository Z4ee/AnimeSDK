#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureCompressionQuality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace System { class String; }

#define MB_TEXTUREARRAYFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4368E0)

inline static constexpr unsigned int MB_TextureArrayFormat_TypeDefinitionIndex = 94459;

class MB_TextureArrayFormat : public ::System::Object
{
public:
	::System::String* propertyName; // 0x10
	::UnityEngine::TextureFormat format; // 0x18
	::DigitalOpus::MB::Core::MB_TextureCompressionQuality compressionQuality; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXTUREARRAYFORMAT__CTOR_OFFSET))(this);
	}
};
