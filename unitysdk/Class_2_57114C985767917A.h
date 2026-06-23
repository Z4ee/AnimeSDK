#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

#define CLASS_2_57114C985767917A_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10DA03A0)
#define CLASS_2_57114C985767917A__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA03E0)

inline static constexpr unsigned int Class_2_57114C985767917A_TypeDefinitionIndex = 56545;

class Class_2_57114C985767917A : public ::Class_1_C331A5DC726F030A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57114C985767917A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57114C985767917A_ONCREATEPROPERTY_OFFSET))(this);
	}
};
