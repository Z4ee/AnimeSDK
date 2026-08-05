#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_8AC9F117F5B927F1_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x180FBAD0)
#define CLASS_2_8AC9F117F5B927F1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x180FBCC0)
#define CLASS_2_8AC9F117F5B927F1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x180FBD90)
#define CLASS_2_8AC9F117F5B927F1__CTOR_OFFSET UNITYSDK_OFFSET(0x180FBD80)

inline static constexpr unsigned int Class_2_8AC9F117F5B927F1_TypeDefinitionIndex = 41008;

class Class_2_8AC9F117F5B927F1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x20
	::UnityEngine::CanvasGroup* Field_2_6; // 0x28
	::MonoUITableScrollV2* Field_2_1; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8AC9F117F5B927F1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
