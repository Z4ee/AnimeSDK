#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_AD10A412A5B7C3C9_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x147AC210)
#define CLASS_2_AD10A412A5B7C3C9_METHOD_2_C4EB9308F6670004_OFFSET UNITYSDK_OFFSET(0x147AC2A0)
#define CLASS_2_AD10A412A5B7C3C9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x147AC310)
#define CLASS_2_AD10A412A5B7C3C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x147AC190)
#define CLASS_2_AD10A412A5B7C3C9__CTOR_OFFSET UNITYSDK_OFFSET(0x147AC200)

inline static constexpr unsigned int Class_2_AD10A412A5B7C3C9_TypeDefinitionIndex = 82175;

class Class_2_AD10A412A5B7C3C9 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xDD; // 0x0
	::System::Double Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD10A412A5B7C3C9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD10A412A5B7C3C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD10A412A5B7C3C9_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_C4EB9308F6670004(::System::UInt32 a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_AD10A412A5B7C3C9_METHOD_2_C4EB9308F6670004_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD10A412A5B7C3C9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
