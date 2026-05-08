#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_248.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_630.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_948_METHOD_2_011FED32953F4A34_OFFSET UNITYSDK_OFFSET(0x144FDCD0)
#define CLASS_2_208CC9941471731A_948_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144FDCE0)
#define CLASS_2_208CC9941471731A_948__CTOR_OFFSET UNITYSDK_OFFSET(0x144FDCC0)

inline static constexpr unsigned int Class_2_208CC9941471731A_948_TypeDefinitionIndex = 17320;

class Class_2_208CC9941471731A_948 : public ::Class_1_EBCA2A4357C4C8BF_248
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_630 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_630, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_948__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_011FED32953F4A34()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_948_METHOD_2_011FED32953F4A34_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_948_TOSTRING_OFFSET))(this);
	}
};
