#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1687F730)
#define CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383__CTOR_OFFSET UNITYSDK_OFFSET(0x1687F7E0)

inline static constexpr unsigned int Class_2_D1CED082B4F1459A_Class_2_6CC6C14A45013383_TypeDefinitionIndex = 69669;

class Class_2_D1CED082B4F1459A_Class_2_6CC6C14A45013383 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_2; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_0; // 0x68
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383_ONCREATEPROPERTY_OFFSET))(this);
	}
};
