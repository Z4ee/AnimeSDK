#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_9D54E1210013A923_CLASS_2_77FB4EC43F35A2B0_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16287E70)
#define CLASS_2_9D54E1210013A923_CLASS_2_77FB4EC43F35A2B0__CTOR_OFFSET UNITYSDK_OFFSET(0x16287EF0)

inline static constexpr unsigned int Class_2_9D54E1210013A923_Class_2_77FB4EC43F35A2B0_TypeDefinitionIndex = 41866;

class Class_2_9D54E1210013A923_Class_2_77FB4EC43F35A2B0 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D54E1210013A923_CLASS_2_77FB4EC43F35A2B0__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D54E1210013A923_CLASS_2_77FB4EC43F35A2B0_ONCREATEPROPERTY_OFFSET))(this);
	}
};
