#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBD84809434AB007.h"

#define CLASS_2_D5F03C2010D71B1B_2_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x179C9C10)
#define CLASS_2_D5F03C2010D71B1B_2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x179C9B80)
#define CLASS_2_D5F03C2010D71B1B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x179C9D50)

inline static constexpr unsigned int Class_2_D5F03C2010D71B1B_2_TypeDefinitionIndex = 70805;

class Class_2_D5F03C2010D71B1B_2 : public ::Class_1_CBD84809434AB007
{
public:
	::System::Single Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_2_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}
};
