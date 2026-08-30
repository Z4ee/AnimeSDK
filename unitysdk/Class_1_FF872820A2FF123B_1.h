#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF872820A2FF123B_1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1637B190)
#define CLASS_1_FF872820A2FF123B_1_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x1637B220)
#define CLASS_1_FF872820A2FF123B_1_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1637B2D0)
#define CLASS_1_FF872820A2FF123B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1637AD80)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_1_TypeDefinitionIndex = 63421;

class Class_1_FF872820A2FF123B_1 : public ::System::Object
{
public:
	::Class_1_11B5C6B3FA66CD5A* DPFOPINNHLI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_11B5C6B3FA66CD5A*>* DPHNABJHCFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_1_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_1_11B5C6B3FA66CD5A* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_11B5C6B3FA66CD5A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_1_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::Class_1_11B5C6B3FA66CD5A* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_11B5C6B3FA66CD5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_1_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
