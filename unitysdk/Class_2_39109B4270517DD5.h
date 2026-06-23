#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

namespace System { class String; }

#define CLASS_2_39109B4270517DD5_METHOD_2_0404C765C41C7F23_OFFSET UNITYSDK_OFFSET(0xF8D2110)
#define CLASS_2_39109B4270517DD5_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xF8D2080)
#define CLASS_2_39109B4270517DD5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF8D21B0)
#define CLASS_2_39109B4270517DD5__CCTOR_OFFSET UNITYSDK_OFFSET(0xF8D2000)
#define CLASS_2_39109B4270517DD5__CTOR_OFFSET UNITYSDK_OFFSET(0xF8D2070)

inline static constexpr unsigned int Class_2_39109B4270517DD5_TypeDefinitionIndex = 83692;

class Class_2_39109B4270517DD5 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0xAC; // 0x0
	::System::String* Field_2_2; // 0x20
	::System::Double Field_2_4; // 0x28
	::System::Double Field_2_3; // 0x30
	::MoleMole::Config::BaseProperty Field_2_1; // 0x38
	::System::UInt32 Field_2_0; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_39109B4270517DD5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39109B4270517DD5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39109B4270517DD5_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_0404C765C41C7F23(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_39109B4270517DD5_METHOD_2_0404C765C41C7F23_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39109B4270517DD5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
