#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOperationYumMainWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C9AC68D5E8DE2708_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x16DFAF10)
#define CLASS_2_C9AC68D5E8DE2708_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16DFB050)
#define CLASS_2_C9AC68D5E8DE2708_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x16DFAC20)
#define CLASS_2_C9AC68D5E8DE2708__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFB040)

inline static constexpr unsigned int Class_2_C9AC68D5E8DE2708_TypeDefinitionIndex = 79526;

class Class_2_C9AC68D5E8DE2708 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_10; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIOperationYumMainWidgetController*>* Field_2_7; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIOperationYumMainWidgetController*>* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_0; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_11; // 0x48
	::Class_3_826A30478DA34A69<::MoleMole::UIOperationYumMainWidgetController*>* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_4; // 0x58
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x60
	::MoleMole::MonoGamepadCustomList* Field_2_8; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
