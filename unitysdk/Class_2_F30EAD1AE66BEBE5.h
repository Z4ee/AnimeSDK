#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_F30EAD1AE66BEBE5_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x126A7270)
#define CLASS_2_F30EAD1AE66BEBE5_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x126A7050)
#define CLASS_2_F30EAD1AE66BEBE5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x126A7380)
#define CLASS_2_F30EAD1AE66BEBE5__CTOR_OFFSET UNITYSDK_OFFSET(0x126A7370)

inline static constexpr unsigned int Class_2_F30EAD1AE66BEBE5_TypeDefinitionIndex = 48920;

class Class_2_F30EAD1AE66BEBE5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::MoleMole::MonoInputKey* Field_2_2; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x48
	::MoleMole::NotificationBadge* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F30EAD1AE66BEBE5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F30EAD1AE66BEBE5_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F30EAD1AE66BEBE5_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F30EAD1AE66BEBE5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
