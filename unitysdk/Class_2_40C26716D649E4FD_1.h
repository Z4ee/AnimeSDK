#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_2FA40FF0BD34B01D;
class Class_1_7807B2B04302CD7B_21;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_40C26716D649E4FD_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA52CDD0)
#define CLASS_2_40C26716D649E4FD_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA52CF10)
#define CLASS_2_40C26716D649E4FD_1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA52BCE0)
#define CLASS_2_40C26716D649E4FD_1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xA52BD00)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0xA52C790)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA52BEA0)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_51031B8CCF75DCBB_OFFSET UNITYSDK_OFFSET(0xA52C920)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA52D1E0)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA52D240)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA52D180)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA52CD50)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_C8D6B29192F288ED_1_OFFSET UNITYSDK_OFFSET(0xA52C1B0)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xA52C010)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_CFCEA107D822E3B3_OFFSET UNITYSDK_OFFSET(0xA52C470)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0xA52BD10)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0xA52C9E0)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xA52CC60)
#define CLASS_2_40C26716D649E4FD_1_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA52CBA0)
#define CLASS_2_40C26716D649E4FD_1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA52BCF0)
#define CLASS_2_40C26716D649E4FD_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA52D030)
#define CLASS_2_40C26716D649E4FD_1__ONBIND_OFFSET UNITYSDK_OFFSET(0xA52BB70)
#define CLASS_2_40C26716D649E4FD_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA52D2A0)
#define CLASS_2_40C26716D649E4FD_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA52D300)
#define CLASS_2_40C26716D649E4FD_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA52D120)

inline static constexpr unsigned int Class_2_40C26716D649E4FD_1_TypeDefinitionIndex = 65795;

class Class_2_40C26716D649E4FD_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_10; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::UnityEngine::UI::Image* Field_2_8; // 0x70
	::UnityEngine::Animation* Field_2_7; // 0x78
	::UnityEngine::UI::Button* Field_2_5; // 0x80
	::UnityEngine::UI::Image* Field_2_2; // 0x88
	::Il2CppArray<::System::String*>* Field_2_13; // 0x90
	::RPG::Client::LocalizedText* Field_2_3; // 0x98
	::UnityEngine::UI::Button* Field_2_6; // 0xA0
	::RPG::Client::LocalizedText* Field_2_4; // 0xA8
	::System::Int32 _Index_k__BackingField; // 0xB0
	::System::Int32 Field_2_12; // 0xB4
	::System::UInt32 Field_2_11; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_CFCEA107D822E3B3(::Class_1_2FA40FF0BD34B01D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FA40FF0BD34B01D*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_CFCEA107D822E3B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_390623AF74E8C979(::Class_1_7807B2B04302CD7B_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_21*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Void Method_2_51031B8CCF75DCBB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_51031B8CCF75DCBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_C8D6B29192F288ED_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
