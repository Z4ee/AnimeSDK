#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBA0DB4687115F0A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF872820A2FF123B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF367BB0)
#define CLASS_1_FF872820A2FF123B_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xF3679A0)
#define CLASS_1_FF872820A2FF123B_METHOD_1_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0xF367D20)
#define CLASS_1_FF872820A2FF123B_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0xF367C60)
#define CLASS_1_FF872820A2FF123B__CTOR_OFFSET UNITYSDK_OFFSET(0xF367F40)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_TypeDefinitionIndex = 51463;

class Class_1_FF872820A2FF123B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EBA0DB4687115F0A*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_DISPOSE_OFFSET))(this);
	}

	::Class_1_EBA0DB4687115F0A* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_EBA0DB4687115F0A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_METHOD_1_B2AF81294D9C69C7_OFFSET))(this);
	}
};
