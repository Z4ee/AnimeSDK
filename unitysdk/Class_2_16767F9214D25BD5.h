#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_16767F9214D25BD5_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x120C6A40)
#define CLASS_2_16767F9214D25BD5_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x120C6D80)
#define CLASS_2_16767F9214D25BD5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x120C6F30)
#define CLASS_2_16767F9214D25BD5__CTOR_OFFSET UNITYSDK_OFFSET(0x120C6F20)

inline static constexpr unsigned int Class_2_16767F9214D25BD5_TypeDefinitionIndex = 66429;

class Class_2_16767F9214D25BD5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x38
	::UnityEngine::RectTransform* Field_2_9; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_13; // 0x50
	::UnityEngine::Transform* Field_2_4; // 0x58
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_12; // 0x60
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x68
	::MoleMole::NotificationBadge* Field_2_10; // 0x70
	::Class_2_B4378B46E0020E85* Field_2_15; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16767F9214D25BD5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16767F9214D25BD5_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16767F9214D25BD5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16767F9214D25BD5_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}
};
