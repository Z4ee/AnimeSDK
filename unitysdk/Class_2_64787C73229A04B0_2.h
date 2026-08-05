#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_64787C73229A04B0_2_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x13FE6C30)
#define CLASS_2_64787C73229A04B0_2_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x13FE6A10)
#define CLASS_2_64787C73229A04B0_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13FE6D50)
#define CLASS_2_64787C73229A04B0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE6D40)

inline static constexpr unsigned int Class_2_64787C73229A04B0_2_TypeDefinitionIndex = 68425;

class Class_2_64787C73229A04B0_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x38
	::UnityEngine::RectTransform* Field_2_11; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_2_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_2_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64787C73229A04B0_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
