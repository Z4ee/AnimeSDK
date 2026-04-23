#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D36C5AC24693DA07_1.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_23621931BDBFAF77;
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

#define CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12846180)
#define CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12846360)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x12845790)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_28F41EBE92BC4E85_OFFSET UNITYSDK_OFFSET(0x12846A80)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0x12844880)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x12846040)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET UNITYSDK_OFFSET(0x128445C0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12846770)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12846710)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x12846810)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x12846870)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x12846940)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x128469A0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x12846A00)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x128466B0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x128449F0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_60A81375BC564D2B_OFFSET UNITYSDK_OFFSET(0x12846A60)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x12845890)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x128454B0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x12844E50)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_A3454FA71C3DE239_OFFSET UNITYSDK_OFFSET(0x12846A70)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x12844780)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_AC93EA9EB530001C_1_OFFSET UNITYSDK_OFFSET(0x12845FB0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_AC93EA9EB530001C_OFFSET UNITYSDK_OFFSET(0x12845E10)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x128455B0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x12845EA0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x12845950)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x128466A0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x128444E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x128468D0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D9B43E7E6693F63E_OFFSET UNITYSDK_OFFSET(0x12845BA0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x12846090)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET UNITYSDK_OFFSET(0x12845820)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x12845540)
#define CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET UNITYSDK_OFFSET(0x128443D0)
#define CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET UNITYSDK_OFFSET(0x12846540)
#define CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET UNITYSDK_OFFSET(0x12844100)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12846B30)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12846B40)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x128465E0)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12846580)

inline static constexpr unsigned int Class_3_3CF102DF6BA04E78_TypeDefinitionIndex = 66271;

class Class_3_3CF102DF6BA04E78 : public ::Class_2_D36C5AC24693DA07_1
{
public:
	// static const ::System::String* Field_3_13; // 0x0
	// static const ::System::String* Field_3_15; // 0x0
	// static const ::System::String* Field_3_16; // 0x0
	// static const ::System::String* Field_3_17; // 0x0
	// static const ::System::String* Field_3_18; // 0x0
	// static const ::RPG::GameCore::ModifierBehaviorFlag Field_3_19; // 0x0
	// static const ::System::String* Field_3_20; // 0x0
	// static const ::System::String* Field_3_21; // 0x0
	// static const ::System::String* Field_3_22; // 0x0
	::UnityEngine::UI::Image* Field_3_5; // 0xB0
	::Class_1_23621931BDBFAF77* Field_3_0; // 0xB8
	::UnityEngine::UI::Image* Field_3_2; // 0xC0
	::UnityEngine::Animation* Field_3_3; // 0xC8
	::UnityEngine::UI::Image* Field_3_6; // 0xD0
	::UnityEngine::Transform* Field_3_11; // 0xD8
	::UnityEngine::UI::SmoothMask* Field_3_10; // 0xE0
	::UnityEngine::Transform* Field_3_12; // 0xE8
	::UnityEngine::UI::Image* Field_3_7; // 0xF0
	::UnityEngine::ParticleSystem* Field_3_8; // 0xF8
	::UnityEngine::UI::Image* Field_3_9; // 0x100
	::UnityEngine::UI::Image* Field_3_4; // 0x108
	::RPG::Client::SPProgress* Field_3_1; // 0x110
	::System::Boolean Field_3_14; // 0x118

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

	::System::Void Method_3_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_3_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_96A53A17AC5D0E93_OFFSET))(this);
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

	::System::Void Method_3_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C83B2479936B63C3_OFFSET))(this);
	}

	::System::Void Method_3_D9B43E7E6693F63E(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D9B43E7E6693F63E_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC93EA9EB530001C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_AC93EA9EB530001C_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC93EA9EB530001C_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_AC93EA9EB530001C_1_OFFSET))(this, a1);
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

	::System::Void Method_3_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D5E5EC1B4538DDD1_OFFSET))(this, P0);
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

	::System::Void Method_3_60A81375BC564D2B(::RPG::GameCore::TurnBasedModifierInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_60A81375BC564D2B_OFFSET))(this, P0);
	}

	::System::Void Method_3_A3454FA71C3DE239(::RPG::GameCore::TurnBasedModifierInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_A3454FA71C3DE239_OFFSET))(this, P0);
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
