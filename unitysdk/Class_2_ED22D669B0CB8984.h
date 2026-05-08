#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_ED22D669B0CB8984_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x15B00970)
#define CLASS_2_ED22D669B0CB8984_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x15B00700)
#define CLASS_2_ED22D669B0CB8984_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15B00A70)
#define CLASS_2_ED22D669B0CB8984__CTOR_OFFSET UNITYSDK_OFFSET(0x15B00A60)

inline static constexpr unsigned int Class_2_ED22D669B0CB8984_TypeDefinitionIndex = 69344;

class Class_2_ED22D669B0CB8984 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_8; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::UnityEngine::RectTransform* Field_2_4; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x58
	::UnityEngine::CanvasGroup* Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ED22D669B0CB8984_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
