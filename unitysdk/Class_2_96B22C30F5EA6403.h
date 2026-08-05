#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_96B22C30F5EA6403_METHOD_2_249DAE71FDA1397C_OFFSET UNITYSDK_OFFSET(0x1493FEC0)
#define CLASS_2_96B22C30F5EA6403_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1493FC90)
#define CLASS_2_96B22C30F5EA6403_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1493FD90)
#define CLASS_2_96B22C30F5EA6403_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1493FF60)
#define CLASS_2_96B22C30F5EA6403_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1493FE20)
#define CLASS_2_96B22C30F5EA6403__CCTOR_OFFSET UNITYSDK_OFFSET(0x1493FD10)
#define CLASS_2_96B22C30F5EA6403__CTOR_OFFSET UNITYSDK_OFFSET(0x1493FD80)

inline static constexpr unsigned int Class_2_96B22C30F5EA6403_TypeDefinitionIndex = 65497;

class Class_2_96B22C30F5EA6403 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0xC; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_96B22C30F5EA6403__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B22C30F5EA6403__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B22C30F5EA6403_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B22C30F5EA6403_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B22C30F5EA6403_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_249DAE71FDA1397C(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_96B22C30F5EA6403_METHOD_2_249DAE71FDA1397C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96B22C30F5EA6403_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
