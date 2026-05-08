#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_2_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18265200)
#define CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18265280)

inline static constexpr unsigned int Class_2_0F98EC09A480D0AE_Class_2_77FB4EC43F35A2B0_2_TypeDefinitionIndex = 48395;

class Class_2_0F98EC09A480D0AE_Class_2_77FB4EC43F35A2B0_2 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_2__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_2_ONCREATEPROPERTY_OFFSET))(this);
	}
};
