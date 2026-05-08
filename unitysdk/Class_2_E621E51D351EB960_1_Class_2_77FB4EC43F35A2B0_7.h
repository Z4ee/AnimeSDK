#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x125383D0)
#define CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x12537300)

inline static constexpr unsigned int Class_2_E621E51D351EB960_1_Class_2_77FB4EC43F35A2B0_7_TypeDefinitionIndex = 69738;

class Class_2_E621E51D351EB960_1_Class_2_77FB4EC43F35A2B0_7 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x70
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_1_CLASS_2_77FB4EC43F35A2B0_7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
