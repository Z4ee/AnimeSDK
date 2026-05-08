#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13D86070)
#define CLASS_1_6FA17C56E9FF6BCE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13D86050)

inline static constexpr unsigned int Class_1_6FA17C56E9FF6BCE_1_TypeDefinitionIndex = 61598;

class Class_1_6FA17C56E9FF6BCE_1 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
