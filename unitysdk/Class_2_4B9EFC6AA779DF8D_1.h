#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1028DCD0)
#define CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1028DDD0)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_1_TypeDefinitionIndex = 57172;

class Class_2_4B9EFC6AA779DF8D_1 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_5; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_1; // 0x90
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_6; // 0x98
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_7; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
