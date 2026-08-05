#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_60F06717BB999E3F_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x17CF1950)
#define CLASS_2_60F06717BB999E3F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17CF1B00)
#define CLASS_2_60F06717BB999E3F_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x17CF1690)
#define CLASS_2_60F06717BB999E3F__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF1AF0)

inline static constexpr unsigned int Class_2_60F06717BB999E3F_TypeDefinitionIndex = 67050;

class Class_2_60F06717BB999E3F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralFilterItemRowWidgetController*>* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_11; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralFilterItemRowWidgetController*>* Field_2_5; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x58
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralFilterItemRowWidgetController*>* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60F06717BB999E3F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60F06717BB999E3F_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60F06717BB999E3F_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60F06717BB999E3F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
