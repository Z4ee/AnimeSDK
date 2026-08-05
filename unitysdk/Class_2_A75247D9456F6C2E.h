#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_404.h"
#include "unitysdk/Class_2_A75247D9456F6C2E_Struct_2_BBD456EBC9087BC2_1.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_1028.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A75247D9456F6C2E_METHOD_2_3A388ACD457C21E1_OFFSET UNITYSDK_OFFSET(0x19DF1130)
#define CLASS_2_A75247D9456F6C2E_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x19DF0EF0)
#define CLASS_2_A75247D9456F6C2E__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF0E70)

inline static constexpr unsigned int Class_2_A75247D9456F6C2E_TypeDefinitionIndex = 18158;

class Class_2_A75247D9456F6C2E : public ::Class_1_5DA2E7556103D5A3_404
{
public:
	::System::Collections::Generic::List_1<::Class_2_A75247D9456F6C2E_Struct_2_BBD456EBC9087BC2_1>* Field_2_0; // 0x70

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_1028 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_1028, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_A75247D9456F6C2E__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_A75247D9456F6C2E_Struct_2_BBD456EBC9087BC2_1 Method_2_3A388ACD457C21E1(::System::Int32 a1)
	{
		return ((::Class_2_A75247D9456F6C2E_Struct_2_BBD456EBC9087BC2_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A75247D9456F6C2E_METHOD_2_3A388ACD457C21E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75247D9456F6C2E_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}
};
