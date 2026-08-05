#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_14F10A7D5A4F2DD7_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11AFD090)
#define CLASS_2_14F10A7D5A4F2DD7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AFD140)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_1_TypeDefinitionIndex = 74431;

class Class_2_14F10A7D5A4F2DD7_1 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_1; // 0x80
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
