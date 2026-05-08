#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_70329613AC36F6ED_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x17F22A50)
#define CLASS_2_70329613AC36F6ED_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x17F22C40)
#define CLASS_2_70329613AC36F6ED_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17F22D10)
#define CLASS_2_70329613AC36F6ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17F22D00)

inline static constexpr unsigned int Class_2_70329613AC36F6ED_TypeDefinitionIndex = 79066;

class Class_2_70329613AC36F6ED : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70329613AC36F6ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70329613AC36F6ED_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70329613AC36F6ED_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_70329613AC36F6ED_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
