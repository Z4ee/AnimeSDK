#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_AD6FD062ED5C13A5_METHOD_2_4F8C7A16D1B776FA_OFFSET UNITYSDK_OFFSET(0x11388510)
#define CLASS_2_AD6FD062ED5C13A5_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x113883F0)
#define CLASS_2_AD6FD062ED5C13A5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11388480)
#define CLASS_2_AD6FD062ED5C13A5__CCTOR_OFFSET UNITYSDK_OFFSET(0x11388370)
#define CLASS_2_AD6FD062ED5C13A5__CTOR_OFFSET UNITYSDK_OFFSET(0x113883E0)

inline static constexpr unsigned int Class_2_AD6FD062ED5C13A5_TypeDefinitionIndex = 52706;

class Class_2_AD6FD062ED5C13A5 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x108; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::UInt32 Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD6FD062ED5C13A5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6FD062ED5C13A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6FD062ED5C13A5_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6FD062ED5C13A5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4F8C7A16D1B776FA(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD6FD062ED5C13A5_METHOD_2_4F8C7A16D1B776FA_OFFSET))(this, a1, a2, a3, a4);
	}
};
