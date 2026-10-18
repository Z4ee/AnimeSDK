#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_6F2057B30F132450__CTOR_OFFSET UNITYSDK_OFFSET(0xF205AA0)

inline static constexpr unsigned int Class_2_6F2057B30F132450_TypeDefinitionIndex = 57582;

class Class_2_6F2057B30F132450 : public ::System::Attribute
{
public:
	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_6F2057B30F132450__CTOR_OFFSET))(this, a1);
	}
};
