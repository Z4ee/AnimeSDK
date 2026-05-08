#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_79AE422BA06F6D26_41_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12A82F10)
#define CLASS_2_79AE422BA06F6D26_41_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x12A83240)
#define CLASS_2_79AE422BA06F6D26_41_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A833A0)
#define CLASS_2_79AE422BA06F6D26_41__CTOR_OFFSET UNITYSDK_OFFSET(0x12A83390)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_41_TypeDefinitionIndex = 52408;

class Class_2_79AE422BA06F6D26_41 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_16; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_0; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x48
	::UnityEngine::GameObject* Field_2_1; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x58
	::UnityEngine::GameObject* Field_2_2; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x78
	::UnityEngine::RectTransform* Field_2_15; // 0x80
	::Class_2_1A39E1B51756BF41* Field_2_13; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x90
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x98
	::UnityEngine::RectTransform* Field_2_14; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
