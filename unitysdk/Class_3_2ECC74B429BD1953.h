#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_2ECC74B429BD1953_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x14787C50)
#define CLASS_3_2ECC74B429BD1953_METHOD_3_2467D0FE734D187E_OFFSET UNITYSDK_OFFSET(0x14787A80)
#define CLASS_3_2ECC74B429BD1953_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x14787CD0)
#define CLASS_3_2ECC74B429BD1953__CTOR_OFFSET UNITYSDK_OFFSET(0x14788010)

inline static constexpr unsigned int Class_3_2ECC74B429BD1953_TypeDefinitionIndex = 59182;

class Class_3_2ECC74B429BD1953 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_1A39E1B51756BF41* Field_3_1; // 0x28
	::UnityEngine::RectTransform* Field_3_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_4; // 0x38
	::UnityEngine::GameObject* Field_3_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_3; // 0x48
	::UnityEngine::GameObject* Field_3_0; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2ECC74B429BD1953__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2467D0FE734D187E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_2ECC74B429BD1953_METHOD_3_2467D0FE734D187E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2ECC74B429BD1953_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2ECC74B429BD1953_METHOD_3_5176DC743E478510_OFFSET))(this);
	}
};
