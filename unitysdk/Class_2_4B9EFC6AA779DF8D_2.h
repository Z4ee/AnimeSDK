#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_4B9EFC6AA779DF8D_2_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x139E9850)
#define CLASS_2_4B9EFC6AA779DF8D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x139E98D0)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_2_TypeDefinitionIndex = 72663;

class Class_2_4B9EFC6AA779DF8D_2 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_2__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_2_ONCREATEPROPERTY_OFFSET))(this);
	}
};
