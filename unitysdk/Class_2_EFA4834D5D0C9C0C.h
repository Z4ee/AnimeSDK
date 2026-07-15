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

#define CLASS_2_EFA4834D5D0C9C0C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15FE0650)
#define CLASS_2_EFA4834D5D0C9C0C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15FE0910)
#define CLASS_2_EFA4834D5D0C9C0C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15FDE1A0)
#define CLASS_2_EFA4834D5D0C9C0C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15FDE1C0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x15FDE840)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_3CAAC043D5E04B4E_OFFSET UNITYSDK_OFFSET(0x15FDF730)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15FDEA80)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x15FDEBF0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x15FE0330)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x15FDF5B0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0x15FE03F0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15FDF430)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15FDF3B0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x15FE0520)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15FDF330)
#define CLASS_2_EFA4834D5D0C9C0C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15FDE1B0)
#define CLASS_2_EFA4834D5D0C9C0C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE0F00)
#define CLASS_2_EFA4834D5D0C9C0C__ONBIND_OFFSET UNITYSDK_OFFSET(0x15FDE200)

inline static constexpr unsigned int Class_2_EFA4834D5D0C9C0C_TypeDefinitionIndex = 68839;

class Class_2_EFA4834D5D0C9C0C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* Field_2_2; // 0x68
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::UnityEngine::UI::Text* Field_2_5; // 0x80
	::System::String* Field_2_6; // 0x88
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* Field_2_7; // 0x90
	::UnityEngine::UI::Text* Field_2_8; // 0x98
	::UnityEngine::UI::Text* Field_2_9; // 0xA0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* Field_2_10; // 0xA8
	::System::String* Field_2_11; // 0xB0
	::UnityEngine::UI::Button* Field_2_12; // 0xB8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* Field_2_13; // 0xC0
	::UnityEngine::Transform* Field_2_14; // 0xC8
	::UnityEngine::Transform* Field_2_15; // 0xD0
	::UnityEngine::Animation* Field_2_16; // 0xD8
	::System::String* Field_2_17; // 0xE0
	::UnityEngine::Transform* Field_2_18; // 0xE8
	::RPG::Client::StoryFeverPileToast* Field_2_19; // 0xF0
	::UnityEngine::UI::Button* Field_2_20; // 0xF8
	::System::Int32 Field_2_21; // 0x100
	::RPG::GameCore::FeverTimePeriodType Field_2_22; // 0x104
	::System::UInt32 Field_2_23; // 0x108
	::System::Int32 _Index_k__BackingField; // 0x10C
	::System::UInt32 Field_2_25; // 0x110
	::RPG::GameCore::FeverTimePeriodType Field_2_26; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_GET_TRANS_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CAAC043D5E04B4E(::RPG::GameCore::FeverTimeInfoChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimeInfoChangeParam*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_3CAAC043D5E04B4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFA4834D5D0C9C0C_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
