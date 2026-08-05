#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_83D433B570E0864F_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1588DAE0)
#define CLASS_2_83D433B570E0864F_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x1588D8A0)
#define CLASS_2_83D433B570E0864F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1588DBD0)
#define CLASS_2_83D433B570E0864F__CTOR_OFFSET UNITYSDK_OFFSET(0x1588DBC0)

inline static constexpr unsigned int Class_2_83D433B570E0864F_TypeDefinitionIndex = 57816;

class Class_2_83D433B570E0864F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_9; // 0x20
	::MonoUITableScrollV2* Field_2_8; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x38
	::MonoUITableScrollV2* Field_2_15; // 0x40
	::MonoUITableScrollV2* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x58
	::UnityEngine::Animation* Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83D433B570E0864F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_83D433B570E0864F_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83D433B570E0864F_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_83D433B570E0864F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
