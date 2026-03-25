#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NetworkErrorDialog.h"

class Class_1_AA4BCBC1E3A957A3;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_6473C61C5360CBFE_METHOD_3_1AFF05DC1082906B_OFFSET UNITYSDK_OFFSET(0x8C88810)
#define CLASS_3_6473C61C5360CBFE_METHOD_3_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x8C88310)
#define CLASS_3_6473C61C5360CBFE_METHOD_3_A75AE34C285CC4D2_OFFSET UNITYSDK_OFFSET(0x8C87130)
#define CLASS_3_6473C61C5360CBFE_METHOD_3_AB9B9E71B0D7294E_OFFSET UNITYSDK_OFFSET(0x8C88260)
#define CLASS_3_6473C61C5360CBFE_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8C87440)
#define CLASS_3_6473C61C5360CBFE_METHOD_3_FEBAE9E88E8E4148_OFFSET UNITYSDK_OFFSET(0x8C87490)
#define CLASS_3_6473C61C5360CBFE_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x8C883E0)
#define CLASS_3_6473C61C5360CBFE_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0x8C885E0)
#define CLASS_3_6473C61C5360CBFE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C873B0)
#define CLASS_3_6473C61C5360CBFE__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8C87740)
#define CLASS_3_6473C61C5360CBFE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8C87880)
#define CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x8C88A40)
#define CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0x8C88A50)
#define CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8C88A20)
#define CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8C88A30)

inline static constexpr unsigned int Class_3_6473C61C5360CBFE_TypeDefinitionIndex = 59595;

class Class_3_6473C61C5360CBFE : public ::RPG::Client::NetworkErrorDialog
{
public:
	::Class_1_AA4BCBC1E3A957A3* Field_3_1; // 0x1A0
	::System::Boolean Field_3_0; // 0x1A8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A75AE34C285CC4D2(::System::String* a1, ::Class_1_AA4BCBC1E3A957A3* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_AA4BCBC1E3A957A3*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_METHOD_3_A75AE34C285CC4D2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FEBAE9E88E8E4148(::System::String* a1, ::System::String* a2, ::Class_1_AA4BCBC1E3A957A3* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Class_1_AA4BCBC1E3A957A3*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_METHOD_3_FEBAE9E88E8E4148_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_AA4BCBC1E3A957A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AA4BCBC1E3A957A3*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE__SETUPVIEW_OFFSET))(this);
	}

	::System::Void OnBtnCancelClick(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_ONBTNCANCELCLICK_OFFSET))(this, a1);
	}

	::System::Void OnBtnDetailClick(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_ONBTNDETAILCLICK_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_AB9B9E71B0D7294E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_METHOD_3_AB9B9E71B0D7294E_OFFSET))();
	}

	::System::Boolean Method_3_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_METHOD_3_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_3_1AFF05DC1082906B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE_METHOD_3_1AFF05DC1082906B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBtnCancelClick(::System::Object* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY_ONBTNCANCELCLICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnBtnDetailClick(::System::Object* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6473C61C5360CBFE___IFIXBASEPROXY_ONBTNDETAILCLICK_OFFSET))(this, P0);
	}
};
