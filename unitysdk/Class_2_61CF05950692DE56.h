#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_940;
class Class_1_1FD555BBEDA73FC1_1;
class Class_2_5E062D4DB0081790;
class Class_2_60FF22E606B86340;
class Class_2_A67AE8ECEC8D41D2;
class Class_2_B49E223DF80566EF;
class Class_2_E972752B9D4E2012;
namespace RPG::Client { class BattleAvatarCustomData; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_61CF05950692DE56_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x97E3610)
#define CLASS_2_61CF05950692DE56_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x97E3820)
#define CLASS_2_61CF05950692DE56_METHOD_2_12FBA0F9DF99A2E2_OFFSET UNITYSDK_OFFSET(0x97E2D10)
#define CLASS_2_61CF05950692DE56_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x97E2690)
#define CLASS_2_61CF05950692DE56_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x97E29C0)
#define CLASS_2_61CF05950692DE56_METHOD_2_27FA15BF2EA89FE1_OFFSET UNITYSDK_OFFSET(0x97E2710)
#define CLASS_2_61CF05950692DE56_METHOD_2_496B3158421F351F_OFFSET UNITYSDK_OFFSET(0x97E3170)
#define CLASS_2_61CF05950692DE56_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x97E3B20)
#define CLASS_2_61CF05950692DE56_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x97E3AC0)
#define CLASS_2_61CF05950692DE56_METHOD_2_613D7391D33C4C9B_1_OFFSET UNITYSDK_OFFSET(0x97E2FA0)
#define CLASS_2_61CF05950692DE56_METHOD_2_613D7391D33C4C9B_OFFSET UNITYSDK_OFFSET(0x97E2E30)
#define CLASS_2_61CF05950692DE56_METHOD_2_7FC450AA6F45B272_OFFSET UNITYSDK_OFFSET(0x97E2A20)
#define CLASS_2_61CF05950692DE56_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x97E3440)
#define CLASS_2_61CF05950692DE56_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x97E2520)
#define CLASS_2_61CF05950692DE56_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x97E27D0)
#define CLASS_2_61CF05950692DE56_METHOD_2_F1D0751A34EC3B37_OFFSET UNITYSDK_OFFSET(0x97E3110)
#define CLASS_2_61CF05950692DE56_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x97E3500)
#define CLASS_2_61CF05950692DE56__CTOR_OFFSET UNITYSDK_OFFSET(0x97E39F0)
#define CLASS_2_61CF05950692DE56__ONBIND_OFFSET UNITYSDK_OFFSET(0x97E21A0)
#define CLASS_2_61CF05950692DE56__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x97E2BA0)
#define CLASS_2_61CF05950692DE56__ONTICK_OFFSET UNITYSDK_OFFSET(0x97E2C90)
#define CLASS_2_61CF05950692DE56___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x97E3C50)
#define CLASS_2_61CF05950692DE56___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x97E3CB0)
#define CLASS_2_61CF05950692DE56___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x97E3A60)
#define CLASS_2_61CF05950692DE56___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x97E3B80)
#define CLASS_2_61CF05950692DE56___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x97E3BE0)
#define CLASS_2_61CF05950692DE56___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x97E3A50)

inline static constexpr unsigned int Class_2_61CF05950692DE56_TypeDefinitionIndex = 66377;

class Class_2_61CF05950692DE56 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	::UnityEngine::Animation* Field_2_7; // 0x60
	::UnityEngine::RectTransform* Field_2_4; // 0x68
	::Class_2_A67AE8ECEC8D41D2* Field_2_12; // 0x70
	::RPG::Client::RPGAnimationEvent* Field_2_8; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_11; // 0x80
	::Class_2_E972752B9D4E2012* Field_2_2; // 0x88
	::Class_2_B49E223DF80566EF* Field_2_1; // 0x90
	::UnityEngine::Transform* Field_2_5; // 0x98
	::Class_2_60FF22E606B86340* Field_2_3; // 0xA0
	::Class_0_16E4307DCC419505_940* Field_2_13; // 0xA8
	::Class_2_5E062D4DB0081790* Field_2_0; // 0xB0
	::RPG::Client::BattleAvatarCustomData* Field_2_6; // 0xB8
	::System::Boolean Field_2_9; // 0xC0
	::System::Boolean Field_2_10; // 0xC1
	::System::Boolean Field_2_14; // 0xC2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_27FA15BF2EA89FE1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_27FA15BF2EA89FE1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_7FC450AA6F45B272(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_7FC450AA6F45B272_OFFSET))(this, a1, a2);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_12FBA0F9DF99A2E2(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_12FBA0F9DF99A2E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_613D7391D33C4C9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_613D7391D33C4C9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_613D7391D33C4C9B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_613D7391D33C4C9B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F1D0751A34EC3B37(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_F1D0751A34EC3B37_OFFSET))(this, a1);
	}

	::System::Void Method_2_496B3158421F351F(::Class_1_1FD555BBEDA73FC1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1FD555BBEDA73FC1_1*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_496B3158421F351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___ONBIND_B__0_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61CF05950692DE56___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
