#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"

namespace RPG::Client { class ActivityFeverTimePileToast; }
namespace RPG::Client { class ProgressBar; }
namespace RPG::GameCore { class FeverTimeInfoChangeParam; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B94A7D59C6C20C91_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA5E8440)
#define CLASS_2_B94A7D59C6C20C91_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA5E8680)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xA5E6B50)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA5E6E40)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA5E8C80)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA5E8CE0)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA5E8C20)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xA5E6FB0)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_AFAC481DD0C65A52_OFFSET UNITYSDK_OFFSET(0xA5E76F0)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xA5E8200)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xA5E8080)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xA5E8000)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xA5E8380)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA5E7F80)
#define CLASS_2_B94A7D59C6C20C91__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E8880)
#define CLASS_2_B94A7D59C6C20C91__ONBIND_OFFSET UNITYSDK_OFFSET(0xA5E61D0)
#define CLASS_2_B94A7D59C6C20C91___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA5E8D40)
#define CLASS_2_B94A7D59C6C20C91___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA5E8DA0)
#define CLASS_2_B94A7D59C6C20C91___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA5E8BC0)

inline static constexpr unsigned int Class_2_B94A7D59C6C20C91_TypeDefinitionIndex = 67363;

class Class_2_B94A7D59C6C20C91 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Button* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::System::String* Field_2_2; // 0x70
	::UnityEngine::Animation* Field_2_3; // 0x78
	::UnityEngine::UI::Text* Field_2_4; // 0x80
	::UnityEngine::Transform* Field_2_5; // 0x88
	::RPG::GameCore::LevelUIComponent* Field_2_6; // 0x90
	::UnityEngine::Animator* Field_2_7; // 0x98
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* Field_2_8; // 0xA0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* Field_2_9; // 0xA8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* Field_2_10; // 0xB0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* Field_2_11; // 0xB8
	::UnityEngine::UI::Button* Field_2_12; // 0xC0
	::UnityEngine::UI::Button* Field_2_13; // 0xC8
	::UnityEngine::Transform* Field_2_14; // 0xD0
	::RPG::Client::ActivityFeverTimePileToast* Field_2_15; // 0xD8
	::UnityEngine::UI::Text* Field_2_16; // 0xE0
	::UnityEngine::UI::Text* Field_2_17; // 0xE8
	::System::String* Field_2_18; // 0xF0
	::UnityEngine::UI::Button* Field_2_19; // 0xF8
	::RPG::GameCore::FeverTimePeriodType Field_2_20; // 0x100
	::System::Boolean Field_2_21; // 0x104
	::System::UInt32 Field_2_22; // 0x108
	::System::UInt32 Field_2_23; // 0x10C
	::System::Int32 Field_2_24; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFAC481DD0C65A52(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_AFAC481DD0C65A52_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
