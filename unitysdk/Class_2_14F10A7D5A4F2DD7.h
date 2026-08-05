#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11E81F10)
#define CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x11E81F90)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_TypeDefinitionIndex = 53493;

class Class_2_14F10A7D5A4F2DD7 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
