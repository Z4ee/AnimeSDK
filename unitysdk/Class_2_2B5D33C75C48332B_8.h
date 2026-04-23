#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_8_METHOD_2_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1195D1F0)
#define CLASS_2_2B5D33C75C48332B_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1195D1E0)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_8_TypeDefinitionIndex = 46113;

class Class_2_2B5D33C75C48332B_8 : public ::System::Attribute
{
public:
	::System::Type* Field_2_0; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_8__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_2_A99467CE9479C990()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_8_METHOD_2_A99467CE9479C990_OFFSET))(this);
	}
};
