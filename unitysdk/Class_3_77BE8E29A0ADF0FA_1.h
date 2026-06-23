#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_77BE8E29A0ADF0FA_1_METHOD_3_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x131573B0)
#define CLASS_3_77BE8E29A0ADF0FA_1_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x131574C0)
#define CLASS_3_77BE8E29A0ADF0FA_1_METHOD_3_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x13157110)
#define CLASS_3_77BE8E29A0ADF0FA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x131579F0)

inline static constexpr unsigned int Class_3_77BE8E29A0ADF0FA_1_TypeDefinitionIndex = 60732;

class Class_3_77BE8E29A0ADF0FA_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_1A39E1B51756BF41* Field_3_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_8; // 0x40
	::UnityEngine::RectTransform* Field_3_11; // 0x48
	::Class_2_B4378B46E0020E85* Field_3_3; // 0x50
	::Class_2_1A39E1B51756BF41* Field_3_7; // 0x58
	::UnityEngine::RectTransform* Field_3_10; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_9; // 0x68
	::Class_2_1A39E1B51756BF41* Field_3_2; // 0x70
	::Class_2_1A39E1B51756BF41* Field_3_5; // 0x78
	::UnityEngine::RectTransform* Field_3_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA_1_METHOD_3_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA_1_METHOD_3_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_3_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77BE8E29A0ADF0FA_1_METHOD_3_29352E75304CF2A0_OFFSET))(this);
	}
};
