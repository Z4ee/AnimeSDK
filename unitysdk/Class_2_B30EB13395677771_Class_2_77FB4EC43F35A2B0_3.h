#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_3_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x142E1600)
#define CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x142E1680)

inline static constexpr unsigned int Class_2_B30EB13395677771_Class_2_77FB4EC43F35A2B0_3_TypeDefinitionIndex = 51370;

class Class_2_B30EB13395677771_Class_2_77FB4EC43F35A2B0_3 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_3__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_3_ONCREATEPROPERTY_OFFSET))(this);
	}
};
