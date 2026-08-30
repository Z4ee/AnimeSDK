#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBD84809434AB007.h"

#define CLASS_2_D5F03C2010D71B1B_2_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x18351F40)
#define CLASS_2_D5F03C2010D71B1B_2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18351EB0)
#define CLASS_2_D5F03C2010D71B1B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18352080)

inline static constexpr unsigned int Class_2_D5F03C2010D71B1B_2_TypeDefinitionIndex = 74104;

class Class_2_D5F03C2010D71B1B_2 : public ::Class_1_CBD84809434AB007
{
public:
	::System::Single GGNIPKCGLGA; // 0x40

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
