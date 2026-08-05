#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_136.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_451.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_6D99A03C58ED2B6E_3_METHOD_2_F535853958140F0E_OFFSET UNITYSDK_OFFSET(0x18903250)
#define CLASS_2_6D99A03C58ED2B6E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18903240)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_3_TypeDefinitionIndex = 15579;

class Class_2_6D99A03C58ED2B6E_3 : public ::Class_1_5DA2E7556103D5A3_136
{
public:
	::System::Int32 Field_2_0; // 0xA0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_451 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_451, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F535853958140F0E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_3_METHOD_2_F535853958140F0E_OFFSET))(this);
	}
};
