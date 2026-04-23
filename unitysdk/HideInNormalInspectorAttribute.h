#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define HIDEINNORMALINSPECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C2C380)

inline static constexpr unsigned int HideInNormalInspectorAttribute_TypeDefinitionIndex = 40913;

class HideInNormalInspectorAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDEINNORMALINSPECTORATTRIBUTE__CTOR_OFFSET))(this);
	}
};
