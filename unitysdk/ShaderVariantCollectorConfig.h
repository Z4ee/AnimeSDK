#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define SHADERVARIANTCOLLECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C561340)

inline static constexpr unsigned int ShaderVariantCollectorConfig_TypeDefinitionIndex = 36888;

class ShaderVariantCollectorConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::String* currentVersion; // 0x18
	::System::String* assetPlatform; // 0x20
	::System::String* webServer; // 0x28
	::System::String* authorToken; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERVARIANTCOLLECTORCONFIG__CTOR_OFFSET))(this);
	}
};
