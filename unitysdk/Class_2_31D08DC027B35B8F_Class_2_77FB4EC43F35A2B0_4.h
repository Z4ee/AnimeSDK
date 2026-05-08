#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_4_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xFB68AF0)
#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_4__CTOR_OFFSET UNITYSDK_OFFSET(0xFB68B70)

inline static constexpr unsigned int Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0_4_TypeDefinitionIndex = 54647;

class Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0_4 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_4__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_4_ONCREATEPROPERTY_OFFSET))(this);
	}
};
