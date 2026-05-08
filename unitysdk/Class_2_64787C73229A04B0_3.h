#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_64787C73229A04B0_3_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1548B360)
#define CLASS_2_64787C73229A04B0_3_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x1548B170)
#define CLASS_2_64787C73229A04B0_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1548B460)
#define CLASS_2_64787C73229A04B0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1548B450)

inline static constexpr unsigned int Class_2_64787C73229A04B0_3_TypeDefinitionIndex = 66595;

class Class_2_64787C73229A04B0_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_3_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_3_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
