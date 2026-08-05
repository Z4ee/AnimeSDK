#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_5F584B98A63C6020_Enum_3_3D52AFA71B0F6067.h"

#define CLASS_2_74010E0A05E533C9_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1991B1B0)
#define CLASS_2_74010E0A05E533C9_METHOD_2_A63CDAA15D279967_OFFSET UNITYSDK_OFFSET(0x1991B240)
#define CLASS_2_74010E0A05E533C9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1991B320)
#define CLASS_2_74010E0A05E533C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1991B130)
#define CLASS_2_74010E0A05E533C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1991B1A0)

inline static constexpr unsigned int Class_2_74010E0A05E533C9_TypeDefinitionIndex = 61014;

class Class_2_74010E0A05E533C9 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x57; // 0x0
	::Class_2_5F584B98A63C6020_Enum_3_3D52AFA71B0F6067 Field_2_5; // 0x20
	::System::UInt32 Field_2_1; // 0x24
	::System::Single Field_2_7; // 0x28
	::System::Boolean Field_2_6; // 0x2C
	::System::Single Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_74010E0A05E533C9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74010E0A05E533C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74010E0A05E533C9_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_A63CDAA15D279967(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::Class_2_5F584B98A63C6020_Enum_3_3D52AFA71B0F6067 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::Boolean, ::Class_2_5F584B98A63C6020_Enum_3_3D52AFA71B0F6067))((::PBYTE)hIl2Cpp + CLASS_2_74010E0A05E533C9_METHOD_2_A63CDAA15D279967_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74010E0A05E533C9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
