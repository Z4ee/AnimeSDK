#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1602C050)
#define CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1602C100)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_TypeDefinitionIndex = 51499;

class Class_2_14F10A7D5A4F2DD7 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::UInt32>* Field_2_1; // 0x60
	::Class_0_16E4307DCC419505_165<::System::UInt32>* Field_2_2; // 0x68
	::Class_0_16E4307DCC419505_165<::System::UInt32>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
