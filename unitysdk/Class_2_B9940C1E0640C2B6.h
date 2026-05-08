#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_B9940C1E0640C2B6_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x12EC6420)
#define CLASS_2_B9940C1E0640C2B6_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12EC6690)
#define CLASS_2_B9940C1E0640C2B6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12EC6760)
#define CLASS_2_B9940C1E0640C2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x12EC6750)

inline static constexpr unsigned int Class_2_B9940C1E0640C2B6_TypeDefinitionIndex = 60233;

class Class_2_B9940C1E0640C2B6 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x38
	::Class_2_134E5210FBBAC6E5* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9940C1E0640C2B6_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
