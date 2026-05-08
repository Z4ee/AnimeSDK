#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class ImgTextSkillParser; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7C8BC23A3027DD75_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14BF8A80)
#define CLASS_2_7C8BC23A3027DD75_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x14BF88B0)
#define CLASS_2_7C8BC23A3027DD75__CTOR_OFFSET UNITYSDK_OFFSET(0x14BF8A70)

inline static constexpr unsigned int Class_2_7C8BC23A3027DD75_TypeDefinitionIndex = 50806;

class Class_2_7C8BC23A3027DD75 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_11; // 0x20
	::MoleMole::ImgTextSkillParser* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x30
	::UnityEngine::UI::Text* Field_2_1; // 0x38
	::UnityEngine::UI::Text* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x48
	::UnityEngine::UI::Text* Field_2_8; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x60
	::UnityEngine::GameObject* Field_2_5; // 0x68
	::UnityEngine::UI::Text* Field_2_0; // 0x70
	::UnityEngine::GameObject* Field_2_9; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C8BC23A3027DD75__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7C8BC23A3027DD75_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7C8BC23A3027DD75_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
