#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x157587B0)
#define CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET UNITYSDK_OFFSET(0x15758850)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_TypeDefinitionIndex = 41631;

class Class_2_4B9EFC6AA779DF8D : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET))(this);
	}
};
