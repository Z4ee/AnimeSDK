#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_E2954060FB2C07B2_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x114F0310)
#define CLASS_2_E2954060FB2C07B2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114F03A0)
#define CLASS_2_E2954060FB2C07B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x114F0290)
#define CLASS_2_E2954060FB2C07B2__CTOR_OFFSET UNITYSDK_OFFSET(0x114F0300)

inline static constexpr unsigned int Class_2_E2954060FB2C07B2_TypeDefinitionIndex = 52771;

class Class_2_E2954060FB2C07B2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x101; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E2954060FB2C07B2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2954060FB2C07B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2954060FB2C07B2_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2954060FB2C07B2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
