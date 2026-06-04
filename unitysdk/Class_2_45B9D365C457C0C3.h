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
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_45B9D365C457C0C3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB89F60)
#define CLASS_2_45B9D365C457C0C3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAB8A1A0)
#define CLASS_2_45B9D365C457C0C3_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xAB87E40)
#define CLASS_2_45B9D365C457C0C3_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xAB87E60)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xAB87E70)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0xAB882E0)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xAB88170)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAB8A7A0)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xAB8A800)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB8A740)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_A326E095B256A133_OFFSET UNITYSDK_OFFSET(0xAB89540)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xAB893C0)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xAB89240)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xAB891C0)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xAB89EA0)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xAB89140)
#define CLASS_2_45B9D365C457C0C3_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xAB87E50)
#define CLASS_2_45B9D365C457C0C3__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8A3A0)
#define CLASS_2_45B9D365C457C0C3__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB873F0)
#define CLASS_2_45B9D365C457C0C3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB8A860)
#define CLASS_2_45B9D365C457C0C3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAB8A8C0)
#define CLASS_2_45B9D365C457C0C3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB8A6E0)

inline static constexpr unsigned int Class_2_45B9D365C457C0C3_TypeDefinitionIndex = 66722;

class Class_2_45B9D365C457C0C3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::String* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_2; // 0x68
	::UnityEngine::Animation* Field_2_3; // 0x70
	::UnityEngine::UI::Text* Field_2_4; // 0x78
	::UnityEngine::Animator* Field_2_5; // 0x80
	::UnityEngine::Transform* Field_2_6; // 0x88
	::System::String* Field_2_7; // 0x90
	::UnityEngine::Transform* Field_2_8; // 0x98
	::UnityEngine::Animation* Field_2_9; // 0xA0
	::UnityEngine::UI::Button* Field_2_10; // 0xA8
	::RPG::Client::ActivityFeverTimePileToast* Field_2_11; // 0xB0
	::UnityEngine::Animation* Field_2_12; // 0xB8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* Field_2_13; // 0xC0
	::RPG::GameCore::LevelUIComponent* Field_2_14; // 0xC8
	::UnityEngine::UI::Image* Field_2_15; // 0xD0
	::UnityEngine::UI::Text* Field_2_16; // 0xD8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* Field_2_17; // 0xE0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* Field_2_18; // 0xE8
	::UnityEngine::UI::Button* Field_2_19; // 0xF0
	::UnityEngine::Transform* Field_2_20; // 0xF8
	::UnityEngine::UI::Button* Field_2_21; // 0x100
	::UnityEngine::Animation* Field_2_22; // 0x108
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* Field_2_23; // 0x110
	::UnityEngine::UI::Image* Field_2_24; // 0x118
	::UnityEngine::UI::Button* Field_2_25; // 0x120
	::UnityEngine::UI::Image* Field_2_26; // 0x128
	::System::Int32 Field_2_27; // 0x130
	::System::UInt32 Field_2_28; // 0x134
	::RPG::GameCore::FeverTimePeriodType Field_2_29; // 0x138
	::System::UInt32 Field_2_30; // 0x13C
	::System::Int32 _Index_k__BackingField; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A326E095B256A133(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_A326E095B256A133_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
