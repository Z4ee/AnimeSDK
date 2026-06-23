#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E743398130672E35.h"
#include "unitysdk/Enum_3_CF29219B64B7B4D4.h"

class Class_3_7A267C1006DF3527;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C8DAF39949CF353B_METHOD_2_D25C711027CEE1FB_OFFSET UNITYSDK_OFFSET(0x17733980)
#define CLASS_2_C8DAF39949CF353B_METHOD_2_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0x17733910)
#define CLASS_2_C8DAF39949CF353B__CTOR_OFFSET UNITYSDK_OFFSET(0x17733970)

inline static constexpr unsigned int Class_2_C8DAF39949CF353B_TypeDefinitionIndex = 50792;

class Class_2_C8DAF39949CF353B : public ::Class_1_E743398130672E35
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_7A267C1006DF3527*>* Field_2_7; // 0x50
	::System::UInt32 Field_2_1; // 0x58
	::System::UInt32 Field_2_3; // 0x5C
	::Enum_3_CF29219B64B7B4D4 Field_2_8; // 0x60
	::System::UInt32 Field_2_6; // 0x64
	::System::Boolean Field_2_5; // 0x68
	::System::UInt32 Field_2_2; // 0x6C
	::System::Int32 Field_2_0; // 0x70
	::System::Single Field_2_4; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8DAF39949CF353B__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_E42C0E0E6BF738D3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8DAF39949CF353B_METHOD_2_E42C0E0E6BF738D3_OFFSET))(this);
	}

	::System::Single Method_2_D25C711027CEE1FB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8DAF39949CF353B_METHOD_2_D25C711027CEE1FB_OFFSET))(this);
	}
};
