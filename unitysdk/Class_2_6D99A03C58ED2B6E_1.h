#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_86.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_345.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_6D99A03C58ED2B6E_1_METHOD_2_F535853958140F0E_OFFSET UNITYSDK_OFFSET(0x185E1280)
#define CLASS_2_6D99A03C58ED2B6E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x185E1270)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_1_TypeDefinitionIndex = 9912;

class Class_2_6D99A03C58ED2B6E_1 : public ::Class_1_5DA2E7556103D5A3_86
{
public:
	::System::Int32 Field_2_0; // 0x98

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_345 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_345, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F535853958140F0E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_1_METHOD_2_F535853958140F0E_OFFSET))(this);
	}
};
