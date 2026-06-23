#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x134BC570)
#define CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x134BC600)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_1_TypeDefinitionIndex = 50701;

class Class_2_4B9EFC6AA779DF8D_1 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_1; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
