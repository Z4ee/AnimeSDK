#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_370.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_668.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_329_METHOD_2_462BAB672251EA2A_OFFSET UNITYSDK_OFFSET(0x149B9F90)
#define CLASS_2_208CC9941471731A_329__CTOR_OFFSET UNITYSDK_OFFSET(0x149B9F80)

inline static constexpr unsigned int Class_2_208CC9941471731A_329_TypeDefinitionIndex = 16820;

class Class_2_208CC9941471731A_329 : public ::Class_1_5DA2E7556103D5A3_370
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_668 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_668, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_329__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_462BAB672251EA2A(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_329_METHOD_2_462BAB672251EA2A_OFFSET))(this, a1);
	}
};
