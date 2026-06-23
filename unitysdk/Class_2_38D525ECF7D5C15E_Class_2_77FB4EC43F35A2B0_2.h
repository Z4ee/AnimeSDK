#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_38D525ECF7D5C15E_CLASS_2_77FB4EC43F35A2B0_2_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x140D78B0)
#define CLASS_2_38D525ECF7D5C15E_CLASS_2_77FB4EC43F35A2B0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x140CD790)

inline static constexpr unsigned int Class_2_38D525ECF7D5C15E_Class_2_77FB4EC43F35A2B0_2_TypeDefinitionIndex = 50335;

class Class_2_38D525ECF7D5C15E_Class_2_77FB4EC43F35A2B0_2 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::Boolean>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38D525ECF7D5C15E_CLASS_2_77FB4EC43F35A2B0_2__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38D525ECF7D5C15E_CLASS_2_77FB4EC43F35A2B0_2_ONCREATEPROPERTY_OFFSET))(this);
	}
};
