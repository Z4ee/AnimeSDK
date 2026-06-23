#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture2DArray; }

#define MB_TEXTUREARRAYREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D94FC90)

inline static constexpr unsigned int MB_TextureArrayReference_TypeDefinitionIndex = 90523;

class MB_TextureArrayReference : public ::System::Object
{
public:
	::System::String* texFromatSetName; // 0x10
	::UnityEngine::Texture2DArray* texArray; // 0x18

	::System::Void _ctor(::System::String* formatSetName, ::UnityEngine::Texture2DArray* ta)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture2DArray*))((::PBYTE)hIl2Cpp + MB_TEXTUREARRAYREFERENCE__CTOR_OFFSET))(this, formatSetName, ta);
	}
};
