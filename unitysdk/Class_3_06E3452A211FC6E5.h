#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A2301A8B07519135.h"
#include "unitysdk/Class_3_06E3452A211FC6E5_CenterStyle.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_70697F531F566942_2;
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_06E3452A211FC6E5_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD7C1FD0)
#define CLASS_3_06E3452A211FC6E5_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD7C20A0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_0877861EB9E9853D_OFFSET UNITYSDK_OFFSET(0xD7C0690)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xD7C0500)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_1576E1CE6A5A6899_OFFSET UNITYSDK_OFFSET(0xD7C0260)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xD7C1550)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_21093493642AEBDA_OFFSET UNITYSDK_OFFSET(0xD7C1B10)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_32778CB51FD8356F_OFFSET UNITYSDK_OFFSET(0xD7C17A0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xD7C1C40)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_423F2C2D16F7EB1D_OFFSET UNITYSDK_OFFSET(0xD7C0D20)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_4FAD79B7D1A7BE78_OFFSET UNITYSDK_OFFSET(0xD7C22D0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD7C2270)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0xD7C01B0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0xD7C07F0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7226ABC46FCD5B68_OFFSET UNITYSDK_OFFSET(0xD7C12D0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0xD7C0580)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xD7C1A40)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0xD7C1EC0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0xD7C2210)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xD7C10A0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_A0AF57C3313A46C7_OFFSET UNITYSDK_OFFSET(0xD7C1130)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0xD7C0740)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xD7C1F40)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD7C1D80)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_C91E5170F9E36EED_1_OFFSET UNITYSDK_OFFSET(0xD7C23A0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xD7C2340)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_CBAE9666256B7B09_OFFSET UNITYSDK_OFFSET(0xD7C1B60)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD7C1CB0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xD7BFEA0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_F70045D03F5767B0_OFFSET UNITYSDK_OFFSET(0xD7C0050)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0xD7C15E0)
#define CLASS_3_06E3452A211FC6E5_ONRETURN_OFFSET UNITYSDK_OFFSET(0xD7C0160)
#define CLASS_3_06E3452A211FC6E5__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C2140)
#define CLASS_3_06E3452A211FC6E5__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7BF8B0)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD7C2400)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD7C2460)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0xD7C2330)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7C21B0)

inline static constexpr unsigned int Class_3_06E3452A211FC6E5_TypeDefinitionIndex = 67088;

class Class_3_06E3452A211FC6E5 : public ::Class_2_A2301A8B07519135
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::UnityEngine::Transform* Field_3_7; // 0x68
	::Il2CppArray<::UnityEngine::UI::Text*>* Field_3_8; // 0x70
	::UnityEngine::UI::Text* Field_3_9; // 0x78
	::UnityEngine::Transform* Field_3_10; // 0x80
	::UnityEngine::Animator* Field_3_11; // 0x88
	::UnityEngine::UI::Text* Field_3_12; // 0x90
	::UnityEngine::Transform* Field_3_13; // 0x98
	::UnityEngine::UI::Text* Field_3_14; // 0xA0
	::UnityEngine::UI::Image* Field_3_15; // 0xA8
	::UnityEngine::UI::Image* Field_3_16; // 0xB0
	::UnityEngine::UI::Image* Field_3_17; // 0xB8
	::UnityEngine::UI::Text* Field_3_18; // 0xC0
	::UnityEngine::UI::Text* Field_3_19; // 0xC8
	::UnityEngine::Transform* Field_3_20; // 0xD0
	::UnityEngine::UI::Text* Field_3_21; // 0xD8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterEnergyBarNumColor, ::System::String*>* Field_3_22; // 0xE0
	::UnityEngine::UI::Image* Field_3_23; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_3_24; // 0xF0
	::UnityEngine::Transform* Field_3_25; // 0xF8
	::UnityEngine::UI::Text* Field_3_26; // 0x100
	::RPG::GameCore::FixPoint Field_3_27; // 0x108
	::RPG::GameCore::FixPoint Field_3_28; // 0x110
	::System::Boolean Field_3_29; // 0x118
	::System::Boolean Field_3_30; // 0x119
	::System::Boolean Field_3_31; // 0x11A
	::System::Boolean Field_3_32; // 0x11B
	::RPG::GameCore::FixPoint Field_3_33; // 0x120
	::System::Int32 Field_3_34; // 0x128
	::System::Int32 Field_3_35; // 0x12C
	::RPG::GameCore::EnergyBarState Field_3_36; // 0x130
	::Class_3_06E3452A211FC6E5_CenterStyle Field_3_37; // 0x134
	::RPG::GameCore::FixPoint Field_3_38; // 0x138
	::RPG::GameCore::FixPoint Field_3_39; // 0x140
	::RPG::GameCore::FixPoint Field_3_40; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_F70045D03F5767B0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_F70045D03F5767B0_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_1576E1CE6A5A6899(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_1576E1CE6A5A6899_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_423F2C2D16F7EB1D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_423F2C2D16F7EB1D_OFFSET))(this, a1);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB84CA7105A88F81(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_FB84CA7105A88F81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_32778CB51FD8356F(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_32778CB51FD8356F_OFFSET))(this, a1);
	}

	::System::Void Method_3_21093493642AEBDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_21093493642AEBDA_OFFSET))(this);
	}

	::System::Void Method_3_CBAE9666256B7B09(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_CBAE9666256B7B09_OFFSET))(this, a1);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_7B35E153EF3BACD3(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7B35E153EF3BACD3_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0AF57C3313A46C7(::RPG::GameCore::MonsterEnergyBarNumColor a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarNumColor))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_A0AF57C3313A46C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_7226ABC46FCD5B68(::RPG::GameCore::MonsterEnergyBarCustomColor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarCustomColor*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7226ABC46FCD5B68_OFFSET))(this, a1);
	}

	::System::Void Method_3_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_3_0877861EB9E9853D(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_0877861EB9E9853D_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_3_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_8CD1A6D1096A6CB7(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_4FAD79B7D1A7BE78(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_4FAD79B7D1A7BE78_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void Method_3_C91E5170F9E36EED_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_C91E5170F9E36EED_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
