#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF872820A2FF123B_1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x143F33B0)
#define CLASS_1_FF872820A2FF123B_1_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x143F3440)
#define CLASS_1_FF872820A2FF123B_1_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x143F34F0)
#define CLASS_1_FF872820A2FF123B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x143F2FA0)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_1_TypeDefinitionIndex = 59297;

class Class_1_FF872820A2FF123B_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_11B5C6B3FA66CD5A*>* Field_1_0; // 0x10
	::Class_1_11B5C6B3FA66CD5A* Field_1_1; // 0x18

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
