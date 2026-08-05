#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace System { class String; }

#define CLASS_2_3CB5FE397F4526FE_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xF7B3090)
#define CLASS_2_3CB5FE397F4526FE_METHOD_2_8E61AA34F09AC312_OFFSET UNITYSDK_OFFSET(0xF7B3120)
#define CLASS_2_3CB5FE397F4526FE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF7B31C0)
#define CLASS_2_3CB5FE397F4526FE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7B3010)
#define CLASS_2_3CB5FE397F4526FE__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B3080)

inline static constexpr unsigned int Class_2_3CB5FE397F4526FE_TypeDefinitionIndex = 59446;

class Class_2_3CB5FE397F4526FE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_11 = 0xA3; // 0x0
	::System::String* Field_2_7; // 0x20
	::System::Single Field_2_5; // 0x28
	::MoleMole::Config::PropertyModifyFunction Field_2_6; // 0x2C
	::MoleMole::Config::BaseProperty Field_2_0; // 0x30
	::System::Double Field_2_4; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3CB5FE397F4526FE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB5FE397F4526FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB5FE397F4526FE_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_8E61AA34F09AC312(::MoleMole::Config::BaseProperty a1, ::System::String* a2, ::MoleMole::Config::PropertyModifyFunction a3, ::System::Single a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_3CB5FE397F4526FE_METHOD_2_8E61AA34F09AC312_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB5FE397F4526FE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
