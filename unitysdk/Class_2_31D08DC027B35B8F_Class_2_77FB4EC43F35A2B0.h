#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1624C650)
#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1624C6D0)

inline static constexpr unsigned int Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0_TypeDefinitionIndex = 48185;

class Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_ONCREATEPROPERTY_OFFSET))(this);
	}
};
