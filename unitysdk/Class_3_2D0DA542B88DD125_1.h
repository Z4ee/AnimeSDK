#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_688FBF6C0FC439E7_Class_2_2B2DA72811ABBD65_1.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class String; }

#define CLASS_3_2D0DA542B88DD125_1_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17EA89C0)
#define CLASS_3_2D0DA542B88DD125_1_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17EA8A00)
#define CLASS_3_2D0DA542B88DD125_1_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17EA8CE0)
#define CLASS_3_2D0DA542B88DD125_1_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17EA8B60)
#define CLASS_3_2D0DA542B88DD125_1_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17EA8BB0)
#define CLASS_3_2D0DA542B88DD125_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17EA8C50)
#define CLASS_3_2D0DA542B88DD125_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA89A0)

inline static constexpr unsigned int Class_3_2D0DA542B88DD125_1_TypeDefinitionIndex = 79833;

class Class_3_2D0DA542B88DD125_1 : public ::Class_1_688FBF6C0FC439E7_Class_2_2B2DA72811ABBD65_1
{
public:
	::System::String* Field_3_2; // 0x28
	::MoleMole::Config::ValueCompareType Field_3_1; // 0x30
	::System::Single Field_3_0; // 0x34

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ValueCompareType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ValueCompareType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_1_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_1_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Int32 Method_3_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_1_METHOD_3_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_1_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_1_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
