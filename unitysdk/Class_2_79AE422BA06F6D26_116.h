#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class UIControllerExtensionData;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHandBookEntranceTipsWidgetController; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class LayoutElement; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_79AE422BA06F6D26_116_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x14678100)
#define CLASS_2_79AE422BA06F6D26_116_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x14677BE0)
#define CLASS_2_79AE422BA06F6D26_116_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14678200)
#define CLASS_2_79AE422BA06F6D26_116_METHOD_2_ED30B2B59DEA5E0A_OFFSET UNITYSDK_OFFSET(0x14677F20)
#define CLASS_2_79AE422BA06F6D26_116__CTOR_OFFSET UNITYSDK_OFFSET(0x146781F0)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_116_TypeDefinitionIndex = 65703;

class Class_2_79AE422BA06F6D26_116 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_13; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_12; // 0x20
	::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>*>* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_8; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x50
	::UnityEngine::RectTransform* Field_2_18; // 0x58
	::UIControllerExtensionData* Field_2_11; // 0x60
	::UnityEngine::RectTransform* Field_2_9; // 0x68
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIHandBookEntranceTipsWidgetController*>* Field_2_19; // 0x70
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_10; // 0x78
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x80
	::UnityEngine::UI::LayoutElement* Field_2_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_116__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_116_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_116_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>*>* Method_2_ED30B2B59DEA5E0A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_116_METHOD_2_ED30B2B59DEA5E0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_116_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
