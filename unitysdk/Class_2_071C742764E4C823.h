#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define CLASS_2_071C742764E4C823_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x110D32C0)
#define CLASS_2_071C742764E4C823_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x110D33C0)
#define CLASS_2_071C742764E4C823_METHOD_2_5900021CC9D4E66C_OFFSET UNITYSDK_OFFSET(0x110D3580)
#define CLASS_2_071C742764E4C823_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x110D34E0)
#define CLASS_2_071C742764E4C823_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x110D3450)
#define CLASS_2_071C742764E4C823__CCTOR_OFFSET UNITYSDK_OFFSET(0x110D3340)
#define CLASS_2_071C742764E4C823__CTOR_OFFSET UNITYSDK_OFFSET(0x110D33B0)

inline static constexpr unsigned int Class_2_071C742764E4C823_TypeDefinitionIndex = 43006;

class Class_2_071C742764E4C823 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x58; // 0x0
	::System::UInt32 Field_2_0; // 0x20
	::MoleMole::Config::EntityType Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_071C742764E4C823__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071C742764E4C823__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071C742764E4C823_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071C742764E4C823_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071C742764E4C823_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071C742764E4C823_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_5900021CC9D4E66C(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_071C742764E4C823_METHOD_2_5900021CC9D4E66C_OFFSET))(this, a1);
	}
};
