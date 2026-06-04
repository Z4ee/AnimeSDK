#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"

namespace RPG::Client { class ProgressBar; }
namespace RPG::Client { class StoryFeverPileToast; }
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

#define CLASS_2_6DEA1111A4ABC11F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x137AA920)
#define CLASS_2_6DEA1111A4ABC11F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x137AABA0)
#define CLASS_2_6DEA1111A4ABC11F_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x137A84E0)
#define CLASS_2_6DEA1111A4ABC11F_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x137A8500)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x137A8AF0)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_20695273B3929D5F_OFFSET UNITYSDK_OFFSET(0x137A9AA0)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x137A8CB0)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x137A8E20)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x137AB290)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x137AB2F0)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x137AB230)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x137AA6A0)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x137AA820)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x137A9920)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x137A97A0)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x137A9720)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x137AA760)
#define CLASS_2_6DEA1111A4ABC11F_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x137A96A0)
#define CLASS_2_6DEA1111A4ABC11F_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x137A84F0)
#define CLASS_2_6DEA1111A4ABC11F__CTOR_OFFSET UNITYSDK_OFFSET(0x137AADE0)
#define CLASS_2_6DEA1111A4ABC11F__ONBIND_OFFSET UNITYSDK_OFFSET(0x137A8510)
#define CLASS_2_6DEA1111A4ABC11F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x137AB350)
#define CLASS_2_6DEA1111A4ABC11F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x137AB3B0)
#define CLASS_2_6DEA1111A4ABC11F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x137AB1D0)

inline static constexpr unsigned int Class_2_6DEA1111A4ABC11F_TypeDefinitionIndex = 67370;

class Class_2_6DEA1111A4ABC11F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::RPG::Client::StoryFeverPileToast* Field_2_2; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* Field_2_3; // 0x70
	::UnityEngine::UI::Text* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::RPG::GameCore::LevelUIComponent* Field_2_6; // 0x88
	::System::String* Field_2_7; // 0x90
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* Field_2_8; // 0x98
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* Field_2_9; // 0xA0
	::System::String* Field_2_10; // 0xA8
	::UnityEngine::Animator* Field_2_11; // 0xB0
	::UnityEngine::Transform* Field_2_12; // 0xB8
	::UnityEngine::Transform* Field_2_13; // 0xC0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* Field_2_14; // 0xC8
	::UnityEngine::UI::Text* Field_2_15; // 0xD0
	::UnityEngine::Animation* Field_2_16; // 0xD8
	::UnityEngine::Transform* Field_2_17; // 0xE0
	::System::String* Field_2_18; // 0xE8
	::UnityEngine::UI::Button* Field_2_19; // 0xF0
	::UnityEngine::UI::Button* Field_2_20; // 0xF8
	::System::Int32 Field_2_21; // 0x100
	::RPG::GameCore::FeverTimePeriodType Field_2_22; // 0x104
	::RPG::GameCore::FeverTimePeriodType Field_2_23; // 0x108
	::System::Int32 _Index_k__BackingField; // 0x10C
	::System::UInt32 Field_2_25; // 0x110
	::System::UInt32 Field_2_26; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_GET_TRANS_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_20695273B3929D5F(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_20695273B3929D5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DEA1111A4ABC11F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
