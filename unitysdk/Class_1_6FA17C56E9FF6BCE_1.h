#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14D84810)
#define CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14D84900)
#define CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14D848C0)
#define CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D84870)
#define CLASS_1_6FA17C56E9FF6BCE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D84950)

inline static constexpr unsigned int Class_1_6FA17C56E9FF6BCE_1_TypeDefinitionIndex = 58319;

class Class_1_6FA17C56E9FF6BCE_1 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FA17C56E9FF6BCE_1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
