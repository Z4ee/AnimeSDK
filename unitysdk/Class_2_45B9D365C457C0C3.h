#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_45B9D365C457C0C3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF66340)
#define CLASS_2_45B9D365C457C0C3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF66580)
#define CLASS_2_45B9D365C457C0C3_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBF64420)
#define CLASS_2_45B9D365C457C0C3_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBF64440)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xBF64480)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0xBF648F0)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBF64780)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_A326E095B256A133_OFFSET UNITYSDK_OFFSET(0xBF65A10)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xBF65890)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0xBF66250)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBF65710)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xBF65690)
#define CLASS_2_45B9D365C457C0C3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBF65610)
#define CLASS_2_45B9D365C457C0C3_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBF64430)
#define CLASS_2_45B9D365C457C0C3__CTOR_OFFSET UNITYSDK_OFFSET(0xBF66780)
#define CLASS_2_45B9D365C457C0C3__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF639E0)

inline static constexpr unsigned int Class_2_45B9D365C457C0C3_TypeDefinitionIndex = 71338;

class Class_2_45B9D365C457C0C3 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::UI::Image* JHHAHIDEMHG; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* HCJAHGMOGPH; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* FBJDADLJKBK; // 0x70
	::UnityEngine::UI::Text* KHEKAEPGEFJ; // 0x78
	::UnityEngine::Animator* KMDJLABGAIL; // 0x80
	::UnityEngine::UI::Button* LMBPJMHGLBE; // 0x88
	::UnityEngine::UI::Text* CDDKKEHPBAO; // 0x90
	::UnityEngine::UI::Text* ACPBNFHIHID; // 0x98
	::UnityEngine::Transform* OCFPCNALDKP; // 0xA0
	::UnityEngine::Animation* JOCOCFOPFBI; // 0xA8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* FGPACFGPMIF; // 0xB0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* JPNMJNMNJEB; // 0xB8
	::UnityEngine::Animation* MKGKFMNCCLH; // 0xC0
	::UnityEngine::Animation* LJDAFFMNCBH; // 0xC8
	::UnityEngine::Transform* MCNEMMCFEIK; // 0xD0
	::UnityEngine::UI::Image* LFOCDPEMLOH; // 0xD8
	::UnityEngine::UI::Button* KHPBNLJHDNN; // 0xE0
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xE8
	::UnityEngine::UI::Button* PEBNIHKBICH; // 0xF0
	::UnityEngine::Transform* KCBNCGDICGN; // 0xF8
	::RPG::Client::ActivityFeverTimePileToast* LNNOLHNKOJJ; // 0x100
	::UnityEngine::Animation* COJLBDCOEIG; // 0x108
	::System::String* PABPGCLAAMF; // 0x110
	::System::String* IECFNAFDEGN; // 0x118
	::UnityEngine::UI::Image* ODLNIKEKHHB; // 0x120
	::UnityEngine::UI::Button* NNKMCKBIKEI; // 0x128
	::RPG::GameCore::FeverTimePeriodType DAEKEPDOFOG; // 0x130
	::System::Int32 _Index_k__BackingField; // 0x134
	::System::Int32 MBIKNBEBMCH; // 0x138
	::System::UInt32 JGBABANKIKL; // 0x13C
	::System::UInt32 LKGLNFBMHOG; // 0x140

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

	::System::Void Method_2_C450A961450309C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_METHOD_2_C450A961450309C9_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45B9D365C457C0C3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
