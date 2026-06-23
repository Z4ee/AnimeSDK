#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_14F10A7D5A4F2DD7_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1376CD10)
#define CLASS_2_14F10A7D5A4F2DD7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1376CD90)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_1_TypeDefinitionIndex = 79824;

class Class_2_14F10A7D5A4F2DD7_1 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::UInt32>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
