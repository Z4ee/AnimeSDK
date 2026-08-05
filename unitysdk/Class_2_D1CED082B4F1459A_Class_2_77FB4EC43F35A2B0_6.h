#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_D1CED082B4F1459A_CLASS_2_77FB4EC43F35A2B0_6_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16661D70)
#define CLASS_2_D1CED082B4F1459A_CLASS_2_77FB4EC43F35A2B0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x16661DF0)

inline static constexpr unsigned int Class_2_D1CED082B4F1459A_Class_2_77FB4EC43F35A2B0_6_TypeDefinitionIndex = 87694;

class Class_2_D1CED082B4F1459A_Class_2_77FB4EC43F35A2B0_6 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_77FB4EC43F35A2B0_6__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1CED082B4F1459A_CLASS_2_77FB4EC43F35A2B0_6_ONCREATEPROPERTY_OFFSET))(this);
	}
};
