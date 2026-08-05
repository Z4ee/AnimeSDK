#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC41950C_14;

#define CLASS_2_94A48E46CF6A15AF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14DF7060)
#define CLASS_2_94A48E46CF6A15AF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF70E0)

inline static constexpr unsigned int Class_2_94A48E46CF6A15AF_TypeDefinitionIndex = 65607;

class Class_2_94A48E46CF6A15AF : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC41950C_14<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A48E46CF6A15AF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94A48E46CF6A15AF_ONCREATEPROPERTY_OFFSET))(this);
	}
};
