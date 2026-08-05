#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_60B60884B6778625.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace System { class String; }

#define CLASS_2_604B5548310BA4BE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11B4DC60)
#define CLASS_2_604B5548310BA4BE_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11B4DD60)
#define CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11B4DE80)
#define CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B4DDF0)
#define CLASS_2_604B5548310BA4BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B4DCE0)
#define CLASS_2_604B5548310BA4BE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4DD50)

inline static constexpr unsigned int Class_2_604B5548310BA4BE_TypeDefinitionIndex = 78284;

class Class_2_604B5548310BA4BE : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_11 = 0xA2; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::Single Field_2_5; // 0x28
	::MoleMole::Config::PropertyModifyFunction Field_2_6; // 0x2C
	::System::Single Field_2_4; // 0x30
	::Enum_3_60B60884B6778625 Field_2_7; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_604B5548310BA4BE_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
