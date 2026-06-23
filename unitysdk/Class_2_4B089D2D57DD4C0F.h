#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_2_BD3091CEC7111000;

#define CLASS_2_4B089D2D57DD4C0F_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x129559C0)
#define CLASS_2_4B089D2D57DD4C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x12955A00)

inline static constexpr unsigned int Class_2_4B089D2D57DD4C0F_TypeDefinitionIndex = 71520;

class Class_2_4B089D2D57DD4C0F : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_2_BD3091CEC7111000* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B089D2D57DD4C0F__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B089D2D57DD4C0F_ONCREATEPROPERTY_OFFSET))(this);
	}
};
