#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBD84809434AB007.h"

#define CLASS_2_D5F03C2010D71B1B_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x19960E60)
#define CLASS_2_D5F03C2010D71B1B_1_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x19960F30)
#define CLASS_2_D5F03C2010D71B1B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x199610F0)

inline static constexpr unsigned int Class_2_D5F03C2010D71B1B_1_TypeDefinitionIndex = 74103;

class Class_2_D5F03C2010D71B1B_1 : public ::Class_1_CBD84809434AB007
{
public:
	::System::Single EOJNNILHNNG; // 0x40
	::System::Single DINOMJBDEGE; // 0x44
	::System::Single IKGMMBFFDDE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_1_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}
};
