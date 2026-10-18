#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define CLASS_1_CCAB6553E7EB2F6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D0B20)
#define CLASS_1_CCAB6553E7EB2F6B_GET_COUNTTEXT_OFFSET UNITYSDK_OFFSET(0x156D0230)
#define CLASS_1_CCAB6553E7EB2F6B_GET_CURRENCYID_OFFSET UNITYSDK_OFFSET(0x156D0210)
#define CLASS_1_CCAB6553E7EB2F6B_GET_ENABLENAVIGATION_OFFSET UNITYSDK_OFFSET(0x156D0280)
#define CLASS_1_CCAB6553E7EB2F6B_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x156D0220)
#define CLASS_1_CCAB6553E7EB2F6B_GET_SHOWMAX_OFFSET UNITYSDK_OFFSET(0x156D0270)
#define CLASS_1_CCAB6553E7EB2F6B_GET_SHOWPLUSBUTTON_OFFSET UNITYSDK_OFFSET(0x156D0240)
#define CLASS_1_CCAB6553E7EB2F6B_GET_SHOWTOTALNUM_OFFSET UNITYSDK_OFFSET(0x156D0250)
#define CLASS_1_CCAB6553E7EB2F6B_GET_TOTALNUMTEXT_OFFSET UNITYSDK_OFFSET(0x156D0260)
#define CLASS_1_CCAB6553E7EB2F6B_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x156D0BF0)
#define CLASS_1_CCAB6553E7EB2F6B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x156D0930)
#define CLASS_1_CCAB6553E7EB2F6B_METHOD_1_7243ADD7DCCD2F93_OFFSET UNITYSDK_OFFSET(0x156D0BA0)
#define CLASS_1_CCAB6553E7EB2F6B_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x156D0290)
#define CLASS_1_CCAB6553E7EB2F6B_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x156D0980)
#define CLASS_1_CCAB6553E7EB2F6B__CTOR_OFFSET UNITYSDK_OFFSET(0x156D0350)

inline static constexpr unsigned int Class_1_CCAB6553E7EB2F6B_TypeDefinitionIndex = 79147;

class Class_1_CCAB6553E7EB2F6B : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::Boolean>* _ShowMax_k__BackingField; // 0x10
	::Sofa::Core::SimpleCommand* EAGJDPFNCPF; // 0x18
	::R3::ReactiveProperty_1<::System::String*>* _TotalNumText_k__BackingField; // 0x20
	::R3::ReactiveProperty_1<::System::String*>* _CountText_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::System::Boolean>* _EnableNavigation_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::Boolean>* _ShowPlusButton_k__BackingField; // 0x38
	::R3::ReactiveProperty_1<::System::String*>* _IconPath_k__BackingField; // 0x40
	::R3::ReactiveProperty_1<::System::Boolean>* _ShowTotalNum_k__BackingField; // 0x48
	::System::UInt32 IDMKFFMGJJJ; // 0x50
	::System::UInt32 _CurrencyID_k__BackingField; // 0x54

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrencyID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_CURRENCYID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_IconPath()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_ICONPATH_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_CountText()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_COUNTTEXT_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ShowPlusButton()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_SHOWPLUSBUTTON_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ShowTotalNum()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_SHOWTOTALNUM_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_TotalNumText()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_TOTALNUMTEXT_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ShowMax()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_SHOWMAX_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_EnableNavigation()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_GET_ENABLENAVIGATION_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7243ADD7DCCD2F93(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_METHOD_1_7243ADD7DCCD2F93_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAB6553E7EB2F6B_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}
};
