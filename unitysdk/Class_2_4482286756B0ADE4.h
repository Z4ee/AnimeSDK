#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

#define CLASS_2_4482286756B0ADE4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C2590)
#define CLASS_2_4482286756B0ADE4_METHOD_2_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0xA7C2BE0)
#define CLASS_2_4482286756B0ADE4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA7C2B80)
#define CLASS_2_4482286756B0ADE4_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0xA7C26D0)
#define CLASS_2_4482286756B0ADE4_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA7C2B00)
#define CLASS_2_4482286756B0ADE4_METHOD_2_EBFFDA5B2524E067_OFFSET UNITYSDK_OFFSET(0xA7C28A0)
#define CLASS_2_4482286756B0ADE4_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA7C23A0)
#define CLASS_2_4482286756B0ADE4__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C2C90)
#define CLASS_2_4482286756B0ADE4___DOSHOWEXITCONFIRM_B__10_0_OFFSET UNITYSDK_OFFSET(0xA7C2CB0)
#define CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C2D20)
#define CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA7C2CC0)

inline static constexpr unsigned int Class_2_4482286756B0ADE4_TypeDefinitionIndex = 59209;

class Class_2_4482286756B0ADE4 : public ::RPG::Client::BaseModule
{
public:
	::System::Boolean Field_2_3; // 0x10
	::System::Boolean Field_2_2; // 0x11
	::System::Nullable_1<::System::Boolean> Field_2_4; // 0x12
	::System::TimeSpan Field_2_1; // 0x18
	::System::Nullable_1<::RPG::Client::DateTimePro> Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4__CTOR_OFFSET))(this);
	}

	::System::Void OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Boolean Method_2_EBFFDA5B2524E067()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_EBFFDA5B2524E067_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_077465549C9EA81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_077465549C9EA81F_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __DoShowExitConfirm_b__10_0(::System::Boolean confirmed)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4___DOSHOWEXITCONFIRM_B__10_0_OFFSET))(this, confirmed);
	}

	::System::Void __iFixBaseProxy_OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
