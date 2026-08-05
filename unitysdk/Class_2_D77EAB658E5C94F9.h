#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UICommentInfoWidgetController; }
namespace MoleMole { class UICommentLevelWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_D77EAB658E5C94F9_METHOD_2_22001C50FA070A38_OFFSET UNITYSDK_OFFSET(0x1098F930)
#define CLASS_2_D77EAB658E5C94F9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1098FDD0)
#define CLASS_2_D77EAB658E5C94F9_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x1098FC40)
#define CLASS_2_D77EAB658E5C94F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1098FDC0)

inline static constexpr unsigned int Class_2_D77EAB658E5C94F9_TypeDefinitionIndex = 77287;

class Class_2_D77EAB658E5C94F9 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UICommentInfoWidgetController*>* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UICommentLevelWidgetController*>* Field_2_7; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_22001C50FA070A38(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9_METHOD_2_22001C50FA070A38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D77EAB658E5C94F9_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
