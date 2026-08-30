#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_2454CC9D04FE4471_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1570B070)
#define CLASS_2_2454CC9D04FE4471_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1570B230)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x15709F20)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1570AC20)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_1CC5B6C4C58F4962_OFFSET UNITYSDK_OFFSET(0x1570A750)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_2638827D78DE1E10_OFFSET UNITYSDK_OFFSET(0x1570A200)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x1570A930)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_3923AB821AB9D6A6_OFFSET UNITYSDK_OFFSET(0x1570A010)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15709D60)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1570ACE0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x1570A680)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_87A99E4BDD8FF37B_OFFSET UNITYSDK_OFFSET(0x1570AB20)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_96A0F0F8F3E30F20_OFFSET UNITYSDK_OFFSET(0x1570AA20)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_A182343D41A3218C_OFFSET UNITYSDK_OFFSET(0x1570A7B0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_A5F31F3D129B0DE6_OFFSET UNITYSDK_OFFSET(0x1570A150)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_A73E39DE1C239AEA_OFFSET UNITYSDK_OFFSET(0x1570A540)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x1570A0B0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_BF51A7F7DC348455_OFFSET UNITYSDK_OFFSET(0x1570A4F0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1570AEC0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15709E80)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1570AE00)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1570AFB0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1570AD40)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x15709D20)
#define CLASS_2_2454CC9D04FE4471__CTOR_OFFSET UNITYSDK_OFFSET(0x1570B3D0)
#define CLASS_2_2454CC9D04FE4471__ONBIND_OFFSET UNITYSDK_OFFSET(0x15709BA0)
#define CLASS_2_2454CC9D04FE4471__ONTICK_OFFSET UNITYSDK_OFFSET(0x15709EC0)

inline static constexpr unsigned int Class_2_2454CC9D04FE4471_TypeDefinitionIndex = 72285;

class Class_2_2454CC9D04FE4471 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* IIFENECAOBG; // 0x0
	// static const ::System::String* CGNGHKIIGCM; // 0x0
	// static const ::System::Int32 EJEONLGGNBB = 0x2; // 0x0
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x60
	::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x68
	::UnityEngine::Transform* COGOPBJHLME; // 0x70
	::RPG::GameCore::SkillData* IMAOAAEJOIE; // 0x78
	::UnityEngine::Transform* FIBLLKEGNKM; // 0x80
	::UnityEngine::UI::Image* AJKPFICIIIP; // 0x88
	::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0x90
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x98
	::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0xA0
	::System::Func_1<::System::Boolean>* DKFHMHMPEBL; // 0xA8
	::Class_2_D650D0F10A391A4C* BFOJPNLIPDC; // 0xB0
	::System::Boolean FPAHEHPGOIC; // 0xB8
	::System::Boolean AKBPNMEFGAO; // 0xB9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471__ONBIND_OFFSET))(this);
	}

	::Class_1_34917908B7833130* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_3923AB821AB9D6A6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_3923AB821AB9D6A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5F31F3D129B0DE6(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_A5F31F3D129B0DE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF51A7F7DC348455(::System::Func_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_BF51A7F7DC348455_OFFSET))(this, a1);
	}

	::System::Void Method_2_A73E39DE1C239AEA(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_A73E39DE1C239AEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CC5B6C4C58F4962(::Class_2_D650D0F10A391A4C_ButtonState a1, ::Class_2_D650D0F10A391A4C_ButtonState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_1CC5B6C4C58F4962_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A182343D41A3218C(::Class_2_D650D0F10A391A4C_ButtonState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_A182343D41A3218C_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_96A0F0F8F3E30F20(::RPG::GameCore::LevelTurnUltraSkillPrepare* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillPrepare*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_96A0F0F8F3E30F20_OFFSET))(this, a1);
	}

	::System::Void Method_2_87A99E4BDD8FF37B(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_87A99E4BDD8FF37B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	::System::Void Method_2_2638827D78DE1E10(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_2638827D78DE1E10_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
