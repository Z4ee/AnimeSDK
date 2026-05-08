#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UINewsStandPuzzlePieceWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_28BDF4B69EE93815_2_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x119DACD0)
#define CLASS_2_28BDF4B69EE93815_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x119DAFC0)
#define CLASS_2_28BDF4B69EE93815_2_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x119DA9A0)
#define CLASS_2_28BDF4B69EE93815_2_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x119DAE20)
#define CLASS_2_28BDF4B69EE93815_2__CTOR_OFFSET UNITYSDK_OFFSET(0x119DAFB0)

inline static constexpr unsigned int Class_2_28BDF4B69EE93815_2_TypeDefinitionIndex = 51259;

class Class_2_28BDF4B69EE93815_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_6; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_12; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x48
	::UnityEngine::UI::GridLayoutGroup* Field_2_2; // 0x50
	::UnityEngine::Transform* Field_2_8; // 0x58
	::UnityEngine::Transform* Field_2_13; // 0x60
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x70
	::Class_3_30A064D7BE47C07D<::MoleMole::UINewsStandPuzzlePieceWidgetController*>* Field_2_5; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x80
	::UIControllerExtensionData* Field_2_3; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_2_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_2_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_2_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
