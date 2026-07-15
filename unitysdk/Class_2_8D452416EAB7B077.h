#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1058;
class Class_1_A474572029D08468;
class Class_2_A8EECF54527683EC;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8D452416EAB7B077_METHOD_2_112C2B8B7932F43A_OFFSET UNITYSDK_OFFSET(0x16768F20)
#define CLASS_2_8D452416EAB7B077_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1676A460)
#define CLASS_2_8D452416EAB7B077_METHOD_2_17316B7970434885_OFFSET UNITYSDK_OFFSET(0x167690A0)
#define CLASS_2_8D452416EAB7B077_METHOD_2_1A47D5C829726689_OFFSET UNITYSDK_OFFSET(0x16769CC0)
#define CLASS_2_8D452416EAB7B077_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1676A080)
#define CLASS_2_8D452416EAB7B077_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x1676A7F0)
#define CLASS_2_8D452416EAB7B077_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16769920)
#define CLASS_2_8D452416EAB7B077_METHOD_2_3923AB821AB9D6A6_OFFSET UNITYSDK_OFFSET(0x167699B0)
#define CLASS_2_8D452416EAB7B077_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16769540)
#define CLASS_2_8D452416EAB7B077_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16769190)
#define CLASS_2_8D452416EAB7B077_METHOD_2_66E43F6577A10103_OFFSET UNITYSDK_OFFSET(0x167690F0)
#define CLASS_2_8D452416EAB7B077_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x16769FE0)
#define CLASS_2_8D452416EAB7B077_METHOD_2_7B3034CA2BF9712E_OFFSET UNITYSDK_OFFSET(0x16769140)
#define CLASS_2_8D452416EAB7B077_METHOD_2_7B41A1215ECDFB54_OFFSET UNITYSDK_OFFSET(0x16769970)
#define CLASS_2_8D452416EAB7B077_METHOD_2_8853F27ABBCBCB6D_OFFSET UNITYSDK_OFFSET(0x16769A00)
#define CLASS_2_8D452416EAB7B077_METHOD_2_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0x16769730)
#define CLASS_2_8D452416EAB7B077_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x1676A560)
#define CLASS_2_8D452416EAB7B077_METHOD_2_A9F4FF606733DC08_OFFSET UNITYSDK_OFFSET(0x1676A860)
#define CLASS_2_8D452416EAB7B077_METHOD_2_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x16769590)
#define CLASS_2_8D452416EAB7B077_METHOD_2_AFB4DE3138035970_OFFSET UNITYSDK_OFFSET(0x16769B80)
#define CLASS_2_8D452416EAB7B077_METHOD_2_BB21557668AC8795_OFFSET UNITYSDK_OFFSET(0x16769310)
#define CLASS_2_8D452416EAB7B077_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x16769400)
#define CLASS_2_8D452416EAB7B077_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x16769F00)
#define CLASS_2_8D452416EAB7B077_METHOD_2_C4042669AF5CFD8C_OFFSET UNITYSDK_OFFSET(0x16769490)
#define CLASS_2_8D452416EAB7B077_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x1676A030)
#define CLASS_2_8D452416EAB7B077_METHOD_2_F5EE5DF9DB6DF16B_OFFSET UNITYSDK_OFFSET(0x16769360)
#define CLASS_2_8D452416EAB7B077_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x16769060)
#define CLASS_2_8D452416EAB7B077__CTOR_OFFSET UNITYSDK_OFFSET(0x1676A990)
#define CLASS_2_8D452416EAB7B077__ONBIND_OFFSET UNITYSDK_OFFSET(0x16768C60)
#define CLASS_2_8D452416EAB7B077__ONTICK_OFFSET UNITYSDK_OFFSET(0x167692B0)

inline static constexpr unsigned int Class_2_8D452416EAB7B077_TypeDefinitionIndex = 68641;

class Class_2_8D452416EAB7B077 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_0_16E4307DCC419505_1058* Field_2_1; // 0x60
	::UnityEngine::RectTransform* Field_2_2; // 0x68
	::Class_1_A474572029D08468* Field_2_3; // 0x70
	::Class_2_A8EECF54527683EC* Field_2_4; // 0x78
	::RPG::Client::MonoInControlButton* Field_2_5; // 0x80
	::UnityEngine::Transform* Field_2_6; // 0x88
	::RPG::Client::MonoInControlTip* Field_2_7; // 0x90
	::RPG::GameCore::BattleInstance* Field_2_8; // 0x98
	::UnityEngine::Animation* Field_2_9; // 0xA0
	::RPG::Client::LocalizedText* Field_2_10; // 0xA8
	::RPG::GameCore::SkillData* Field_2_11; // 0xB0
	::RPG::GameCore::GameEntity* Field_2_12; // 0xB8
	::RPG::Client::LongPressEvent* Field_2_13; // 0xC0
	::RPG::Client::UISkillIndex Field_2_14; // 0xC8
	::System::Boolean Field_2_15; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077__ONBIND_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_17316B7970434885()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_17316B7970434885_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_66E43F6577A10103()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_66E43F6577A10103_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_7B3034CA2BF9712E()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_7B3034CA2BF9712E_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB21557668AC8795()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_BB21557668AC8795_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4042669AF5CFD8C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_C4042669AF5CFD8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_2_890F5FC885825F9E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_890F5FC885825F9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_7B41A1215ECDFB54()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_7B41A1215ECDFB54_OFFSET))(this);
	}

	::System::Void Method_2_3923AB821AB9D6A6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_3923AB821AB9D6A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5EE5DF9DB6DF16B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_F5EE5DF9DB6DF16B_OFFSET))(this);
	}

	::System::Void Method_2_AFB4DE3138035970(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_AFB4DE3138035970_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_112C2B8B7932F43A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_112C2B8B7932F43A_OFFSET))(this);
	}

	::System::Void Method_2_8853F27ABBCBCB6D(::RPG::GameCore::ICharacterSkillRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_8853F27ABBCBCB6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A47D5C829726689(::RPG::Client::LongPressEvent* a1, ::RPG::Client::MonoInControlTip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::RPG::Client::MonoInControlTip*))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_1A47D5C829726689_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Boolean Method_2_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_8F059A365E90744C_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F4FF606733DC08(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8D452416EAB7B077_METHOD_2_A9F4FF606733DC08_OFFSET))(this, a1);
	}
};
