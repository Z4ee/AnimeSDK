#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

#define CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_1_OFFSET UNITYSDK_OFFSET(0x19E21BF0)
#define CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_OFFSET UNITYSDK_OFFSET(0x19E21B60)
#define CLASS_2_C66010578763963F_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x19E21AD0)
#define CLASS_2_C66010578763963F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19E21C80)
#define CLASS_2_C66010578763963F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E21A50)
#define CLASS_2_C66010578763963F__CTOR_OFFSET UNITYSDK_OFFSET(0x19E21AC0)

inline static constexpr unsigned int Class_2_C66010578763963F_TypeDefinitionIndex = 84109;

class Class_2_C66010578763963F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0xC8; // 0x0
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24
	::System::UInt32 Field_2_3; // 0x28
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_0FB160AD97996BF0(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0FB160AD97996BF0_1(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_0FB160AD97996BF0_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66010578763963F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
