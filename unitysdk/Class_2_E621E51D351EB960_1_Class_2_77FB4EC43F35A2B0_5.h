#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_5_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13E185E0)
#define CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_5__CTOR_OFFSET UNITYSDK_OFFSET(0x13E18670)

inline static constexpr unsigned int Class_2_E621E51D351EB960_1_Class_2_77FB4EC43F35A2B0_5_TypeDefinitionIndex = 56122;

class Class_2_E621E51D351EB960_1_Class_2_77FB4EC43F35A2B0_5 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x60
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_5__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_5_ONCREATEPROPERTY_OFFSET))(this);
	}
};
