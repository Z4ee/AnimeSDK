#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1078B090)
#define CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1078B180)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_TypeDefinitionIndex = 42845;

class Class_2_4B9EFC6AA779DF8D : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_3; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_1; // 0x68
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x70
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_4; // 0x78
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_2; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET))(this);
	}
};
