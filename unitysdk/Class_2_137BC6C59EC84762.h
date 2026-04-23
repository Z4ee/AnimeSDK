#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_137BC6C59EC84762__CTOR_OFFSET UNITYSDK_OFFSET(0x18529200)

inline static constexpr unsigned int Class_2_137BC6C59EC84762_TypeDefinitionIndex = 23802;

class Class_2_137BC6C59EC84762 : public ::System::Attribute
{
public:
	::System::Type* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_137BC6C59EC84762__CTOR_OFFSET))(this, a1);
	}
};
