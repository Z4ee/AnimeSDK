#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_434D09EE8A1FE6FE_TweenState.h"
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

#define CLASS_2_434D09EE8A1FE6FE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA44DDB0)
#define CLASS_2_434D09EE8A1FE6FE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA44E050)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xA44D200)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xA44CCF0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_09CD6CE8D5445621_OFFSET UNITYSDK_OFFSET(0xA44D2C0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA44CB00)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xA44C840)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_41E028BA4D0D3010_OFFSET UNITYSDK_OFFSET(0xA44CE20)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA44BFA0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0xA44C910)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0xA44D700)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA44E3E0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA44E440)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA44E380)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_9ACA15A5DE5A3B88_OFFSET UNITYSDK_OFFSET(0xA44CFB0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA44DD30)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0xA44CC10)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xA44C310)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xA44D140)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xA44DAA0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0xA44C180)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xA44DB40)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xA44DC40)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA44D320)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F791161BD22F2F17_OFFSET UNITYSDK_OFFSET(0xA44CB80)
#define CLASS_2_434D09EE8A1FE6FE__CTOR_OFFSET UNITYSDK_OFFSET(0xA44E2A0)
#define CLASS_2_434D09EE8A1FE6FE__ONBIND_OFFSET UNITYSDK_OFFSET(0xA44B900)
#define CLASS_2_434D09EE8A1FE6FE__ONTICK_OFFSET UNITYSDK_OFFSET(0xA44D6A0)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA44E510)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA44E570)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA44E320)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA44E4A0)

inline static constexpr unsigned int Class_2_434D09EE8A1FE6FE_TypeDefinitionIndex = 58490;

class Class_2_434D09EE8A1FE6FE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x14; // 0x0
	// static const ::System::Single Field_2_17; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	// static const ::System::Single Field_2_19; // 0x0
	// static const ::System::String* Field_2_29; // 0x0
	// static const ::System::String* Field_2_30; // 0x0
	// static const ::System::String* Field_2_31; // 0x0
	// static const ::System::String* Field_2_32; // 0x0
	// static const ::System::String* Field_2_33; // 0x0
	::UnityEngine::Animation* Field_2_9; // 0x60
	::UnityEngine::Animation* Field_2_11; // 0x68
	::UnityEngine::UI::Text* Field_2_13; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_20; // 0x78
	::UnityEngine::UI::SmoothMask* Field_2_2; // 0x80
	::UnityEngine::UI::Button* Field_2_6; // 0x88
	::RPG::GameCore::LevelDataComponent* Field_2_21; // 0x90
	::UnityEngine::Animation* Field_2_10; // 0x98
	::UnityEngine::UI::SmoothMask* Field_2_3; // 0xA0
	::RPG::Client::PauseDialogParam* Field_2_28; // 0xA8
	::RPG::GameCore::BattleInstance* Field_2_27; // 0xB0
	::RPG::Client::MonoInControlTip* Field_2_7; // 0xB8
	::UnityEngine::UI::Text* Field_2_4; // 0xC0
	::UnityEngine::UI::Button* Field_2_5; // 0xC8
	::UnityEngine::Transform* Field_2_8; // 0xD0
	::UnityEngine::UI::Image* Field_2_14; // 0xD8
	::RPG::Client::RPGAnimationEvent* Field_2_12; // 0xE0
	::UnityEngine::Vector3 Field_2_25; // 0xE8
	::System::Single Field_2_24; // 0xF4
	::System::Single Field_2_23; // 0xF8
	::System::UInt32 Field_2_35; // 0xFC
	::System::Boolean Field_2_15; // 0x100
	::Class_2_434D09EE8A1FE6FE_TweenState Field_2_34; // 0x104
	::System::Single Field_2_16; // 0x108
	::System::Single Field_2_26; // 0x10C
	::System::Single Field_2_22; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F791161BD22F2F17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F791161BD22F2F17_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFD66A83AEF40D90(::Class_1_5C7F69784A5C81DE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C7F69784A5C81DE_2*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_AFD66A83AEF40D90_OFFSET))(this, a1);
	}

	::System::Void Method_2_41E028BA4D0D3010(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_41E028BA4D0D3010_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_09CD6CE8D5445621(::RPG::GameCore::LevelEvolveBuildExpStepUp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEvolveBuildExpStepUp*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_09CD6CE8D5445621_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_515AB539783606E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_515AB539783606E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig* Method_2_9ACA15A5DE5A3B88()
	{
		return ((::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_9ACA15A5DE5A3B88_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
