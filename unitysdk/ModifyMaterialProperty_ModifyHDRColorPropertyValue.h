#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MODIFYMATERIALPROPERTY_MODIFYHDRCOLORPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xE944A70)

inline static constexpr unsigned int ModifyMaterialProperty_ModifyHDRColorPropertyValue_TypeDefinitionIndex = 61237;

class ModifyMaterialProperty_ModifyHDRColorPropertyValue : public ::System::Object
{
public:
	::System::String* propertyName; // 0x10
	::UnityEngine::Color value; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYMATERIALPROPERTY_MODIFYHDRCOLORPROPERTYVALUE__CTOR_OFFSET))(this);
	}
};
