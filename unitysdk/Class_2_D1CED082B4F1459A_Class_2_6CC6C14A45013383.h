#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xEC58490)
#define CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383__CTOR_OFFSET UNITYSDK_OFFSET(0xEC58540)

inline static constexpr unsigned int Class_2_D1CED082B4F1459A_Class_2_6CC6C14A45013383_TypeDefinitionIndex = 59469;

class Class_2_D1CED082B4F1459A_Class_2_6CC6C14A45013383 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_1; // 0x70
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_0; // 0x78
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_2; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383_ONCREATEPROPERTY_OFFSET))(this);
	}
};
