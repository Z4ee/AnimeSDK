#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD334DC0)
#define CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD334E40)

inline static constexpr unsigned int Class_2_5C5754DDF4E59233_Class_2_77FB4EC43F35A2B0_1_TypeDefinitionIndex = 49991;

class Class_2_5C5754DDF4E59233_Class_2_77FB4EC43F35A2B0_1 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
