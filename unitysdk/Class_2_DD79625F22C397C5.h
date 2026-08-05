#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_DD79625F22C397C5_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x18233440)
#define CLASS_2_DD79625F22C397C5_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x182336D0)
#define CLASS_2_DD79625F22C397C5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x182337A0)
#define CLASS_2_DD79625F22C397C5__CTOR_OFFSET UNITYSDK_OFFSET(0x18233790)

inline static constexpr unsigned int Class_2_DD79625F22C397C5_TypeDefinitionIndex = 47733;

class Class_2_DD79625F22C397C5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x48
	::UnityEngine::RectTransform* Field_2_9; // 0x50
	::UnityEngine::RectTransform* Field_2_4; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x60
	::UnityEngine::RectTransform* Field_2_15; // 0x68
	::UnityEngine::RectTransform* Field_2_11; // 0x70
	::MoleMole::MonoGamepadSpaceList* Field_2_10; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD79625F22C397C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD79625F22C397C5_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD79625F22C397C5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD79625F22C397C5_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
