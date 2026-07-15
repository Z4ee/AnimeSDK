#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define RPG_CLIENT_TEXTUREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x39D35C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextureInfo_TypeDefinitionIndex = 67437;

	struct alignas(8) TextureInfo
	{
		::System::String* TextureName; // 0x10
		::System::Boolean isAutoChange; // 0x18
		::UnityEngine::Vector4 TextureTiling; // 0x1C

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTUREINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
