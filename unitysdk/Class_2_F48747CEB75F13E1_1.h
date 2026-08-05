#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_F48747CEB75F13E1_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16428F40)
#define CLASS_2_F48747CEB75F13E1_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16429040)
#define CLASS_2_F48747CEB75F13E1_1_METHOD_2_EC02C4ADC7E4B586_OFFSET UNITYSDK_OFFSET(0x16428FD0)
#define CLASS_2_F48747CEB75F13E1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x16428EC0)
#define CLASS_2_F48747CEB75F13E1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16428F30)

inline static constexpr unsigned int Class_2_F48747CEB75F13E1_1_TypeDefinitionIndex = 44922;

class Class_2_F48747CEB75F13E1_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x3D; // 0x0
	::System::String* Field_2_6; // 0x20
	::System::UInt32 Field_2_0; // 0x28
	::System::UInt32 Field_2_7; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_EC02C4ADC7E4B586(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_1_METHOD_2_EC02C4ADC7E4B586_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
