#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_57F4F2E1F75850CE_Class_2_5A533685E4896551;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchTrustDegreeDetailsCardWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_57F4F2E1F75850CE_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x145C6D90)
#define CLASS_2_57F4F2E1F75850CE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x145C6EF0)
#define CLASS_2_57F4F2E1F75850CE_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x145C6B00)
#define CLASS_2_57F4F2E1F75850CE__CTOR_OFFSET UNITYSDK_OFFSET(0x145C6EE0)

inline static constexpr unsigned int Class_2_57F4F2E1F75850CE_TypeDefinitionIndex = 87284;

class Class_2_57F4F2E1F75850CE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIWorkBenchTrustDegreeDetailsCardWidgetController*>* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_57F4F2E1F75850CE_Class_2_5A533685E4896551*>* Field_2_9; // 0x20
	::MoleMole::MonoGamepadNavigatableList* Field_2_6; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::MoleMole::MonoGamepadModule* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::MonoUITableScrollV2* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_57F4F2E1F75850CE_Class_2_5A533685E4896551*>* Field_2_8; // 0x58
	::MonoUITableScrollV2* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_57F4F2E1F75850CE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
