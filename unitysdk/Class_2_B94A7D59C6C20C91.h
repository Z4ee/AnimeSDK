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
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B94A7D59C6C20C91_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1874D440)
#define CLASS_2_B94A7D59C6C20C91_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1874D680)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1874BDB0)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1874C0A0)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x1874C210)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_AFAC481DD0C65A52_OFFSET UNITYSDK_OFFSET(0x1874C800)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x1874D1D0)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0x1874D350)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1874D050)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1874CFD0)
#define CLASS_2_B94A7D59C6C20C91_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1874CF50)
#define CLASS_2_B94A7D59C6C20C91__CTOR_OFFSET UNITYSDK_OFFSET(0x1874D880)
#define CLASS_2_B94A7D59C6C20C91__ONBIND_OFFSET UNITYSDK_OFFSET(0x1874B440)

inline static constexpr unsigned int Class_2_B94A7D59C6C20C91_TypeDefinitionIndex = 72030;

class Class_2_B94A7D59C6C20C91 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x60
	::UnityEngine::UI::Button* NNKMCKBIKEI; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* FGPACFGPMIF; // 0x70
	::UnityEngine::Animator* KMDJLABGAIL; // 0x78
	::UnityEngine::UI::Text* KHEKAEPGEFJ; // 0x80
	::UnityEngine::UI::Button* KHPBNLJHDNN; // 0x88
	::UnityEngine::UI::Text* CDDKKEHPBAO; // 0x90
	::UnityEngine::Transform* KCBNCGDICGN; // 0x98
	::UnityEngine::UI::Text* ACPBNFHIHID; // 0xA0
	::UnityEngine::Transform* MCNEMMCFEIK; // 0xA8
	::UnityEngine::Animation* LJDAFFMNCBH; // 0xB0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* HCJAHGMOGPH; // 0xB8
	::System::String* IECFNAFDEGN; // 0xC0
	::System::String* PABPGCLAAMF; // 0xC8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* JPNMJNMNJEB; // 0xD0
	::RPG::Client::ActivityFeverTimePileToast* LNNOLHNKOJJ; // 0xD8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* FBJDADLJKBK; // 0xE0
	::UnityEngine::UI::Button* PEBNIHKBICH; // 0xE8
	::UnityEngine::Transform* OCFPCNALDKP; // 0xF0
	::UnityEngine::UI::Button* LMBPJMHGLBE; // 0xF8
	::System::UInt32 LKGLNFBMHOG; // 0x100
	::System::Boolean IDBEBIDMHME; // 0x104
	::RPG::GameCore::FeverTimePeriodType DAEKEPDOFOG; // 0x108
	::System::UInt32 JGBABANKIKL; // 0x10C
	::System::Int32 MBIKNBEBMCH; // 0x110

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

	::System::Void Method_2_C450A961450309C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_METHOD_2_C450A961450309C9_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B94A7D59C6C20C91_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
