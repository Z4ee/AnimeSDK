#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_3_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1123A3F0)
#define CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1123A470)

inline static constexpr unsigned int Class_2_5C5754DDF4E59233_Class_2_77FB4EC43F35A2B0_3_TypeDefinitionIndex = 51908;

class Class_2_5C5754DDF4E59233_Class_2_77FB4EC43F35A2B0_3 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_3__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_3_ONCREATEPROPERTY_OFFSET))(this);
	}
};
