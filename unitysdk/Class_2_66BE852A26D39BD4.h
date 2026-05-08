#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_66BE852A26D39BD4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18E26810)
#define CLASS_2_66BE852A26D39BD4_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x18E266E0)
#define CLASS_2_66BE852A26D39BD4__CTOR_OFFSET UNITYSDK_OFFSET(0x18E26800)

inline static constexpr unsigned int Class_2_66BE852A26D39BD4_TypeDefinitionIndex = 82721;

class Class_2_66BE852A26D39BD4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38
	::MonoUITableScrollV2* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66BE852A26D39BD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66BE852A26D39BD4_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_66BE852A26D39BD4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
