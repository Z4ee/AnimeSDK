#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_B71FA21BC121C2FA;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_1F0BFEC2660F586B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19244460)
#define CLASS_2_1F0BFEC2660F586B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19244530)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19243DD0)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_3BAF09B652485A73_OFFSET UNITYSDK_OFFSET(0x19244090)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x19244100)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x192441D0)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19244300)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_47C4B239AE738315_OFFSET UNITYSDK_OFFSET(0x19243FB0)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x19243F40)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x19243E40)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_6F83656A627E675E_OFFSET UNITYSDK_OFFSET(0x19243700)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x192436B0)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x19244360)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x19243920)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x19243D70)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_AE1E3DA677D21BF0_OFFSET UNITYSDK_OFFSET(0x19244020)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_B3979C05595F6BBF_OFFSET UNITYSDK_OFFSET(0x19243A90)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_D824C9FF720EB29B_OFFSET UNITYSDK_OFFSET(0x19243A00)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x19243C40)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_EDE104A2956E181A_1_OFFSET UNITYSDK_OFFSET(0x19243EB0)
#define CLASS_2_1F0BFEC2660F586B_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x19243CF0)
#define CLASS_2_1F0BFEC2660F586B__CTOR_OFFSET UNITYSDK_OFFSET(0x192445D0)
#define CLASS_2_1F0BFEC2660F586B__ONBIND_OFFSET UNITYSDK_OFFSET(0x192433D0)

inline static constexpr unsigned int Class_2_1F0BFEC2660F586B_TypeDefinitionIndex = 68675;

class Class_2_1F0BFEC2660F586B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animator* Field_2_2; // 0x60
	::Struct_2_96F8F0A04B900A9E Field_2_3; // 0x68
	::Class_2_B71FA21BC121C2FA* Field_2_4; // 0x70
	::Il2CppArray<::UnityEngine::UI::Image*>* Field_2_5; // 0x78
	::Il2CppArray<::UnityEngine::UI::Image*>* Field_2_6; // 0x80
	::System::Int32 Field_2_7; // 0x88
	::RPG::GameCore::SkillUISpecialButtonType Field_2_8; // 0x8C
	::System::Boolean Field_2_9; // 0x90
	::System::Boolean Field_2_10; // 0x91
	::System::Boolean Field_2_11; // 0x92
	::System::Int32 Field_2_12; // 0x94
	::System::Int32 Field_2_13; // 0x98
	::System::Int32 Field_2_14; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F83656A627E675E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_6F83656A627E675E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_EDE104A2956E181A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_EDE104A2956E181A_1_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_47C4B239AE738315()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_47C4B239AE738315_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_AE1E3DA677D21BF0()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_AE1E3DA677D21BF0_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_3BAF09B652485A73()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_3BAF09B652485A73_OFFSET))(this);
	}

	::System::Void Method_2_D824C9FF720EB29B(::RPG::GameCore::SkillUISpecialButtonType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_D824C9FF720EB29B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3979C05595F6BBF(::RPG::GameCore::SkillUISpecialButtonType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_B3979C05595F6BBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0BFEC2660F586B_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
