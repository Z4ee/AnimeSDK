#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_B9940C1E0640C2B6_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x10F5EC50)
#define CLASS_2_B9940C1E0640C2B6_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x10F5EEC0)
#define CLASS_2_B9940C1E0640C2B6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10F5EF90)
#define CLASS_2_B9940C1E0640C2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5EF80)

inline static constexpr unsigned int Class_2_B9940C1E0640C2B6_TypeDefinitionIndex = 55689;

class Class_2_B9940C1E0640C2B6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_9; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x30
	::Class_2_134E5210FBBAC6E5* Field_2_11; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x40
	::MonoUITableScrollV2* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
