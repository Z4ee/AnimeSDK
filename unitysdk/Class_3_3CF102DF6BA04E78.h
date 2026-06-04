#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3A9F57F19E68140B.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_274386B6ECA5E606;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB046600)
#define CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB046800)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB045A30)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_28F41EBE92BC4E85_OFFSET UNITYSDK_OFFSET(0xB046F20)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0xB044900)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_1_OFFSET UNITYSDK_OFFSET(0xB046460)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_OFFSET UNITYSDK_OFFSET(0xB0462C0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_2F442C6DFEF84619_OFFSET UNITYSDK_OFFSET(0xB046F10)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xB0464F0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET UNITYSDK_OFFSET(0xB044640)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB046C20)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB046BC0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xB046CC0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xB046D20)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xB046DE0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xB046E40)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xB046EA0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB046B60)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xB045020)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xB045B30)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB0456E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0xB044800)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0xB044A70)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB0457E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0xB045BF0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0xB046350)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C757308D2265670B_OFFSET UNITYSDK_OFFSET(0xB046F00)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xB046D80)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xB046B50)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xB044560)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D9B43E7E6693F63E_OFFSET UNITYSDK_OFFSET(0xB045FC0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB046540)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET UNITYSDK_OFFSET(0xB045AC0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xB045770)
#define CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB044450)
#define CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET UNITYSDK_OFFSET(0xB046A00)
#define CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET UNITYSDK_OFFSET(0xB044180)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB046FC0)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB046FD0)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB046AA0)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB046A40)

inline static constexpr unsigned int Class_3_3CF102DF6BA04E78_TypeDefinitionIndex = 67210;

class Class_3_3CF102DF6BA04E78 : public ::Class_2_3A9F57F19E68140B
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::RPG::GameCore::ModifierBehaviorFlag Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	// static const ::System::String* Field_3_8; // 0x0
	::UnityEngine::UI::Image* Field_3_9; // 0xB0
	::RPG::Client::SPProgress* Field_3_10; // 0xB8
	::UnityEngine::Animation* Field_3_11; // 0xC0
	::UnityEngine::UI::Image* Field_3_12; // 0xC8
	::UnityEngine::UI::Image* Field_3_13; // 0xD0
	::UnityEngine::UI::Image* Field_3_14; // 0xD8
	::UnityEngine::UI::Image* Field_3_15; // 0xE0
	::UnityEngine::Transform* Field_3_16; // 0xE8
	::UnityEngine::UI::SmoothMask* Field_3_17; // 0xF0
	::UnityEngine::Transform* Field_3_18; // 0xF8
	::UnityEngine::UI::Image* Field_3_19; // 0x100
	::UnityEngine::ParticleSystem* Field_3_20; // 0x108
	::Class_1_274386B6ECA5E606* Field_3_21; // 0x110
	::System::Boolean Field_3_22; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_29388402F1C16287(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_29388402F1C16287_OFFSET))(this, a1);
	}

	::System::Void Method_3_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_3_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_F5B4708E7805566C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_3_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_3_D9B43E7E6693F63E(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D9B43E7E6693F63E_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D5FD057B7606DE5(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D5FD057B7606DE5_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_3_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_427D56D899C161B9(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_3_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
	}

	::System::Void Method_3_C757308D2265670B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C757308D2265670B_OFFSET))(this, a1);
	}

	::System::Void Method_3_2F442C6DFEF84619(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_2F442C6DFEF84619_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_28F41EBE92BC4E85()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_28F41EBE92BC4E85_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
