#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83E770)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_TypeDefinitionIndex = 24711;

class Class_2_2B5D33C75C48332B : public ::System::Attribute
{
public:
	::System::Type* EPGPJMHNBON; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B__CTOR_OFFSET))(this, a1);
	}
};
