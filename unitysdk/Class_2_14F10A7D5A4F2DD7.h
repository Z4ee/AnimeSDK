#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11965420)
#define CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x119654A0)

inline static constexpr unsigned int Class_2_14F10A7D5A4F2DD7_TypeDefinitionIndex = 58380;

class Class_2_14F10A7D5A4F2DD7 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::UInt32>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14F10A7D5A4F2DD7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
