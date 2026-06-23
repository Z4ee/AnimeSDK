#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_1FD1CECAB456A68E.h"
#include "unitysdk/MoleMole/Config/CampType.h"

#define CLASS_2_6CFDA43B652C34B0_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x12394D10)
#define CLASS_2_6CFDA43B652C34B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12394DA0)
#define CLASS_2_6CFDA43B652C34B0_METHOD_2_E7246135CDB25645_OFFSET UNITYSDK_OFFSET(0x12394E30)
#define CLASS_2_6CFDA43B652C34B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x12394C90)
#define CLASS_2_6CFDA43B652C34B0__CTOR_OFFSET UNITYSDK_OFFSET(0x12394D00)

inline static constexpr unsigned int Class_2_6CFDA43B652C34B0_TypeDefinitionIndex = 78156;

class Class_2_6CFDA43B652C34B0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xFE; // 0x0
	::MoleMole::Config::CampType Field_2_1; // 0x20
	::Enum_3_1FD1CECAB456A68E Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6CFDA43B652C34B0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFDA43B652C34B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFDA43B652C34B0_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFDA43B652C34B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E7246135CDB25645(::Enum_3_1FD1CECAB456A68E a1, ::MoleMole::Config::CampType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_1FD1CECAB456A68E, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_2_6CFDA43B652C34B0_METHOD_2_E7246135CDB25645_OFFSET))(this, a1, a2);
	}
};
