#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace System { class String; }

#define CLASS_2_3CB5FE397F4526FE_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1535D560)
#define CLASS_2_3CB5FE397F4526FE_METHOD_2_8E61AA34F09AC312_OFFSET UNITYSDK_OFFSET(0x1535D680)
#define CLASS_2_3CB5FE397F4526FE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1535D5F0)
#define CLASS_2_3CB5FE397F4526FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1535D4E0)
#define CLASS_2_3CB5FE397F4526FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1535D550)

inline static constexpr unsigned int Class_2_3CB5FE397F4526FE_TypeDefinitionIndex = 53814;

class Class_2_3CB5FE397F4526FE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x9C; // 0x0
	::System::String* Field_2_1; // 0x20
	::MoleMole::Config::PropertyModifyFunction Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C
	::System::Double Field_2_4; // 0x30
	::MoleMole::Config::BaseProperty Field_2_0; // 0x38

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

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CB5FE397F4526FE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8E61AA34F09AC312(::MoleMole::Config::BaseProperty a1, ::System::String* a2, ::MoleMole::Config::PropertyModifyFunction a3, ::System::Single a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_3CB5FE397F4526FE_METHOD_2_8E61AA34F09AC312_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
