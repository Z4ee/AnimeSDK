#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_148.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_92.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_527_METHOD_2_011FED32953F4A34_OFFSET UNITYSDK_OFFSET(0x1AFA7690)
#define CLASS_2_208CC9941471731A_527_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFA76A0)
#define CLASS_2_208CC9941471731A_527__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA7680)

inline static constexpr unsigned int Class_2_208CC9941471731A_527_TypeDefinitionIndex = 11547;

class Class_2_208CC9941471731A_527 : public ::Class_1_EBCA2A4357C4C8BF_148
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_92 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_92, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_527__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_011FED32953F4A34()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_527_METHOD_2_011FED32953F4A34_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_527_TOSTRING_OFFSET))(this);
	}
};
