#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_EEF7A58732E3A0D2_2_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1800FBC0)
#define CLASS_2_EEF7A58732E3A0D2_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1800FC50)
#define CLASS_2_EEF7A58732E3A0D2_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1800FB40)
#define CLASS_2_EEF7A58732E3A0D2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1800FBB0)

inline static constexpr unsigned int Class_2_EEF7A58732E3A0D2_2_TypeDefinitionIndex = 62848;

class Class_2_EEF7A58732E3A0D2_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x2A; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EEF7A58732E3A0D2_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF7A58732E3A0D2_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF7A58732E3A0D2_2_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF7A58732E3A0D2_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
