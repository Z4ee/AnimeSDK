#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"

namespace System { class String; }

#define CLASS_4_C723BBD9E8C3141E__CTOR_OFFSET UNITYSDK_OFFSET(0x14685C90)

inline static constexpr unsigned int Class_4_C723BBD9E8C3141E_TypeDefinitionIndex = 53918;

class Class_4_C723BBD9E8C3141E : public ::Class_3_627DF5C40DDAA45B<::Class_4_C723BBD9E8C3141E*>
{
public:
	::System::String* Field_4_1; // 0x30
	::System::Int32 Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C723BBD9E8C3141E__CTOR_OFFSET))(this);
	}
};
