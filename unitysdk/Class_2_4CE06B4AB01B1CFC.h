#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_4CE06B4AB01B1CFC_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x15455FD0)
#define CLASS_2_4CE06B4AB01B1CFC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15456110)
#define CLASS_2_4CE06B4AB01B1CFC_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x15455D20)
#define CLASS_2_4CE06B4AB01B1CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x15456100)

inline static constexpr unsigned int Class_2_4CE06B4AB01B1CFC_TypeDefinitionIndex = 53579;

class Class_2_4CE06B4AB01B1CFC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* Field_2_8; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x28
	::UnityEngine::RectTransform* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_15; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x60
	::MoleMole::UIGeneralButtonController* Field_2_14; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4CE06B4AB01B1CFC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
