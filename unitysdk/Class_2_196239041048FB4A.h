#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_196239041048FB4A_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x19522C30)
#define CLASS_2_196239041048FB4A_METHOD_2_C3583389A8097258_OFFSET UNITYSDK_OFFSET(0x19522CC0)
#define CLASS_2_196239041048FB4A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19522D50)
#define CLASS_2_196239041048FB4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19522BB0)
#define CLASS_2_196239041048FB4A__CTOR_OFFSET UNITYSDK_OFFSET(0x19522C20)

inline static constexpr unsigned int Class_2_196239041048FB4A_TypeDefinitionIndex = 54257;

class Class_2_196239041048FB4A : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x14; // 0x0
	::System::Boolean Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x21

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_196239041048FB4A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196239041048FB4A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196239041048FB4A_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_C3583389A8097258(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_196239041048FB4A_METHOD_2_C3583389A8097258_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196239041048FB4A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
