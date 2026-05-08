#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_50.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_362.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_246_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15FD0180)
#define CLASS_2_208CC9941471731A_246__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD0160)

inline static constexpr unsigned int Class_2_208CC9941471731A_246_TypeDefinitionIndex = 10716;

class Class_2_208CC9941471731A_246 : public ::Class_1_48F4A404A08692BE_50
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_362 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_362, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_246__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_246_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
