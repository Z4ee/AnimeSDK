#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F16D33FE2B56727.h"
#include "unitysdk/Struct_2_EB13E12069AE9879.h"

class Class_0_16E4307DCC419505_614;
class Class_3_5B3989A017DD01E5;
class Class_4_38B51614211CBC7D;

#define CLASS_3_57ACCC113D2215C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1366FF10)

inline static constexpr unsigned int Class_3_57ACCC113D2215C7_TypeDefinitionIndex = 56439;

class Class_3_57ACCC113D2215C7 : public ::Class_2_5F16D33FE2B56727
{
public:
	::Class_3_5B3989A017DD01E5* Field_3_0; // 0x30
	::Struct_2_EB13E12069AE9879 Field_3_1; // 0x38
	::Class_0_16E4307DCC419505_614* Field_3_2; // 0x50
	::Class_4_38B51614211CBC7D* Field_3_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57ACCC113D2215C7__CTOR_OFFSET))(this);
	}
};
