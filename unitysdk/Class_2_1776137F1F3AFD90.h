#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1776137F1F3AFD90_Class_2_5A65F4E148145C27_2;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1776137F1F3AFD90_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x17F42180)
#define CLASS_2_1776137F1F3AFD90_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17F42250)
#define CLASS_2_1776137F1F3AFD90_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x17F41ED0)
#define CLASS_2_1776137F1F3AFD90__CTOR_OFFSET UNITYSDK_OFFSET(0x17F42240)

inline static constexpr unsigned int Class_2_1776137F1F3AFD90_TypeDefinitionIndex = 86376;

class Class_2_1776137F1F3AFD90 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_8; // 0x18
	::MonoUITableScrollV2* Field_2_7; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_15; // 0x28
	::UnityEngine::GameObject* Field_2_9; // 0x30
	::UnityEngine::GameObject* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_1776137F1F3AFD90_Class_2_5A65F4E148145C27_2*>* Field_2_10; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x68
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1776137F1F3AFD90__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1776137F1F3AFD90_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1776137F1F3AFD90_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1776137F1F3AFD90_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
