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

#define CLASS_2_E8A526B5D529DBB0_6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1116D620)
#define CLASS_2_E8A526B5D529DBB0_6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1116D890)
#define CLASS_2_E8A526B5D529DBB0_6_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1116AEF0)
#define CLASS_2_E8A526B5D529DBB0_6_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1116AF10)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x1116BEF0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1116BD80)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1116DF60)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x1116DFC0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1116DF00)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x1116D350)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_9FD4568D5B9FCD22_OFFSET UNITYSDK_OFFSET(0x1116CBE0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1116D520)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x1116BBF0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_D8E44F7C510402BB_1_OFFSET UNITYSDK_OFFSET(0x1116CA20)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0x1116C860)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1116C7E0)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1116D410)
#define CLASS_2_E8A526B5D529DBB0_6_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1116C760)
#define CLASS_2_E8A526B5D529DBB0_6_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1116AF00)
#define CLASS_2_E8A526B5D529DBB0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1116DAB0)
#define CLASS_2_E8A526B5D529DBB0_6__ONBIND_OFFSET UNITYSDK_OFFSET(0x1116AF20)
#define CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1116E020)
#define CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1116E080)
#define CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1116DEA0)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_6_TypeDefinitionIndex = 59056;

class Class_2_E8A526B5D529DBB0_6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* Field_2_15; // 0x60
	::UnityEngine::Transform* Field_2_9; // 0x68
	::UnityEngine::Animator* Field_2_4; // 0x70
	::UnityEngine::UI::Button* Field_2_2; // 0x78
	::UnityEngine::UI::Text* Field_2_5; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* Field_2_14; // 0x88
	::RPG::Client::StoryFeverPileToast* Field_2_10; // 0x90
	::UnityEngine::UI::Button* Field_2_3; // 0x98
	::UnityEngine::UI::Text* Field_2_13; // 0xA0
	::UnityEngine::Transform* Field_2_11; // 0xA8
	::UnityEngine::Animation* Field_2_8; // 0xB0
	::UnityEngine::Transform* Field_2_6; // 0xB8
	::UnityEngine::Transform* Field_2_7; // 0xC0
	::RPG::GameCore::LevelUIComponent* Field_2_26; // 0xC8
	::System::String* Field_2_21; // 0xD0
	::UnityEngine::UI::Text* Field_2_12; // 0xD8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* Field_2_16; // 0xE0
	::System::String* Field_2_24; // 0xE8
	::System::String* Field_2_25; // 0xF0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* Field_2_17; // 0xF8
	::RPG::GameCore::FeverTimePeriodType Field_2_23; // 0x100
	::System::UInt32 Field_2_20; // 0x104
	::System::Int32 Field_2_18; // 0x108
	::RPG::GameCore::FeverTimePeriodType Field_2_22; // 0x10C
	::System::UInt32 Field_2_19; // 0x110
	::System::Int32 _Index_k__BackingField; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_GET_TRANS_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_D8E44F7C510402BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9FD4568D5B9FCD22(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_9FD4568D5B9FCD22_OFFSET))(this, a1);
	}

	::System::Void Method_2_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
