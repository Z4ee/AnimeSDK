#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_278.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_921.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EA973170E0B2CCF6__CTOR_OFFSET UNITYSDK_OFFSET(0x18D019B0)

inline static constexpr unsigned int Class_2_EA973170E0B2CCF6_TypeDefinitionIndex = 14824;

class Class_2_EA973170E0B2CCF6 : public ::Class_1_5DA2E7556103D5A3_278
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0xA0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0xA8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_921 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_921, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_EA973170E0B2CCF6__CTOR_OFFSET))(this, a1, a2);
	}
};
