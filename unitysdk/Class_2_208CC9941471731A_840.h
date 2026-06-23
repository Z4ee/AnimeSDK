#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_153.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_711.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_840_METHOD_2_011FED32953F4A34_OFFSET UNITYSDK_OFFSET(0x1B1050A0)
#define CLASS_2_208CC9941471731A_840_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B1050B0)
#define CLASS_2_208CC9941471731A_840__CTOR_OFFSET UNITYSDK_OFFSET(0x1B105090)

inline static constexpr unsigned int Class_2_208CC9941471731A_840_TypeDefinitionIndex = 13641;

class Class_2_208CC9941471731A_840 : public ::Class_1_EBCA2A4357C4C8BF_153
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_711 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_711, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_840__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_011FED32953F4A34()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_840_METHOD_2_011FED32953F4A34_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_840_TOSTRING_OFFSET))(this);
	}
};
