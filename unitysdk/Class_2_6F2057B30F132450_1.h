#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_6F2057B30F132450_1__CTOR_OFFSET UNITYSDK_OFFSET(0xECAA8E0)

inline static constexpr unsigned int Class_2_6F2057B30F132450_1_TypeDefinitionIndex = 53083;

class Class_2_6F2057B30F132450_1 : public ::System::Attribute
{
public:
	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_6F2057B30F132450_1__CTOR_OFFSET))(this, a1);
	}
};
