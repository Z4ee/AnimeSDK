#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_3_9C3C83892C6E19EC_Mode.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_503F91D5A9A9E6E5_1;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_44580E953508036F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB024A0)
#define CLASS_2_44580E953508036F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAB02570)
#define CLASS_2_44580E953508036F_METHOD_2_300DFD4123676691_OFFSET UNITYSDK_OFFSET(0xAB02280)
#define CLASS_2_44580E953508036F_METHOD_2_376E493B62EC0CAE_OFFSET UNITYSDK_OFFSET(0xAB017B0)
#define CLASS_2_44580E953508036F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAB01DF0)
#define CLASS_2_44580E953508036F_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xAB00840)
#define CLASS_2_44580E953508036F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAB027C0)
#define CLASS_2_44580E953508036F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB026A0)
#define CLASS_2_44580E953508036F_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xAB02820)
#define CLASS_2_44580E953508036F_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0xAB01210)
#define CLASS_2_44580E953508036F_METHOD_2_6612072A232BE51E_OFFSET UNITYSDK_OFFSET(0xAB01970)
#define CLASS_2_44580E953508036F_METHOD_2_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0xAB02320)
#define CLASS_2_44580E953508036F_METHOD_2_A218F606F09DB78C_OFFSET UNITYSDK_OFFSET(0xAB01FE0)
#define CLASS_2_44580E953508036F_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xAB01F60)
#define CLASS_2_44580E953508036F_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0xAB00BA0)
#define CLASS_2_44580E953508036F_METHOD_2_B435928465FCA059_OFFSET UNITYSDK_OFFSET(0xAB00AB0)
#define CLASS_2_44580E953508036F_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xAB00A40)
#define CLASS_2_44580E953508036F_METHOD_2_C20A8E714F76AB3E_OFFSET UNITYSDK_OFFSET(0xAB00C10)
#define CLASS_2_44580E953508036F_METHOD_2_C47A6EBDAFAB8B19_OFFSET UNITYSDK_OFFSET(0xAB01F00)
#define CLASS_2_44580E953508036F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB00700)
#define CLASS_2_44580E953508036F_METHOD_2_E0ACEB52BB92B9CC_OFFSET UNITYSDK_OFFSET(0xAB01B30)
#define CLASS_2_44580E953508036F_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xAB01660)
#define CLASS_2_44580E953508036F_METHOD_2_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0xAB00EC0)
#define CLASS_2_44580E953508036F_METHOD_2_EB35513948B480FA_OFFSET UNITYSDK_OFFSET(0xAB01890)
#define CLASS_2_44580E953508036F_METHOD_2_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xAB01EA0)
#define CLASS_2_44580E953508036F_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xAB023E0)
#define CLASS_2_44580E953508036F_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xAB008D0)
#define CLASS_2_44580E953508036F__CTOR_OFFSET UNITYSDK_OFFSET(0xAB02610)
#define CLASS_2_44580E953508036F__ONBIND_OFFSET UNITYSDK_OFFSET(0xAAFF600)
#define CLASS_2_44580E953508036F__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAB00740)
#define CLASS_2_44580E953508036F__ONTICK_OFFSET UNITYSDK_OFFSET(0xAB00790)
#define CLASS_2_44580E953508036F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAB02880)
#define CLASS_2_44580E953508036F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAB028E0)
#define CLASS_2_44580E953508036F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB02640)
#define CLASS_2_44580E953508036F___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xAB02700)
#define CLASS_2_44580E953508036F___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xAB02760)

inline static constexpr unsigned int Class_2_44580E953508036F_TypeDefinitionIndex = 66612;

class Class_2_44580E953508036F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::UnityEngine::Transform* Field_2_5; // 0x78
	::UnityEngine::Transform* Field_2_6; // 0x80
	::UnityEngine::Transform* Field_2_7; // 0x88
	::RPG::GameCore::GameEntity* Field_2_8; // 0x90
	::System::String* Field_2_9; // 0x98
	::UnityEngine::UI::Image* Field_2_10; // 0xA0
	::UnityEngine::Transform* Field_2_11; // 0xA8
	::UnityEngine::Transform* Field_2_12; // 0xB0
	::UnityEngine::CanvasGroup* Field_2_13; // 0xB8
	::UnityEngine::Transform* Field_2_14; // 0xC0
	::UnityEngine::Transform* Field_2_15; // 0xC8
	::UnityEngine::Transform* Field_2_16; // 0xD0
	::UnityEngine::Animation* Field_2_17; // 0xD8
	::UnityEngine::CanvasGroup* Field_2_18; // 0xE0
	::UnityEngine::Transform* Field_2_19; // 0xE8
	::UnityEngine::RectTransform* Field_2_20; // 0xF0
	::UnityEngine::Transform* Field_2_21; // 0xF8
	::UnityEngine::RectTransform* Field_2_22; // 0x100
	::UnityEngine::Transform* Field_2_23; // 0x108
	::UnityEngine::Transform* Field_2_24; // 0x110
	::UnityEngine::Transform* Field_2_25; // 0x118
	::UnityEngine::UI::Image* Field_2_26; // 0x120
	::UnityEngine::Transform* Field_2_27; // 0x128
	::UnityEngine::Transform* Field_2_28; // 0x130
	::UnityEngine::Transform* Field_2_29; // 0x138
	::UnityEngine::Transform* Field_2_30; // 0x140
	::RPG::GameCore::CharacterDataComponent* Field_2_31; // 0x148
	::UnityEngine::Transform* Field_2_32; // 0x150
	::UnityEngine::Transform* Field_2_33; // 0x158
	::UnityEngine::Transform* Field_2_34; // 0x160
	::UnityEngine::Transform* Field_2_35; // 0x168
	::UnityEngine::CanvasGroup* Field_2_36; // 0x170
	::UnityEngine::Transform* Field_2_37; // 0x178
	::UnityEngine::Transform* Field_2_38; // 0x180
	::UnityEngine::Transform* Field_2_39; // 0x188
	::UnityEngine::Transform* Field_2_40; // 0x190
	::UnityEngine::Transform* Field_2_41; // 0x198
	::UnityEngine::Transform* Field_2_42; // 0x1A0
	::UnityEngine::Transform* Field_2_43; // 0x1A8
	::UnityEngine::Transform* Field_2_44; // 0x1B0
	::UnityEngine::UI::Image* Field_2_45; // 0x1B8
	::RPG::GameCore::BattleLineupData* Field_2_46; // 0x1C0
	::UnityEngine::CanvasGroup* Field_2_47; // 0x1C8
	::UnityEngine::Transform* Field_2_48; // 0x1D0
	::UnityEngine::Transform* Field_2_49; // 0x1D8
	::UnityEngine::Transform* Field_2_50; // 0x1E0
	::UnityEngine::Transform* Field_2_51; // 0x1E8
	::UnityEngine::Transform* Field_2_52; // 0x1F0
	::Class_3_9C3C83892C6E19EC_Mode Field_2_53; // 0x1F8
	::System::Single Field_2_54; // 0x1FC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_B435928465FCA059(::RPG::GameCore::GameEntity* a1, ::Class_3_9C3C83892C6E19EC_Mode a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_3_9C3C83892C6E19EC_Mode))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_B435928465FCA059_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_376E493B62EC0CAE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_376E493B62EC0CAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB35513948B480FA(::Class_3_9C3C83892C6E19EC_Mode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9C3C83892C6E19EC_Mode))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_EB35513948B480FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_6612072A232BE51E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_6612072A232BE51E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_E0ACEB52BB92B9CC()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_E0ACEB52BB92B9CC_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_C47A6EBDAFAB8B19(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_C47A6EBDAFAB8B19_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_C20A8E714F76AB3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_C20A8E714F76AB3E_OFFSET))(this);
	}

	::System::Void Method_2_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_A218F606F09DB78C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_A218F606F09DB78C_OFFSET))(this);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_300DFD4123676691(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_300DFD4123676691_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_722E1524F560C8AF(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_722E1524F560C8AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
