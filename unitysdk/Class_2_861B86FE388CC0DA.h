#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_861B86FE388CC0DA_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0xEFFF960)
#define CLASS_2_861B86FE388CC0DA_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xEFFFB10)
#define CLASS_2_861B86FE388CC0DA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xEFFFBE0)
#define CLASS_2_861B86FE388CC0DA__CTOR_OFFSET UNITYSDK_OFFSET(0xEFFFBD0)

inline static constexpr unsigned int Class_2_861B86FE388CC0DA_TypeDefinitionIndex = 42794;

class Class_2_861B86FE388CC0DA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::MoleMole::Config::UIAchievementAnimConfig* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::Animation* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_861B86FE388CC0DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_861B86FE388CC0DA_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_861B86FE388CC0DA_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_861B86FE388CC0DA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
