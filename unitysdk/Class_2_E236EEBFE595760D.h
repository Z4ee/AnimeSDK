#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E236EEBFE595760D_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x133F1690)
#define CLASS_2_E236EEBFE595760D_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x133F1830)
#define CLASS_2_E236EEBFE595760D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133F1900)
#define CLASS_2_E236EEBFE595760D__CTOR_OFFSET UNITYSDK_OFFSET(0x133F18F0)

inline static constexpr unsigned int Class_2_E236EEBFE595760D_TypeDefinitionIndex = 75615;

class Class_2_E236EEBFE595760D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E236EEBFE595760D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E236EEBFE595760D_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E236EEBFE595760D_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E236EEBFE595760D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
