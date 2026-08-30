#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_7.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_203A76DC77D7F043_METHOD_2_DB68E5F6FCD20795_OFFSET UNITYSDK_OFFSET(0x153E3E10)
#define STRUCT_2_203A76DC77D7F043_METHOD_2_DDFF13D6F0BE6537_OFFSET UNITYSDK_OFFSET(0x2DE7500)

inline static constexpr unsigned int Struct_2_203A76DC77D7F043_TypeDefinitionIndex = 69807;

struct alignas(4) Struct_2_203A76DC77D7F043
{
	::Struct_2_4C8453486C91E3A1_7 AMOEKPDDAHB; // 0x10
	::Struct_2_4C8453486C91E3A1_7 MCAKDDOBKCD; // 0x18

	static ::Struct_2_203A76DC77D7F043 Method_2_DB68E5F6FCD20795(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Struct_2_203A76DC77D7F043(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_203A76DC77D7F043_METHOD_2_DB68E5F6FCD20795_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_DDFF13D6F0BE6537(::System::Int32 a1, ::System::Int32 a2, ::Struct_2_203A76DC77D7F043& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::Struct_2_203A76DC77D7F043&, ::System::Boolean&))((::PBYTE)hIl2Cpp + STRUCT_2_203A76DC77D7F043_METHOD_2_DDFF13D6F0BE6537_OFFSET))(this, a1, a2, a3, a4);
	}
};
