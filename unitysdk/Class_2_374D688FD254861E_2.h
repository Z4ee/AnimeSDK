#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_374D688FD254861E_2_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xD867E10)
#define CLASS_2_374D688FD254861E_2_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xD868090)
#define CLASS_2_374D688FD254861E_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD868210)
#define CLASS_2_374D688FD254861E_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD868200)

inline static constexpr unsigned int Class_2_374D688FD254861E_2_TypeDefinitionIndex = 73325;

class Class_2_374D688FD254861E_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::MoleMole::MonoGamepadSelectable* Field_2_8; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_374D688FD254861E_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
