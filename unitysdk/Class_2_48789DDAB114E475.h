#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_E3B98E92576201A2.h"

#define CLASS_2_48789DDAB114E475_METHOD_2_075B0C2C227F4CD4_OFFSET UNITYSDK_OFFSET(0x14356ED0)
#define CLASS_2_48789DDAB114E475_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14356E40)
#define CLASS_2_48789DDAB114E475_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14356F40)
#define CLASS_2_48789DDAB114E475__CCTOR_OFFSET UNITYSDK_OFFSET(0x14356DC0)
#define CLASS_2_48789DDAB114E475__CTOR_OFFSET UNITYSDK_OFFSET(0x14356E30)

inline static constexpr unsigned int Class_2_48789DDAB114E475_TypeDefinitionIndex = 47228;

class Class_2_48789DDAB114E475 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x111; // 0x0
	::System::Boolean Field_2_2; // 0x20
	::Enum_3_E3B98E92576201A2 Field_2_0; // 0x24
	::System::Single Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_075B0C2C227F4CD4(::Enum_3_E3B98E92576201A2 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E3B98E92576201A2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475_METHOD_2_075B0C2C227F4CD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48789DDAB114E475_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
