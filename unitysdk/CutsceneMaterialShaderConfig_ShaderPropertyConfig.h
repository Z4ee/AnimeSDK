#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CUTSCENEMATERIALSHADERCONFIG_SHADERPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DF960)

inline static constexpr unsigned int CutsceneMaterialShaderConfig_ShaderPropertyConfig_TypeDefinitionIndex = 32744;

class CutsceneMaterialShaderConfig_ShaderPropertyConfig : public ::System::Object
{
public:
	::System::String* PropertyName; // 0x10
	::System::String* Keyword; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUTSCENEMATERIALSHADERCONFIG_SHADERPROPERTYCONFIG__CTOR_OFFSET))(this);
	}
};
