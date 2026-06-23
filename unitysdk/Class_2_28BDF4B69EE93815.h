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
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_28BDF4B69EE93815_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x15FE0280)
#define CLASS_2_28BDF4B69EE93815_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15FE0570)
#define CLASS_2_28BDF4B69EE93815_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x15FDFF60)
#define CLASS_2_28BDF4B69EE93815_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x15FE03D0)
#define CLASS_2_28BDF4B69EE93815__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE0560)

inline static constexpr unsigned int Class_2_28BDF4B69EE93815_TypeDefinitionIndex = 41596;

class Class_2_28BDF4B69EE93815 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x20
	::UnityEngine::Transform* Field_2_13; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UINewsStandPuzzlePieceWidgetController*>* Field_2_5; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40
	::UnityEngine::Transform* Field_2_8; // 0x48
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x58
	::UnityEngine::UI::GridLayoutGroup* Field_2_2; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x68
	::UIControllerExtensionData* Field_2_3; // 0x70
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_6; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_12; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_28BDF4B69EE93815_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
