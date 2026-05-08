#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_1A3450664E1488DB.h"

#define CLASS_2_15E6A7E096059861_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xDAE5340)
#define CLASS_2_15E6A7E096059861_METHOD_2_8AF0224B3B460798_OFFSET UNITYSDK_OFFSET(0xDAE5460)
#define CLASS_2_15E6A7E096059861_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDAE53D0)
#define CLASS_2_15E6A7E096059861__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAE52C0)
#define CLASS_2_15E6A7E096059861__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE5330)

inline static constexpr unsigned int Class_2_15E6A7E096059861_TypeDefinitionIndex = 66878;

class Class_2_15E6A7E096059861 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0xED; // 0x0
	::System::UInt32 Field_2_0; // 0x20
	::Enum_3_1A3450664E1488DB Field_2_2; // 0x24
	::Enum_3_1A3450664E1488DB Field_2_1; // 0x28

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

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15E6A7E096059861_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8AF0224B3B460798(::System::UInt32 a1, ::Enum_3_1A3450664E1488DB a2, ::Enum_3_1A3450664E1488DB a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_1A3450664E1488DB, ::Enum_3_1A3450664E1488DB))((::PBYTE)hIl2Cpp + CLASS_2_15E6A7E096059861_METHOD_2_8AF0224B3B460798_OFFSET))(this, a1, a2, a3);
	}
};
