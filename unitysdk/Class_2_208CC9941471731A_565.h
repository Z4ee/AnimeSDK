#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_374.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_823.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_565_METHOD_2_462BAB672251EA2A_OFFSET UNITYSDK_OFFSET(0x16086090)
#define CLASS_2_208CC9941471731A_565__CTOR_OFFSET UNITYSDK_OFFSET(0x160818A0)

inline static constexpr unsigned int Class_2_208CC9941471731A_565_TypeDefinitionIndex = 15089;

class Class_2_208CC9941471731A_565 : public ::Class_1_5DA2E7556103D5A3_374
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_823 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_823, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_565__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_462BAB672251EA2A(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_565_METHOD_2_462BAB672251EA2A_OFFSET))(this, a1);
	}
};
