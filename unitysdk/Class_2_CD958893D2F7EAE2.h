#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D650D0F10A391A4C_ButtonState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_05BD9C87E93CA0F8;
class Class_1_274386B6ECA5E606;
class Class_2_1A0F91E4CE01E769;
class Class_2_40491F513F4A6F01;
class Class_2_8C1FCFCB12DA9945;
class Class_2_D650D0F10A391A4C;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_CD958893D2F7EAE2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17837440)
#define CLASS_2_CD958893D2F7EAE2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17837650)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x17833AD0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x17833830)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_0F19DE6762E7B887_OFFSET UNITYSDK_OFFSET(0x17833F10)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17833330)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x17835D90)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_2AED1A1868B40387_OFFSET UNITYSDK_OFFSET(0x17833C60)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_2E07D057E72DE76A_OFFSET UNITYSDK_OFFSET(0x17835B70)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_3A1D2B4F74743724_OFFSET UNITYSDK_OFFSET(0x17836C40)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_40E64ED64652D825_OFFSET UNITYSDK_OFFSET(0x17836ED0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17833660)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x17835640)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x17834530)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_676CD2ECA00B10AF_OFFSET UNITYSDK_OFFSET(0x17835030)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x17836BE0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17836B80)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_9D6C586EC30ADBDA_OFFSET UNITYSDK_OFFSET(0x17836A90)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x17835F80)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x17835930)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x178334E0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17835ED0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x17833BC0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_C9F59B9D8CCA4DFF_OFFSET UNITYSDK_OFFSET(0x178351D0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17833790)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_D3E970D78BB8886D_OFFSET UNITYSDK_OFFSET(0x17835710)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x17833400)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_E5D1955A389D1F9C_OFFSET UNITYSDK_OFFSET(0x17836DB0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_E95A4606AAD9C63C_OFFSET UNITYSDK_OFFSET(0x17836240)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_EEEA24B88E52471C_OFFSET UNITYSDK_OFFSET(0x17834290)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0x17836A10)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x178361C0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17837140)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17837200)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x178372C0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x17837380)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17837080)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17833620)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_FD45AB35B857FF73_OFFSET UNITYSDK_OFFSET(0x17836600)
#define CLASS_2_CD958893D2F7EAE2__CTOR_OFFSET UNITYSDK_OFFSET(0x17837830)
#define CLASS_2_CD958893D2F7EAE2__ONBIND_OFFSET UNITYSDK_OFFSET(0x17833040)
#define CLASS_2_CD958893D2F7EAE2__ONTICK_OFFSET UNITYSDK_OFFSET(0x178337D0)

inline static constexpr unsigned int Class_2_CD958893D2F7EAE2_TypeDefinitionIndex = 69036;

class Class_2_CD958893D2F7EAE2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x2; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::UI::Text* Field_2_5; // 0x60
	::UnityEngine::Transform* Field_2_6; // 0x68
	::UnityEngine::Transform* Field_2_7; // 0x70
	::Class_2_8C1FCFCB12DA9945* Field_2_8; // 0x78
	::RPG::GameCore::GameEntity* Field_2_9; // 0x80
	::RPG::GameCore::SkillData* Field_2_10; // 0x88
	::RPG::GameCore::SkillData* Field_2_11; // 0x90
	::RPG::Client::SPProgress* Field_2_12; // 0x98
	::UnityEngine::UI::Image* Field_2_13; // 0xA0
	::Class_1_274386B6ECA5E606* Field_2_14; // 0xA8
	::UnityEngine::ParticleSystem* Field_2_15; // 0xB0
	::UnityEngine::UI::Image* Field_2_16; // 0xB8
	::Class_2_1A0F91E4CE01E769* Field_2_17; // 0xC0
	::UnityEngine::Animation* Field_2_18; // 0xC8
	::Class_2_40491F513F4A6F01* Field_2_19; // 0xD0
	::UnityEngine::Transform* Field_2_20; // 0xD8
	::UnityEngine::UI::Text* Field_2_21; // 0xE0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_22; // 0xE8
	::RPG::Client::PrefabLoadMeta* Field_2_23; // 0xF0
	::RPG::GameCore::BattleInstance* Field_2_24; // 0xF8
	::UnityEngine::Animation* Field_2_25; // 0x100
	::RPG::GameCore::SkillCharacterComponent* Field_2_26; // 0x108
	::Class_2_D650D0F10A391A4C* Field_2_27; // 0x110
	::UnityEngine::Transform* Field_2_28; // 0x118
	::UnityEngine::ParticleSystem* Field_2_29; // 0x120
	::RPG::GameCore::CharacterDataComponent* Field_2_30; // 0x128
	::RPG::Client::LongPressEvent* Field_2_31; // 0x130
	::UnityEngine::Transform* Field_2_32; // 0x138
	::UnityEngine::Transform* Field_2_33; // 0x140
	::RPG::GameCore::FixPoint Field_2_34; // 0x148
	::System::UInt32 Field_2_35; // 0x150
	::System::UInt32 Field_2_36; // 0x154
	::RPG::GameCore::SkillSPProgressType Field_2_37; // 0x158

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AED1A1868B40387(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_2AED1A1868B40387_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EEEA24B88E52471C(::Class_1_05BD9C87E93CA0F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05BD9C87E93CA0F8*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_EEEA24B88E52471C_OFFSET))(this, a1);
	}

	::System::Void Method_2_676CD2ECA00B10AF(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_676CD2ECA00B10AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3E970D78BB8886D(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_D3E970D78BB8886D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E07D057E72DE76A(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_2E07D057E72DE76A_OFFSET))(this, a1);
	}

	::System::Void Method_2_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F19DE6762E7B887(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_0F19DE6762E7B887_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_E95A4606AAD9C63C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_E95A4606AAD9C63C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_FD45AB35B857FF73(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_FD45AB35B857FF73_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_9D6C586EC30ADBDA()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_9D6C586EC30ADBDA_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_2_3A1D2B4F74743724(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_3A1D2B4F74743724_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_E5D1955A389D1F9C(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_E5D1955A389D1F9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C9F59B9D8CCA4DFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_C9F59B9D8CCA4DFF_OFFSET))(this);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_40E64ED64652D825(::Class_2_D650D0F10A391A4C_ButtonState a1, ::Class_2_D650D0F10A391A4C_ButtonState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_40E64ED64652D825_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
