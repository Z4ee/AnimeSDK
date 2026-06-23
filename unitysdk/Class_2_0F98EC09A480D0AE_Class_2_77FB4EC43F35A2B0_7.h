#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12C18E90)
#define CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x12C18F10)

inline static constexpr unsigned int Class_2_0F98EC09A480D0AE_Class_2_77FB4EC43F35A2B0_7_TypeDefinitionIndex = 76209;

class Class_2_0F98EC09A480D0AE_Class_2_77FB4EC43F35A2B0_7 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F98EC09A480D0AE_CLASS_2_77FB4EC43F35A2B0_7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
