#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_690E4A6013F21A80_TweenState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5C7F69784A5C81DE_2;
namespace RPG::Client { class IEvolveBuildFirstStageTutorialUnlockConfig; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class PauseDialogParam; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelEvolveBuildExpStepUp; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_690E4A6013F21A80_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE2AFBD0)
#define CLASS_2_690E4A6013F21A80_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE2AFE90)
#define CLASS_2_690E4A6013F21A80_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xE2ADEC0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xE2AEA30)
#define CLASS_2_690E4A6013F21A80_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xE2ADCC0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_10B331E219B5E345_OFFSET UNITYSDK_OFFSET(0xE2AF0E0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_176EDC9D2FA71031_OFFSET UNITYSDK_OFFSET(0xE2AF4C0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xE2AE840)
#define CLASS_2_690E4A6013F21A80_METHOD_2_41E028BA4D0D3010_OFFSET UNITYSDK_OFFSET(0xE2AEB60)
#define CLASS_2_690E4A6013F21A80_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xE2AE680)
#define CLASS_2_690E4A6013F21A80_METHOD_2_55AE2FF9B0044B45_OFFSET UNITYSDK_OFFSET(0xE2AF140)
#define CLASS_2_690E4A6013F21A80_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xE2AE080)
#define CLASS_2_690E4A6013F21A80_METHOD_2_68ABA56917AE4D6C_OFFSET UNITYSDK_OFFSET(0xE2AED40)
#define CLASS_2_690E4A6013F21A80_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xE2AE700)
#define CLASS_2_690E4A6013F21A80_METHOD_2_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0xE2AE950)
#define CLASS_2_690E4A6013F21A80_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xE2AFA30)
#define CLASS_2_690E4A6013F21A80_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xE2AF910)
#define CLASS_2_690E4A6013F21A80_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xE2AEF60)
#define CLASS_2_690E4A6013F21A80_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xE2AF870)
#define CLASS_2_690E4A6013F21A80_METHOD_2_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0xE2AF020)
#define CLASS_2_690E4A6013F21A80_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xE2AFB20)
#define CLASS_2_690E4A6013F21A80_METHOD_2_F791161BD22F2F17_OFFSET UNITYSDK_OFFSET(0xE2AE8C0)
#define CLASS_2_690E4A6013F21A80__CTOR_OFFSET UNITYSDK_OFFSET(0xE2B0120)
#define CLASS_2_690E4A6013F21A80__ONBIND_OFFSET UNITYSDK_OFFSET(0xE2ADA80)
#define CLASS_2_690E4A6013F21A80__ONTICK_OFFSET UNITYSDK_OFFSET(0xE2AF460)

inline static constexpr unsigned int Class_2_690E4A6013F21A80_TypeDefinitionIndex = 71334;

class Class_2_690E4A6013F21A80 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Int32 BPLEGMOHJIH = 0x14; // 0x0
	// static const ::System::Single HGJHHMAGLNF; // 0x0
	// static const ::System::Single GBNMFDELGBO; // 0x0
	// static const ::System::Single ANOJCNGPPML; // 0x0
	// static const ::System::String* BNFBNJCOBFD; // 0x0
	// static const ::System::String* IGHGLLGNIJC; // 0x0
	// static const ::System::String* NFNJAABAEHD; // 0x0
	// static const ::System::String* CJONLJJPLJM; // 0x0
	// static const ::System::String* JHIBMAFMOMM; // 0x0
	::UnityEngine::UI::Button* KJIOINOOIHP; // 0x60
	::UnityEngine::UI::Text* DCEHJONNOGK; // 0x68
	::UnityEngine::UI::Button* JOODINOFCLL; // 0x70
	::UnityEngine::UI::Image* AOFPONEDOLM; // 0x78
	::UnityEngine::Animation* JHMPBEDMABG; // 0x80
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x88
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x90
	::UnityEngine::UI::Text* BJKLMDEBAGI; // 0x98
	::UnityEngine::UI::SmoothMask* LGJCCLAIGMJ; // 0xA0
	::RPG::Client::PauseDialogParam* IBCKIHMJKEE; // 0xA8
	::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0xB0
	::RPG::Client::MonoInControlTip* NCONEJOIGKD; // 0xB8
	::UnityEngine::Animation* HDLGGCAPHEK; // 0xC0
	::UnityEngine::Transform* EKCKNAKLPBM; // 0xC8
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xD0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0xD8
	::UnityEngine::UI::SmoothMask* PCEMNOEAJFI; // 0xE0
	::System::Boolean HAFCOEMEHNH; // 0xE8
	::System::Single AABPBADFDPF; // 0xEC
	::System::Single FAFIAGJFGEF; // 0xF0
	::UnityEngine::Vector3 KEJCOACDCJD; // 0xF4
	::Class_2_690E4A6013F21A80_TweenState HLOMOIAJNMC; // 0x100
	::System::UInt32 ILADEDOFGDG; // 0x104
	::System::Single BFKCADADNCA; // 0x108
	::System::Single CLEBBBABPEI; // 0x10C
	::System::Single COKCLKLHOOF; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F791161BD22F2F17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_F791161BD22F2F17_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFD66A83AEF40D90(::Class_1_5C7F69784A5C81DE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C7F69784A5C81DE_2*))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_AFD66A83AEF40D90_OFFSET))(this, a1);
	}

	::System::Void Method_2_41E028BA4D0D3010(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_41E028BA4D0D3010_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_F04C04E6DB6D6224()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_F04C04E6DB6D6224_OFFSET))(this);
	}

	::System::Void Method_2_10B331E219B5E345(::RPG::GameCore::LevelEvolveBuildExpStepUp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEvolveBuildExpStepUp*))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_10B331E219B5E345_OFFSET))(this, a1);
	}

	::System::Void Method_2_55AE2FF9B0044B45(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_55AE2FF9B0044B45_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_176EDC9D2FA71031(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_176EDC9D2FA71031_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig* Method_2_68ABA56917AE4D6C()
	{
		return ((::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_68ABA56917AE4D6C_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_690E4A6013F21A80_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
