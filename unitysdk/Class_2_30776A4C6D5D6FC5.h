#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_30776A4C6D5D6FC5_Class_2_47F94C3827CAB3BB_15;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_30776A4C6D5D6FC5_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1400D910)
#define CLASS_2_30776A4C6D5D6FC5_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1400D6B0)
#define CLASS_2_30776A4C6D5D6FC5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1400DA10)
#define CLASS_2_30776A4C6D5D6FC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1400DA00)

inline static constexpr unsigned int Class_2_30776A4C6D5D6FC5_TypeDefinitionIndex = 88408;

class Class_2_30776A4C6D5D6FC5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_30776A4C6D5D6FC5_Class_2_47F94C3827CAB3BB_15*>* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_11; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UITabButton* Field_2_2; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x58
	::UnityEngine::RectTransform* Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30776A4C6D5D6FC5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30776A4C6D5D6FC5_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30776A4C6D5D6FC5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30776A4C6D5D6FC5_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
