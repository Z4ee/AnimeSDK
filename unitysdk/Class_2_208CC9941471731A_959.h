#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_193.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_733.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_959_METHOD_2_462BAB672251EA2A_OFFSET UNITYSDK_OFFSET(0x190D7AC0)
#define CLASS_2_208CC9941471731A_959__CTOR_OFFSET UNITYSDK_OFFSET(0x190D7AB0)

inline static constexpr unsigned int Class_2_208CC9941471731A_959_TypeDefinitionIndex = 17117;

class Class_2_208CC9941471731A_959 : public ::Class_1_5DA2E7556103D5A3_193
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_733 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_733, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_959__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_462BAB672251EA2A(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_959_METHOD_2_462BAB672251EA2A_OFFSET))(this, a1);
	}
};
