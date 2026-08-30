#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_EFA4834D5D0C9C0C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A818870)
#define CLASS_2_EFA4834D5D0C9C0C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A818B30)
#define CLASS_2_EFA4834D5D0C9C0C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A8163C0)
#define CLASS_2_EFA4834D5D0C9C0C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1A8163E0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x1A816A60)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_3CAAC043D5E04B4E_OFFSET UNITYSDK_OFFSET(0x1A817950)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1A816CA0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x1A816E10)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x1A818550)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x1A8177D0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0x1A818610)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1A817650)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1A8175D0)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1A818740)
#define CLASS_2_EFA4834D5D0C9C0C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1A817550)
#define CLASS_2_EFA4834D5D0C9C0C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A8163D0)
#define CLASS_2_EFA4834D5D0C9C0C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A819120)
#define CLASS_2_EFA4834D5D0C9C0C__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A816420)

inline static constexpr unsigned int Class_2_EFA4834D5D0C9C0C_TypeDefinitionIndex = 72037;

class Class_2_EFA4834D5D0C9C0C : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::UI::Text* CDDKKEHPBAO; // 0x60
	::System::String* KIKBMCDIJJD; // 0x68
	::System::String* PABPGCLAAMF; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Transform*>* FBJDADLJKBK; // 0x78
	::UnityEngine::UI::Text* ACPBNFHIHID; // 0x80
	::UnityEngine::Transform* PLNEDDNHEPC; // 0x88
	::UnityEngine::UI::Text* KHEKAEPGEFJ; // 0x90
	::UnityEngine::Animator* KMDJLABGAIL; // 0x98
	::UnityEngine::UI::Button* PEBNIHKBICH; // 0xA0
	::UnityEngine::Transform* CPGEABJPLMB; // 0xA8
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xB0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::RPG::Client::ProgressBar*>* FGPACFGPMIF; // 0xB8
	::UnityEngine::Transform* OCFPCNALDKP; // 0xC0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::Animation*>* HCJAHGMOGPH; // 0xC8
	::RPG::Client::StoryFeverPileToast* NPAFJPLHKDM; // 0xD0
	::System::String* IECFNAFDEGN; // 0xD8
	::UnityEngine::Animation* LJDAFFMNCBH; // 0xE0
	::UnityEngine::UI::Button* LMBPJMHGLBE; // 0xE8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FeverTimePeriodType, ::UnityEngine::UI::SmoothMask*>* JPNMJNMNJEB; // 0xF0
	::UnityEngine::Transform* MCNEMMCFEIK; // 0xF8
	::System::UInt32 LKGLNFBMHOG; // 0x100
	::RPG::GameCore::FeverTimePeriodType DAEKEPDOFOG; // 0x104
	::System::Int32 _Index_k__BackingField; // 0x108
	::System::UInt32 JGBABANKIKL; // 0x10C
	::System::Int32 MDLFDFILLJP; // 0x110
	::RPG::GameCore::FeverTimePeriodType AOMDAKBACJL; // 0x114

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
