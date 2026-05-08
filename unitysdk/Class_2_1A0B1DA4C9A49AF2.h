#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1A0B1DA4C9A49AF2_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x111CB5D0)
#define CLASS_2_1A0B1DA4C9A49AF2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x111CB7F0)
#define CLASS_2_1A0B1DA4C9A49AF2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x111CB930)
#define CLASS_2_1A0B1DA4C9A49AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x111CB920)

inline static constexpr unsigned int Class_2_1A0B1DA4C9A49AF2_TypeDefinitionIndex = 40909;

class Class_2_1A0B1DA4C9A49AF2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0B1DA4C9A49AF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A0B1DA4C9A49AF2_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A0B1DA4C9A49AF2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A0B1DA4C9A49AF2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
