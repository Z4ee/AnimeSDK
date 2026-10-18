#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define AKSHOWONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C12B0)

inline static constexpr unsigned int AkShowOnlyAttribute_TypeDefinitionIndex = 44851;

class AkShowOnlyAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSHOWONLYATTRIBUTE__CTOR_OFFSET))(this);
	}
};
