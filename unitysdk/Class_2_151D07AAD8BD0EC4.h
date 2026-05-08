#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_151D07AAD8BD0EC4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14194FB0)
#define CLASS_2_151D07AAD8BD0EC4_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x14194E80)
#define CLASS_2_151D07AAD8BD0EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x14194FA0)

inline static constexpr unsigned int Class_2_151D07AAD8BD0EC4_TypeDefinitionIndex = 61604;

class Class_2_151D07AAD8BD0EC4 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_5; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::UI::Text* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38
	::UnityEngine::UI::Text* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_151D07AAD8BD0EC4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_151D07AAD8BD0EC4_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_151D07AAD8BD0EC4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
