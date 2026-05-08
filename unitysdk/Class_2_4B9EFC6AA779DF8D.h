#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17865180)
#define CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET UNITYSDK_OFFSET(0x17865200)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_TypeDefinitionIndex = 64562;

class Class_2_4B9EFC6AA779DF8D : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_ONCREATEPROPERTY_OFFSET))(this);
	}
};
