#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_9F58486A083459C8_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x14CEABF0)
#define CLASS_2_9F58486A083459C8_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x14CEADB0)
#define CLASS_2_9F58486A083459C8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14CEAEA0)
#define CLASS_2_9F58486A083459C8__CTOR_OFFSET UNITYSDK_OFFSET(0x14CEAE90)

inline static constexpr unsigned int Class_2_9F58486A083459C8_TypeDefinitionIndex = 75444;

class Class_2_9F58486A083459C8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::UI::VerticalLayoutGroup* Field_2_5; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F58486A083459C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F58486A083459C8_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F58486A083459C8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F58486A083459C8_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
