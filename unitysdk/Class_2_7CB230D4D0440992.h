#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_2FA40FF0BD34B01D;
class Class_1_7807B2B04302CD7B_22;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_7CB230D4D0440992_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13C10EA0)
#define CLASS_2_7CB230D4D0440992_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13C11020)
#define CLASS_2_7CB230D4D0440992_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x13C100D0)
#define CLASS_2_7CB230D4D0440992_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x13C100F0)
#define CLASS_2_7CB230D4D0440992_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x13C10100)
#define CLASS_2_7CB230D4D0440992_METHOD_2_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0x13C108C0)
#define CLASS_2_7CB230D4D0440992_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x13C102C0)
#define CLASS_2_7CB230D4D0440992_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13C11300)
#define CLASS_2_7CB230D4D0440992_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x13C11360)
#define CLASS_2_7CB230D4D0440992_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13C112A0)
#define CLASS_2_7CB230D4D0440992_METHOD_2_73351D543AC31E3E_OFFSET UNITYSDK_OFFSET(0x13C10A50)
#define CLASS_2_7CB230D4D0440992_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13C10E20)
#define CLASS_2_7CB230D4D0440992_METHOD_2_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x13C10430)
#define CLASS_2_7CB230D4D0440992_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x13C10B10)
#define CLASS_2_7CB230D4D0440992_METHOD_2_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x13C105E0)
#define CLASS_2_7CB230D4D0440992_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x13C10D60)
#define CLASS_2_7CB230D4D0440992_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13C10CA0)
#define CLASS_2_7CB230D4D0440992_METHOD_2_F6E5115FB17B3B4D_OFFSET UNITYSDK_OFFSET(0x13C107A0)
#define CLASS_2_7CB230D4D0440992_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x13C100E0)
#define CLASS_2_7CB230D4D0440992__CTOR_OFFSET UNITYSDK_OFFSET(0x13C11180)
#define CLASS_2_7CB230D4D0440992__ONBIND_OFFSET UNITYSDK_OFFSET(0x13C0FF80)
#define CLASS_2_7CB230D4D0440992___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13C113C0)
#define CLASS_2_7CB230D4D0440992___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13C11420)
#define CLASS_2_7CB230D4D0440992___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13C11240)

inline static constexpr unsigned int Class_2_7CB230D4D0440992_TypeDefinitionIndex = 66728;

class Class_2_7CB230D4D0440992 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_2; // 0x68
	::UnityEngine::UI::Button* Field_2_3; // 0x70
	::Il2CppArray<::System::String*>* Field_2_4; // 0x78
	::RPG::Client::LocalizedText* Field_2_5; // 0x80
	::RPG::GameCore::LevelUIComponent* Field_2_6; // 0x88
	::RPG::Client::LocalizedText* Field_2_7; // 0x90
	::UnityEngine::Animation* Field_2_8; // 0x98
	::UnityEngine::UI::Button* Field_2_9; // 0xA0
	::System::Int32 Field_2_10; // 0xA8
	::System::UInt32 Field_2_11; // 0xAC
	::System::Int32 _Index_k__BackingField; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_2_F6E5115FB17B3B4D(::Class_1_2FA40FF0BD34B01D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FA40FF0BD34B01D*))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_F6E5115FB17B3B4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_390623AF74E8C979(::Class_1_7807B2B04302CD7B_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_22*))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Void Method_2_73351D543AC31E3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_73351D543AC31E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_E5B2D19C36637166_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CB230D4D0440992___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
