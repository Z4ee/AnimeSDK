#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_4D85B3519CEC3065_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x193F1650)
#define CLASS_2_4D85B3519CEC3065_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x193F16E0)
#define CLASS_2_4D85B3519CEC3065__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F15D0)
#define CLASS_2_4D85B3519CEC3065__CTOR_OFFSET UNITYSDK_OFFSET(0x193F1640)

inline static constexpr unsigned int Class_2_4D85B3519CEC3065_TypeDefinitionIndex = 65385;

class Class_2_4D85B3519CEC3065 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0xAB; // 0x0
	::System::String* Field_2_7; // 0x20
	::System::String* Field_2_6; // 0x28
	::System::Int32 Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4D85B3519CEC3065__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D85B3519CEC3065__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D85B3519CEC3065_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D85B3519CEC3065_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
