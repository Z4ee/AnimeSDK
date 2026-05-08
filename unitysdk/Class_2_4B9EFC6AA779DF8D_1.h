#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11F400F0)
#define CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11F40180)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_1_TypeDefinitionIndex = 44604;

class Class_2_4B9EFC6AA779DF8D_1 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_1; // 0x70
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
