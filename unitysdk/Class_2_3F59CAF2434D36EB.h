#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3F59CAF2434D36EB_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x13FBF3E0)
#define CLASS_2_3F59CAF2434D36EB_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x13FBF660)
#define CLASS_2_3F59CAF2434D36EB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13FBF710)
#define CLASS_2_3F59CAF2434D36EB__CTOR_OFFSET UNITYSDK_OFFSET(0x13FBF700)

inline static constexpr unsigned int Class_2_3F59CAF2434D36EB_TypeDefinitionIndex = 40286;

class Class_2_3F59CAF2434D36EB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_5; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::UnityEngine::RectTransform* Field_2_2; // 0x50
	::UnityEngine::UI::Text* Field_2_6; // 0x58
	::MonoGeneralLevelUpConfig* Field_2_0; // 0x60
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F59CAF2434D36EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3F59CAF2434D36EB_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F59CAF2434D36EB_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3F59CAF2434D36EB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
