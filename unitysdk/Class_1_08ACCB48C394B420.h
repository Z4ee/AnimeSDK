#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16A256D5A30981C7.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_08ACCB48C394B420_COMPARE_OFFSET UNITYSDK_OFFSET(0xAFD7570)
#define CLASS_1_08ACCB48C394B420__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD75D0)

inline static constexpr unsigned int Class_1_08ACCB48C394B420_TypeDefinitionIndex = 49432;

class Class_1_08ACCB48C394B420 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08ACCB48C394B420__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Struct_2_16A256D5A30981C7 a1, ::Struct_2_16A256D5A30981C7 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_16A256D5A30981C7, ::Struct_2_16A256D5A30981C7))((::PBYTE)hIl2Cpp + CLASS_1_08ACCB48C394B420_COMPARE_OFFSET))(this, a1, a2);
	}
};
