#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"

namespace System { class String; }

#define SHADERPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABC65B0)

inline static constexpr unsigned int ShaderPropertyData_TypeDefinitionIndex = 38410;

class ShaderPropertyData : public ::System::Object
{
public:
	::System::String* inspectorDisplayName; // 0x10
	::System::String* propertyName; // 0x18
	::System::String* customName; // 0x20
	::System::String* customDescription; // 0x28
	::UnityEngine::Rendering::ShaderPropertyType propertyType; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPROPERTYDATA__CTOR_OFFSET))(this);
	}
};
