#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_2CDACDF68777637D.h"

namespace System { class String; }

#define CLASS_2_632800EEE0D0DBF6_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14088B70)
#define CLASS_2_632800EEE0D0DBF6_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x140889F0)
#define CLASS_2_632800EEE0D0DBF6_METHOD_2_C9F1EF66069F7B90_OFFSET UNITYSDK_OFFSET(0x14088B10)
#define CLASS_2_632800EEE0D0DBF6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14088A80)
#define CLASS_2_632800EEE0D0DBF6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x140888F0)
#define CLASS_2_632800EEE0D0DBF6__CCTOR_OFFSET UNITYSDK_OFFSET(0x14088970)
#define CLASS_2_632800EEE0D0DBF6__CTOR_OFFSET UNITYSDK_OFFSET(0x140889E0)

inline static constexpr unsigned int Class_2_632800EEE0D0DBF6_TypeDefinitionIndex = 53642;

class Class_2_632800EEE0D0DBF6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x77; // 0x0
	::System::UInt32 Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x24
	::Enum_3_2CDACDF68777637D Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_632800EEE0D0DBF6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_632800EEE0D0DBF6__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_632800EEE0D0DBF6_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_632800EEE0D0DBF6_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_632800EEE0D0DBF6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C9F1EF66069F7B90(::Enum_3_2CDACDF68777637D a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2CDACDF68777637D, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_632800EEE0D0DBF6_METHOD_2_C9F1EF66069F7B90_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_632800EEE0D0DBF6_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
