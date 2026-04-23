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

#define CLASS_2_434D09EE8A1FE6FE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9E5A7F0)
#define CLASS_2_434D09EE8A1FE6FE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9E5AA60)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x9E59C20)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x9E59720)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_09CD6CE8D5445621_OFFSET UNITYSDK_OFFSET(0x9E59CE0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9E59530)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x9E59300)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_41E028BA4D0D3010_OFFSET UNITYSDK_OFFSET(0x9E59850)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9E58920)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9E5ADD0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9E5AE30)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9E5AD70)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x9E59640)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x9E58CA0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_9ACA15A5DE5A3B88_OFFSET UNITYSDK_OFFSET(0x9E599E0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_9B97A7966B23A4A7_OFFSET UNITYSDK_OFFSET(0x9E5A130)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x9E5A770)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x9E59200)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x9E59B70)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x9E5A4E0)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x9E58B10)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x9E5A580)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x9E5A680)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x9E59D40)
#define CLASS_2_434D09EE8A1FE6FE_METHOD_2_F791161BD22F2F17_OFFSET UNITYSDK_OFFSET(0x9E595B0)
#define CLASS_2_434D09EE8A1FE6FE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5AC90)
#define CLASS_2_434D09EE8A1FE6FE__ONBIND_OFFSET UNITYSDK_OFFSET(0x9E586E0)
#define CLASS_2_434D09EE8A1FE6FE__ONTICK_OFFSET UNITYSDK_OFFSET(0x9E5A0D0)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9E5AF00)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9E5AF60)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9E5AD10)
#define CLASS_2_434D09EE8A1FE6FE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9E5AE90)

inline static constexpr unsigned int Class_2_434D09EE8A1FE6FE_TypeDefinitionIndex = 65784;

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
	::UnityEngine::UI::Text* Field_2_13; // 0x60
	::UnityEngine::Animation* Field_2_11; // 0x68
	::UnityEngine::UI::Image* Field_2_14; // 0x70
	::UnityEngine::UI::SmoothMask* Field_2_2; // 0x78
	::RPG::Client::PauseDialogParam* Field_2_28; // 0x80
	::RPG::GameCore::BattleInstance* Field_2_27; // 0x88
	::UnityEngine::Transform* Field_2_8; // 0x90
	::UnityEngine::UI::Button* Field_2_6; // 0x98
	::UnityEngine::Animation* Field_2_9; // 0xA0
	::UnityEngine::UI::SmoothMask* Field_2_3; // 0xA8
	::UnityEngine::Animation* Field_2_10; // 0xB0
	::RPG::Client::RPGAnimationEvent* Field_2_12; // 0xB8
	::RPG::GameCore::LevelUIComponent* Field_2_20; // 0xC0
	::RPG::GameCore::LevelDataComponent* Field_2_21; // 0xC8
	::UnityEngine::UI::Button* Field_2_5; // 0xD0
	::RPG::Client::MonoInControlTip* Field_2_7; // 0xD8
	::UnityEngine::UI::Text* Field_2_4; // 0xE0
	::System::Single Field_2_23; // 0xE8
	::System::UInt32 Field_2_35; // 0xEC
	::System::Boolean Field_2_15; // 0xF0
	::System::Single Field_2_22; // 0xF4
	::UnityEngine::Vector3 Field_2_25; // 0xF8
	::System::Single Field_2_24; // 0x104
	::System::Single Field_2_16; // 0x108
	::Class_2_434D09EE8A1FE6FE_TweenState Field_2_34; // 0x10C
	::System::Single Field_2_26; // 0x110

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

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F791161BD22F2F17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_F791161BD22F2F17_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_5C7F69784A5C81DE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C7F69784A5C81DE_2*))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
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

	::System::Void Method_2_9B97A7966B23A4A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_9B97A7966B23A4A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_2_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_434D09EE8A1FE6FE_METHOD_2_2898E3EC91BCF259_OFFSET))(this, a1);
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
