#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D6646C12B5D25CB4_1_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x133FFD10)
#define CLASS_2_D6646C12B5D25CB4_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x133FFEF0)
#define CLASS_2_D6646C12B5D25CB4_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133FFFC0)
#define CLASS_2_D6646C12B5D25CB4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x133FFFB0)

inline static constexpr unsigned int Class_2_D6646C12B5D25CB4_1_TypeDefinitionIndex = 45399;

class Class_2_D6646C12B5D25CB4_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::Animation* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4_1_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6646C12B5D25CB4_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
