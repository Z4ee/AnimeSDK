#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6FA17C56E9FF6BCE_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x116C07E0)
#define CLASS_1_6FA17C56E9FF6BCE__CTOR_OFFSET UNITYSDK_OFFSET(0x116C07C0)

inline static constexpr unsigned int Class_1_6FA17C56E9FF6BCE_TypeDefinitionIndex = 47181;

class Class_1_6FA17C56E9FF6BCE : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_7; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
