#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_690E4A6013F21A80_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x175E96A0)
#define CLASS_2_690E4A6013F21A80_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x175E9960)
#define CLASS_2_690E4A6013F21A80_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x175E7970)
#define CLASS_2_690E4A6013F21A80_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x175E84F0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x175E7780)
#define CLASS_2_690E4A6013F21A80_METHOD_2_10B331E219B5E345_OFFSET UNITYSDK_OFFSET(0x175E8BA0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_176EDC9D2FA71031_OFFSET UNITYSDK_OFFSET(0x175E8F90)
#define CLASS_2_690E4A6013F21A80_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x175E8300)
#define CLASS_2_690E4A6013F21A80_METHOD_2_41E028BA4D0D3010_OFFSET UNITYSDK_OFFSET(0x175E8620)
#define CLASS_2_690E4A6013F21A80_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x175E8140)
#define CLASS_2_690E4A6013F21A80_METHOD_2_55AE2FF9B0044B45_OFFSET UNITYSDK_OFFSET(0x175E8C00)
#define CLASS_2_690E4A6013F21A80_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x175E7B30)
#define CLASS_2_690E4A6013F21A80_METHOD_2_68ABA56917AE4D6C_OFFSET UNITYSDK_OFFSET(0x175E8800)
#define CLASS_2_690E4A6013F21A80_METHOD_2_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x175E81C0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0x175E8410)
#define CLASS_2_690E4A6013F21A80_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x175E9500)
#define CLASS_2_690E4A6013F21A80_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x175E93E0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x175E8A20)
#define CLASS_2_690E4A6013F21A80_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x175E9340)
#define CLASS_2_690E4A6013F21A80_METHOD_2_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x175E8AE0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x175E95F0)
#define CLASS_2_690E4A6013F21A80_METHOD_2_F791161BD22F2F17_OFFSET UNITYSDK_OFFSET(0x175E8380)
#define CLASS_2_690E4A6013F21A80__CTOR_OFFSET UNITYSDK_OFFSET(0x175E9BE0)
#define CLASS_2_690E4A6013F21A80__ONBIND_OFFSET UNITYSDK_OFFSET(0x175E7540)
#define CLASS_2_690E4A6013F21A80__ONTICK_OFFSET UNITYSDK_OFFSET(0x175E8F30)

inline static constexpr unsigned int Class_2_690E4A6013F21A80_TypeDefinitionIndex = 68155;

class Class_2_690E4A6013F21A80 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x14; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	::UnityEngine::Animation* Field_2_10; // 0x60
	::RPG::Client::RPGAnimationEvent* Field_2_11; // 0x68
	::UnityEngine::UI::SmoothMask* Field_2_12; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_13; // 0x78
	::UnityEngine::Transform* Field_2_14; // 0x80
	::UnityEngine::UI::Text* Field_2_15; // 0x88
	::UnityEngine::UI::Button* Field_2_16; // 0x90
	::UnityEngine::UI::Image* Field_2_17; // 0x98
	::UnityEngine::Animation* Field_2_18; // 0xA0
	::UnityEngine::UI::Button* Field_2_19; // 0xA8
	::RPG::Client::MonoInControlTip* Field_2_20; // 0xB0
	::RPG::GameCore::LevelDataComponent* Field_2_21; // 0xB8
	::UnityEngine::UI::Text* Field_2_22; // 0xC0
	::UnityEngine::UI::SmoothMask* Field_2_23; // 0xC8
	::RPG::Client::PauseDialogParam* Field_2_24; // 0xD0
	::UnityEngine::Animation* Field_2_25; // 0xD8
	::RPG::GameCore::BattleInstance* Field_2_26; // 0xE0
	::System::Single Field_2_27; // 0xE8
	::System::UInt32 Field_2_28; // 0xEC
	::UnityEngine::Vector3 Field_2_29; // 0xF0
	::System::Single Field_2_30; // 0xFC
	::System::Single Field_2_31; // 0x100
	::Class_2_690E4A6013F21A80_TweenState Field_2_32; // 0x104
	::System::Boolean Field_2_33; // 0x108
	::System::Single Field_2_34; // 0x10C
	::System::Single Field_2_35; // 0x110

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
