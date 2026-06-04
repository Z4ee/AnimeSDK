#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

#define CLASS_2_155795594C9D7C9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B87120)
#define CLASS_2_155795594C9D7C9E_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13B87740)
#define CLASS_2_155795594C9D7C9E_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x13B87290)
#define CLASS_2_155795594C9D7C9E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13B876C0)
#define CLASS_2_155795594C9D7C9E_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x13B877A0)
#define CLASS_2_155795594C9D7C9E_METHOD_2_EBFFDA5B2524E067_OFFSET UNITYSDK_OFFSET(0x13B87460)
#define CLASS_2_155795594C9D7C9E_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x13B86EF0)
#define CLASS_2_155795594C9D7C9E__CTOR_OFFSET UNITYSDK_OFFSET(0x13B87860)
#define CLASS_2_155795594C9D7C9E___DOSHOWEXITCONFIRM_B__10_0_OFFSET UNITYSDK_OFFSET(0x13B87880)
#define CLASS_2_155795594C9D7C9E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B878F0)
#define CLASS_2_155795594C9D7C9E___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x13B87890)

inline static constexpr unsigned int Class_2_155795594C9D7C9E_TypeDefinitionIndex = 60144;

class Class_2_155795594C9D7C9E : public ::RPG::Client::BaseModule
{
public:
	::System::Nullable_1<::RPG::Client::DateTimePro> Field_2_0; // 0x10
	::System::TimeSpan Field_2_1; // 0x20
	::System::Nullable_1<::System::Boolean> Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x2A
	::System::Boolean Field_2_4; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E__CTOR_OFFSET))(this);
	}

	::System::Void OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Boolean Method_2_EBFFDA5B2524E067()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_EBFFDA5B2524E067_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __DoShowExitConfirm_b__10_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E___DOSHOWEXITCONFIRM_B__10_0_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
