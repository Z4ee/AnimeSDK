#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_2B5D33C75C48332B_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17B3D800)

inline static constexpr unsigned int Class_2_2B5D33C75C48332B_3_TypeDefinitionIndex = 35306;

class Class_2_2B5D33C75C48332B_3 : public ::System::Attribute
{
public:
	::System::Type* Field_2_0; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_2B5D33C75C48332B_3__CTOR_OFFSET))(this, a1);
	}
};
