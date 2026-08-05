#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_15B1739C6F1103E0_CLASS_1_74C88AC80D13F5E8_COMPARE_OFFSET UNITYSDK_OFFSET(0x167AAB00)
#define CLASS_2_15B1739C6F1103E0_CLASS_1_74C88AC80D13F5E8__CTOR_OFFSET UNITYSDK_OFFSET(0x167AB680)

inline static constexpr unsigned int Class_2_15B1739C6F1103E0_Class_1_74C88AC80D13F5E8_TypeDefinitionIndex = 60239;

class Class_2_15B1739C6F1103E0_Class_1_74C88AC80D13F5E8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15B1739C6F1103E0_CLASS_1_74C88AC80D13F5E8__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_15B1739C6F1103E0_CLASS_1_74C88AC80D13F5E8_COMPARE_OFFSET))(this, a1, a2);
	}
};
