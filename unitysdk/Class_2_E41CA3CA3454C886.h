#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UICommonRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6630F8877346891C;

#define CLASS_2_E41CA3CA3454C886_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x14087790)
#define CLASS_2_E41CA3CA3454C886_METHOD_2_7B352AB79EC4AAF7_OFFSET UNITYSDK_OFFSET(0x14087910)
#define CLASS_2_E41CA3CA3454C886_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14087B40)
#define CLASS_2_E41CA3CA3454C886_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14087AF0)
#define CLASS_2_E41CA3CA3454C886__CTOR_OFFSET UNITYSDK_OFFSET(0x14087B30)

inline static constexpr unsigned int Class_2_E41CA3CA3454C886_TypeDefinitionIndex = 47449;

class Class_2_E41CA3CA3454C886 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_3_6630F8877346891C<::MoleMole::UICommonRewardItemWidgetController*>*>* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E41CA3CA3454C886__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E41CA3CA3454C886_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E41CA3CA3454C886_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E41CA3CA3454C886_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_6630F8877346891C<::MoleMole::UICommonRewardItemWidgetController*>*>* Method_2_7B352AB79EC4AAF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6630F8877346891C<::MoleMole::UICommonRewardItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E41CA3CA3454C886_METHOD_2_7B352AB79EC4AAF7_OFFSET))(this, a1, a2);
	}
};
