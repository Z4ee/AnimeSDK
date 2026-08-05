#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_DB5064629A34D2C9.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"

#define CLASS_2_77A869CEB0959096_METHOD_2_4577D5D5A55BD699_OFFSET UNITYSDK_OFFSET(0x1288CD20)
#define CLASS_2_77A869CEB0959096_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1288CC00)
#define CLASS_2_77A869CEB0959096_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1288CC90)
#define CLASS_2_77A869CEB0959096__CCTOR_OFFSET UNITYSDK_OFFSET(0x1288CB80)
#define CLASS_2_77A869CEB0959096__CTOR_OFFSET UNITYSDK_OFFSET(0x1288CBF0)

inline static constexpr unsigned int Class_2_77A869CEB0959096_TypeDefinitionIndex = 83622;

class Class_2_77A869CEB0959096 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x107; // 0x0
	::MoleMole::Config::TeleportSelectionType Field_2_2; // 0x20
	::Enum_3_DB5064629A34D2C9 Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_77A869CEB0959096__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77A869CEB0959096__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77A869CEB0959096_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77A869CEB0959096_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4577D5D5A55BD699(::MoleMole::Config::TeleportSelectionType a1, ::Enum_3_DB5064629A34D2C9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType, ::Enum_3_DB5064629A34D2C9))((::PBYTE)hIl2Cpp + CLASS_2_77A869CEB0959096_METHOD_2_4577D5D5A55BD699_OFFSET))(this, a1, a2);
	}
};
