#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_552ECB8041B24863_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x18877880)
#define CLASS_2_552ECB8041B24863_METHOD_2_BB5885D1F9D794A4_OFFSET UNITYSDK_OFFSET(0x1885F090)
#define CLASS_2_552ECB8041B24863_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18877910)
#define CLASS_2_552ECB8041B24863__CCTOR_OFFSET UNITYSDK_OFFSET(0x18877800)
#define CLASS_2_552ECB8041B24863__CTOR_OFFSET UNITYSDK_OFFSET(0x18877870)

inline static constexpr unsigned int Class_2_552ECB8041B24863_TypeDefinitionIndex = 80971;

class Class_2_552ECB8041B24863 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xEC; // 0x0
	::System::UInt32 Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_552ECB8041B24863__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_552ECB8041B24863__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_552ECB8041B24863_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_552ECB8041B24863_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB5885D1F9D794A4(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_552ECB8041B24863_METHOD_2_BB5885D1F9D794A4_OFFSET))(this, a1, a2, a3);
	}
};
