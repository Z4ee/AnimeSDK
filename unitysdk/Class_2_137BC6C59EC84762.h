#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_137BC6C59EC84762__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28FAE0)

inline static constexpr unsigned int Class_2_137BC6C59EC84762_TypeDefinitionIndex = 24715;

class Class_2_137BC6C59EC84762 : public ::System::Attribute
{
public:
	::System::Type* DAMBPFMFGJN; // 0x10
	::System::Int32 ADOIGJICCEE; // 0x18

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_137BC6C59EC84762__CTOR_OFFSET))(this, a1);
	}
};
