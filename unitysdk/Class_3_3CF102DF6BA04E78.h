#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B5BA3CE80BA25EAD.h"

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

#define CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8B7E120)
#define CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8B7E310)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_043AEF5D7DD905FE_OFFSET UNITYSDK_OFFSET(0x8B7C760)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8B7D670)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET UNITYSDK_OFFSET(0x8B7C4A0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x8B7D390)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_56D94D9D664B28E2_1_OFFSET UNITYSDK_OFFSET(0x8B7DE90)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_56D94D9D664B28E2_OFFSET UNITYSDK_OFFSET(0x8B7DCD0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8B7E6E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x8B7E740)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x8B7E840)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x8B7E8A0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x8B7E970)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x8B7E9D0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_7_OFFSET UNITYSDK_OFFSET(0x8B7EA30)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8B7E660)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x8B7C8F0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_60A81375BC564D2B_OFFSET UNITYSDK_OFFSET(0x8B7EA90)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8B7D780)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x8B7CD30)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_A3454FA71C3DE239_OFFSET UNITYSDK_OFFSET(0x8B7EAA0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x8B7C660)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x8B7D490)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x8B7E7A0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x8B7DD80)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x8B7D810)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x8B7DF40)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x8B7E900)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_D9B43E7E6693F63E_OFFSET UNITYSDK_OFFSET(0x8B7DA60)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x8B7C310)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x8B7E030)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET UNITYSDK_OFFSET(0x8B7D710)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x8B7D420)
#define CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET UNITYSDK_OFFSET(0x8B7C200)
#define CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET UNITYSDK_OFFSET(0x8B7E500)
#define CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET UNITYSDK_OFFSET(0x8B7BB90)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8B7EAB0)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8B7EAC0)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x8B7E5A0)
#define CLASS_3_3CF102DF6BA04E78___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8B7E540)

inline static constexpr unsigned int Class_3_3CF102DF6BA04E78_TypeDefinitionIndex = 58904;

class Class_3_3CF102DF6BA04E78 : public ::Class_2_B5BA3CE80BA25EAD
{
public:
	// static const ::System::String* Field_3_13; // 0x0
	// static const ::System::String* Field_3_15; // 0x0
	// static const ::System::String* Field_3_16; // 0x0
	// static const ::System::String* Field_3_17; // 0x0
	// static const ::System::String* Field_3_18; // 0x0
	// static const ::System::String* Field_3_19; // 0x0
	// static const ::System::String* Field_3_20; // 0x0
	// static const ::System::String* Field_3_21; // 0x0
	// static const ::System::String* Field_3_22; // 0x0
	::UnityEngine::UI::Image* Field_3_5; // 0xB0
	::UnityEngine::Animation* Field_3_3; // 0xB8
	::UnityEngine::UI::Image* Field_3_4; // 0xC0
	::UnityEngine::UI::SmoothMask* Field_3_10; // 0xC8
	::Class_1_23621931BDBFAF77* Field_3_0; // 0xD0
	::UnityEngine::Transform* Field_3_12; // 0xD8
	::UnityEngine::UI::Image* Field_3_9; // 0xE0
	::RPG::Client::SPProgress* Field_3_1; // 0xE8
	::UnityEngine::UI::Image* Field_3_7; // 0xF0
	::UnityEngine::UI::Image* Field_3_6; // 0xF8
	::UnityEngine::UI::Image* Field_3_2; // 0x100
	::UnityEngine::ParticleSystem* Field_3_8; // 0x108
	::UnityEngine::Transform* Field_3_11; // 0x110
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

	::System::Void Method_3_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_3_043AEF5D7DD905FE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_043AEF5D7DD905FE_OFFSET))(this, a1);
	}

	::System::Void Method_3_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_3_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_3_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_51BBA01F511E6107_OFFSET))(this);
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

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C83B2479936B63C3_OFFSET))(this);
	}

	::System::Void Method_3_D9B43E7E6693F63E(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D9B43E7E6693F63E_OFFSET))(this, a1);
	}

	::System::Void Method_3_56D94D9D664B28E2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_56D94D9D664B28E2_OFFSET))(this, a1);
	}

	::System::Void Method_3_56D94D9D664B28E2_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_56D94D9D664B28E2_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D240830C442C70A4_OFFSET))(this);
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

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_3_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void Method_3_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5790A55946AA509D_7_OFFSET))(this);
	}

	::System::Void Method_3_60A81375BC564D2B(::RPG::GameCore::TurnBasedModifierInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_60A81375BC564D2B_OFFSET))(this, P0);
	}

	::System::Void Method_3_A3454FA71C3DE239(::RPG::GameCore::TurnBasedModifierInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_A3454FA71C3DE239_OFFSET))(this, P0);
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
