#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AB4E0A41BB89929E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF872820A2FF123B_2_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x12E8A620)
#define CLASS_1_FF872820A2FF123B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89FC0)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_2_TypeDefinitionIndex = 79744;

class Class_1_FF872820A2FF123B_2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB4E0A41BB89929E*>* EPCJPLMBLPA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_2__CTOR_OFFSET))(this);
	}

	::Class_1_AB4E0A41BB89929E* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_AB4E0A41BB89929E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_2_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}
};
