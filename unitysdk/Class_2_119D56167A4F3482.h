#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_119D56167A4F3482_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x117A8C30)
#define CLASS_2_119D56167A4F3482_METHOD_2_72E6A88DF1BEDA9E_1_OFFSET UNITYSDK_OFFSET(0x117A8DE0)
#define CLASS_2_119D56167A4F3482_METHOD_2_72E6A88DF1BEDA9E_OFFSET UNITYSDK_OFFSET(0x117A8D50)
#define CLASS_2_119D56167A4F3482_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117A8CC0)
#define CLASS_2_119D56167A4F3482__CCTOR_OFFSET UNITYSDK_OFFSET(0x117A8BB0)
#define CLASS_2_119D56167A4F3482__CTOR_OFFSET UNITYSDK_OFFSET(0x117A8C20)

inline static constexpr unsigned int Class_2_119D56167A4F3482_TypeDefinitionIndex = 77324;

class Class_2_119D56167A4F3482 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x9D; // 0x0
	::System::Single Field_2_0; // 0x20
	::System::Boolean Field_2_2; // 0x24
	::System::Single Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_119D56167A4F3482__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_119D56167A4F3482__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_119D56167A4F3482_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_119D56167A4F3482_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_72E6A88DF1BEDA9E(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_119D56167A4F3482_METHOD_2_72E6A88DF1BEDA9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_72E6A88DF1BEDA9E_1(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_119D56167A4F3482_METHOD_2_72E6A88DF1BEDA9E_1_OFFSET))(this, a1, a2, a3);
	}
};
