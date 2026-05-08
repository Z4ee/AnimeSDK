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
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_C08B9E9B622D3089_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xF29E300)
#define CLASS_2_C08B9E9B622D3089_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xF29E070)
#define CLASS_2_C08B9E9B622D3089_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF29E400)
#define CLASS_2_C08B9E9B622D3089__CTOR_OFFSET UNITYSDK_OFFSET(0xF29E3F0)

inline static constexpr unsigned int Class_2_C08B9E9B622D3089_TypeDefinitionIndex = 60964;

class Class_2_C08B9E9B622D3089 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x58
	::UnityEngine::RectTransform* Field_2_6; // 0x60
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x68
	::UnityEngine::RectTransform* Field_2_2; // 0x70
	::UnityEngine::RectTransform* Field_2_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C08B9E9B622D3089__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C08B9E9B622D3089_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C08B9E9B622D3089_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C08B9E9B622D3089_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
