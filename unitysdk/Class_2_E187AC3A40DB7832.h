#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D650D0F10A391A4C_ButtonState.h"

class Class_1_152140BAFD2DB102;
class Class_2_D650D0F10A391A4C;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillPrepare; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_E187AC3A40DB7832_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B348E0)
#define CLASS_2_E187AC3A40DB7832_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B34A50)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x10B339C0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x10B34490)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x10B33800)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x10B34210)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_374763CC1E43BA68_OFFSET UNITYSDK_OFFSET(0x10B34100)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_3923AB821AB9D6A6_OFFSET UNITYSDK_OFFSET(0x10B33AA0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10B33810)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B34520)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_4C944C3BDCE3BB8F_OFFSET UNITYSDK_OFFSET(0x10B33BE0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10B34CA0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10B34D70)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B34C40)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_83E98B6103702766_OFFSET UNITYSDK_OFFSET(0x10B340A0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_87A99E4BDD8FF37B_OFFSET UNITYSDK_OFFSET(0x10B343C0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_96A0F0F8F3E30F20_OFFSET UNITYSDK_OFFSET(0x10B342F0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x10B34620)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x10B347D0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10B34580)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_A73E39DE1C239AEA_OFFSET UNITYSDK_OFFSET(0x10B33F60)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x10B33B40)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_BF51A7F7DC348455_OFFSET UNITYSDK_OFFSET(0x10B33F10)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B33920)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x10B34DD0)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_DE3244AC41BC6E2A_OFFSET UNITYSDK_OFFSET(0x10B33C90)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x10B34030)
#define CLASS_2_E187AC3A40DB7832_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10B346E0)
#define CLASS_2_E187AC3A40DB7832__CTOR_OFFSET UNITYSDK_OFFSET(0x10B34BA0)
#define CLASS_2_E187AC3A40DB7832__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B335C0)
#define CLASS_2_E187AC3A40DB7832__ONTICK_OFFSET UNITYSDK_OFFSET(0x10B33960)
#define CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B34E40)
#define CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10B34EA0)
#define CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B34BE0)
#define CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10B34D00)

inline static constexpr unsigned int Class_2_E187AC3A40DB7832_TypeDefinitionIndex = 59267;

class Class_2_E187AC3A40DB7832 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::Int32 Field_2_15 = 0x2; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_9; // 0x60
	::RPG::GameCore::SkillData* Field_2_10; // 0x68
	::RPG::GameCore::LevelUIComponent* Field_2_8; // 0x70
	::UnityEngine::Animation* Field_2_4; // 0x78
	::System::Func_1<::System::Boolean>* Field_2_14; // 0x80
	::UnityEngine::Transform* Field_2_3; // 0x88
	::UnityEngine::Transform* Field_2_2; // 0x90
	::UnityEngine::UI::Image* Field_2_1; // 0x98
	::Class_2_D650D0F10A391A4C* Field_2_0; // 0xA0
	::RPG::GameCore::SkillCharacterComponent* Field_2_11; // 0xA8
	::RPG::GameCore::GameEntity* Field_2_7; // 0xB0
	::System::Boolean Field_2_13; // 0xB8
	::System::Boolean Field_2_12; // 0xB9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832__ONBIND_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_3923AB821AB9D6A6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_3923AB821AB9D6A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C944C3BDCE3BB8F(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_4C944C3BDCE3BB8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF51A7F7DC348455(::System::Func_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_BF51A7F7DC348455_OFFSET))(this, a1);
	}

	::System::Void Method_2_A73E39DE1C239AEA(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_A73E39DE1C239AEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_83E98B6103702766(::Class_2_D650D0F10A391A4C_ButtonState a1, ::Class_2_D650D0F10A391A4C_ButtonState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_83E98B6103702766_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_374763CC1E43BA68(::Class_2_D650D0F10A391A4C_ButtonState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_374763CC1E43BA68_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_96A0F0F8F3E30F20(::RPG::GameCore::LevelTurnUltraSkillPrepare* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillPrepare*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_96A0F0F8F3E30F20_OFFSET))(this, a1);
	}

	::System::Void Method_2_87A99E4BDD8FF37B(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_87A99E4BDD8FF37B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_2_DE3244AC41BC6E2A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_DE3244AC41BC6E2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E187AC3A40DB7832___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
