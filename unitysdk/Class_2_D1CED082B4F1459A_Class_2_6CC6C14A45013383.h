#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16661CB0)
#define CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383__CTOR_OFFSET UNITYSDK_OFFSET(0x16661D60)

inline static constexpr unsigned int Class_2_D1CED082B4F1459A_Class_2_6CC6C14A45013383_TypeDefinitionIndex = 87715;

class Class_2_D1CED082B4F1459A_Class_2_6CC6C14A45013383 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_2; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_1; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_6CC6C14A45013383_ONCREATEPROPERTY_OFFSET))(this);
	}
};
