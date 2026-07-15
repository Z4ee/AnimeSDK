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

#define CLASS_2_2454CC9D04FE4471_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B7DFB0)
#define CLASS_2_2454CC9D04FE4471_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18B7E170)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x18B7CE50)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x18B7DB60)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_1CC5B6C4C58F4962_OFFSET UNITYSDK_OFFSET(0x18B7D690)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_2638827D78DE1E10_OFFSET UNITYSDK_OFFSET(0x18B7D130)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x18B7D870)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_3923AB821AB9D6A6_OFFSET UNITYSDK_OFFSET(0x18B7CF40)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x18B7CC90)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18B7DC20)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x18B7D5C0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_87A99E4BDD8FF37B_OFFSET UNITYSDK_OFFSET(0x18B7DA60)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_96A0F0F8F3E30F20_OFFSET UNITYSDK_OFFSET(0x18B7D960)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_A182343D41A3218C_OFFSET UNITYSDK_OFFSET(0x18B7D6F0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_A5F31F3D129B0DE6_OFFSET UNITYSDK_OFFSET(0x18B7D080)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_A73E39DE1C239AEA_OFFSET UNITYSDK_OFFSET(0x18B7D480)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x18B7CFE0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_BF51A7F7DC348455_OFFSET UNITYSDK_OFFSET(0x18B7D430)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x18B7DE00)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B7CDB0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x18B7DD40)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x18B7DEF0)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18B7DC80)
#define CLASS_2_2454CC9D04FE4471_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x18B7CC50)
#define CLASS_2_2454CC9D04FE4471__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7E310)
#define CLASS_2_2454CC9D04FE4471__ONBIND_OFFSET UNITYSDK_OFFSET(0x18B7CAD0)
#define CLASS_2_2454CC9D04FE4471__ONTICK_OFFSET UNITYSDK_OFFSET(0x18B7CDF0)

inline static constexpr unsigned int Class_2_2454CC9D04FE4471_TypeDefinitionIndex = 69084;

class Class_2_2454CC9D04FE4471 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x2; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_4; // 0x68
	::UnityEngine::UI::Image* Field_2_5; // 0x70
	::UnityEngine::Transform* Field_2_6; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_7; // 0x80
	::System::Func_1<::System::Boolean>* Field_2_8; // 0x88
	::Class_2_D650D0F10A391A4C* Field_2_9; // 0x90
	::UnityEngine::Animation* Field_2_10; // 0x98
	::RPG::GameCore::SkillCharacterComponent* Field_2_11; // 0xA0
	::RPG::GameCore::SkillData* Field_2_12; // 0xA8
	::UnityEngine::Transform* Field_2_13; // 0xB0
	::System::Boolean Field_2_14; // 0xB8
	::System::Boolean Field_2_15; // 0xB9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471__ONBIND_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2454CC9D04FE4471_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
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
