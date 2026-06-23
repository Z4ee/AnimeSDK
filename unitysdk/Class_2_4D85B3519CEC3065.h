#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_4D85B3519CEC3065_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1080D390)
#define CLASS_2_4D85B3519CEC3065_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1080D420)
#define CLASS_2_4D85B3519CEC3065__CCTOR_OFFSET UNITYSDK_OFFSET(0x1080D310)
#define CLASS_2_4D85B3519CEC3065__CTOR_OFFSET UNITYSDK_OFFSET(0x1080D380)

inline static constexpr unsigned int Class_2_4D85B3519CEC3065_TypeDefinitionIndex = 76844;

class Class_2_4D85B3519CEC3065 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xA4; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
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
