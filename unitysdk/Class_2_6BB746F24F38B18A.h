#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_6BB746F24F38B18A_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x10677860)
#define CLASS_2_6BB746F24F38B18A_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x10677A30)
#define CLASS_2_6BB746F24F38B18A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10677B00)
#define CLASS_2_6BB746F24F38B18A__CTOR_OFFSET UNITYSDK_OFFSET(0x10677AF0)

inline static constexpr unsigned int Class_2_6BB746F24F38B18A_TypeDefinitionIndex = 87513;

class Class_2_6BB746F24F38B18A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Button* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::MoleMole::NotificationBadge* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BB746F24F38B18A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6BB746F24F38B18A_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BB746F24F38B18A_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6BB746F24F38B18A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
