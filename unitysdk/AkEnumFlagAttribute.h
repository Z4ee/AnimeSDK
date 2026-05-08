#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class Type; }

#define AKENUMFLAGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0921B0)

inline static constexpr unsigned int AkEnumFlagAttribute_TypeDefinitionIndex = 31519;

class AkEnumFlagAttribute : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Type* Type; // 0x10

	::System::Void _ctor(::System::Type* type)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AKENUMFLAGATTRIBUTE__CTOR_OFFSET))(this, type);
	}
};
