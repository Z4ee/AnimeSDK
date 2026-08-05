#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC696AD70C384A5;

#define CLASS_2_3CC696AD70C384A5_STRUCT_2_E5C82F1E30A3C139_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BC400)
#define CLASS_2_3CC696AD70C384A5_STRUCT_2_E5C82F1E30A3C139__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC3E0)

inline static constexpr unsigned int Class_2_3CC696AD70C384A5_Struct_2_E5C82F1E30A3C139_TypeDefinitionIndex = 54306;

struct alignas(8) Class_2_3CC696AD70C384A5_Struct_2_E5C82F1E30A3C139
{
	::Class_2_3CC696AD70C384A5* Field_2_0; // 0x10

	::System::Void _ctor(::Class_2_3CC696AD70C384A5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3CC696AD70C384A5*))((::PBYTE)hIl2Cpp + CLASS_2_3CC696AD70C384A5_STRUCT_2_E5C82F1E30A3C139__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC696AD70C384A5_STRUCT_2_E5C82F1E30A3C139_DISPOSE_OFFSET))(this);
	}
};
