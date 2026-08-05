#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_B8A7129BD72A1EE0.h"

#define CLASS_2_1B1B79CF034B93D1_METHOD_2_3ED02FCD77CE5E3F_OFFSET UNITYSDK_OFFSET(0x13C00F20)
#define CLASS_2_1B1B79CF034B93D1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13C00E00)
#define CLASS_2_1B1B79CF034B93D1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C00E90)
#define CLASS_2_1B1B79CF034B93D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C00D80)
#define CLASS_2_1B1B79CF034B93D1__CTOR_OFFSET UNITYSDK_OFFSET(0x13C00DF0)

inline static constexpr unsigned int Class_2_1B1B79CF034B93D1_TypeDefinitionIndex = 79516;

class Class_2_1B1B79CF034B93D1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x40; // 0x0
	::Enum_3_B8A7129BD72A1EE0 Field_2_7; // 0x20
	::System::Boolean Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1B1B79CF034B93D1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1B79CF034B93D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1B79CF034B93D1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1B79CF034B93D1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3ED02FCD77CE5E3F(::System::UInt32 a1, ::System::Boolean a2, ::Enum_3_B8A7129BD72A1EE0 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::Enum_3_B8A7129BD72A1EE0))((::PBYTE)hIl2Cpp + CLASS_2_1B1B79CF034B93D1_METHOD_2_3ED02FCD77CE5E3F_OFFSET))(this, a1, a2, a3);
	}
};
