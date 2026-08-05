#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_669019582704F0BF.h"

class Class_2_A09FCF98BA7C7265;
class Class_4_8D1AD90A8B2D39F9_3;

#define CLASS_2_FCD0C6EFD2690894_METHOD_2_48E6499EBC7D9052_OFFSET UNITYSDK_OFFSET(0x1E67DCC0)
#define CLASS_2_FCD0C6EFD2690894_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1E67E180)
#define CLASS_2_FCD0C6EFD2690894__CTOR_OFFSET UNITYSDK_OFFSET(0x1E67DC80)

inline static constexpr unsigned int Class_2_FCD0C6EFD2690894_TypeDefinitionIndex = 92899;

class Class_2_FCD0C6EFD2690894 : public ::Class_1_669019582704F0BF
{
public:
	::Class_2_A09FCF98BA7C7265* Field_2_0; // 0x30

	::System::Void _ctor(::Class_4_8D1AD90A8B2D39F9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_3*))((::PBYTE)hIl2Cpp + CLASS_2_FCD0C6EFD2690894__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_48E6499EBC7D9052(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FCD0C6EFD2690894_METHOD_2_48E6499EBC7D9052_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCD0C6EFD2690894_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}
};
