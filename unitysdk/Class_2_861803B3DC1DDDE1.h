#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_861803B3DC1DDDE1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x141C6820)
#define CLASS_2_861803B3DC1DDDE1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x141C6A70)
#define CLASS_2_861803B3DC1DDDE1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x141C6B20)
#define CLASS_2_861803B3DC1DDDE1__CTOR_OFFSET UNITYSDK_OFFSET(0x141C6B10)

inline static constexpr unsigned int Class_2_861803B3DC1DDDE1_TypeDefinitionIndex = 52245;

class Class_2_861803B3DC1DDDE1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::CanvasGroup* Field_2_11; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x50
	::UnityEngine::GameObject* Field_2_8; // 0x58
	::UnityEngine::RectTransform* Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_861803B3DC1DDDE1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_861803B3DC1DDDE1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_861803B3DC1DDDE1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_861803B3DC1DDDE1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
