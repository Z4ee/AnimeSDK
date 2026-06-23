#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC41950C_12;

#define CLASS_2_94A48E46CF6A15AF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x134C9B40)
#define CLASS_2_94A48E46CF6A15AF__CTOR_OFFSET UNITYSDK_OFFSET(0x134C9BC0)

inline static constexpr unsigned int Class_2_94A48E46CF6A15AF_TypeDefinitionIndex = 77093;

class Class_2_94A48E46CF6A15AF : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC41950C_12<::System::Int32>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A48E46CF6A15AF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A48E46CF6A15AF_ONCREATEPROPERTY_OFFSET))(this);
	}
};
