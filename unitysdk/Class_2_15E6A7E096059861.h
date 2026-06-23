#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_31E7315FBDF3A2DD.h"

#define CLASS_2_15E6A7E096059861_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x154E11B0)
#define CLASS_2_15E6A7E096059861_METHOD_2_8AF0224B3B460798_OFFSET UNITYSDK_OFFSET(0x154E1240)
#define CLASS_2_15E6A7E096059861_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154E12E0)
#define CLASS_2_15E6A7E096059861__CCTOR_OFFSET UNITYSDK_OFFSET(0x154E1130)
#define CLASS_2_15E6A7E096059861__CTOR_OFFSET UNITYSDK_OFFSET(0x154E11A0)

inline static constexpr unsigned int Class_2_15E6A7E096059861_TypeDefinitionIndex = 45086;

class Class_2_15E6A7E096059861 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xF3; // 0x0
	::System::UInt32 Field_2_0; // 0x20
	::Enum_3_31E7315FBDF3A2DD Field_2_1; // 0x24
	::Enum_3_31E7315FBDF3A2DD Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_15E6A7E096059861__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15E6A7E096059861__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15E6A7E096059861_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_8AF0224B3B460798(::System::UInt32 a1, ::Enum_3_31E7315FBDF3A2DD a2, ::Enum_3_31E7315FBDF3A2DD a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_31E7315FBDF3A2DD, ::Enum_3_31E7315FBDF3A2DD))((::PBYTE)hIl2Cpp + CLASS_2_15E6A7E096059861_METHOD_2_8AF0224B3B460798_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15E6A7E096059861_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
