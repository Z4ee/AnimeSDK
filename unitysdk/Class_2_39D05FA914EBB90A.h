#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_39D05FA914EBB90A_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0x13450890)
#define CLASS_2_39D05FA914EBB90A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13450A10)
#define CLASS_2_39D05FA914EBB90A__CTOR_OFFSET UNITYSDK_OFFSET(0x13450A00)

inline static constexpr unsigned int Class_2_39D05FA914EBB90A_TypeDefinitionIndex = 62156;

class Class_2_39D05FA914EBB90A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x48
	::UnityEngine::RectTransform* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39D05FA914EBB90A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_39D05FA914EBB90A_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_39D05FA914EBB90A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
