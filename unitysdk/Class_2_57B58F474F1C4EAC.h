#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_57B58F474F1C4EAC_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x12EF5FF0)
#define CLASS_2_57B58F474F1C4EAC_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12EF6220)
#define CLASS_2_57B58F474F1C4EAC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12EF62D0)
#define CLASS_2_57B58F474F1C4EAC__CTOR_OFFSET UNITYSDK_OFFSET(0x12EF62C0)

inline static constexpr unsigned int Class_2_57B58F474F1C4EAC_TypeDefinitionIndex = 70789;

class Class_2_57B58F474F1C4EAC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::Transform* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_9; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x60
	::UnityEngine::Transform* Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57B58F474F1C4EAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57B58F474F1C4EAC_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57B58F474F1C4EAC_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57B58F474F1C4EAC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
