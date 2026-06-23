#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInLevelPauseBuffRowWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_7A192581FF7290CF_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x130E1480)
#define CLASS_2_7A192581FF7290CF_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x130E1230)
#define CLASS_2_7A192581FF7290CF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x130E1590)
#define CLASS_2_7A192581FF7290CF__CTOR_OFFSET UNITYSDK_OFFSET(0x130E1580)

inline static constexpr unsigned int Class_2_7A192581FF7290CF_TypeDefinitionIndex = 42563;

class Class_2_7A192581FF7290CF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIInLevelPauseBuffRowWidgetController*>* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::GameObject* Field_2_9; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::UnityEngine::RectTransform* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58
	::UnityEngine::GameObject* Field_2_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A192581FF7290CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A192581FF7290CF_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A192581FF7290CF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A192581FF7290CF_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
