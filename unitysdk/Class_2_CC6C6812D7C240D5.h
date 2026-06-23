#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_3_10F339609BE79763_1;
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_CC6C6812D7C240D5_METHOD_2_E733EE3B69FEDB9C_OFFSET UNITYSDK_OFFSET(0x13E70140)
#define CLASS_2_CC6C6812D7C240D5_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13E70010)
#define CLASS_2_CC6C6812D7C240D5__CTOR_OFFSET UNITYSDK_OFFSET(0x13E700E0)

inline static constexpr unsigned int Class_2_CC6C6812D7C240D5_TypeDefinitionIndex = 85032;

class Class_2_CC6C6812D7C240D5 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::UInt32>* Field_2_0; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_1; // 0x68
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_3; // 0x70
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC6C6812D7C240D5__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC6C6812D7C240D5_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_E733EE3B69FEDB9C(::Class_3_10F339609BE79763_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_10F339609BE79763_1*))((::PBYTE)hIl2Cpp + CLASS_2_CC6C6812D7C240D5_METHOD_2_E733EE3B69FEDB9C_OFFSET))(this, a1);
	}
};
