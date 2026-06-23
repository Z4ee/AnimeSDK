#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_8F2ABE82E4471706_Class_2_47F94C3827CAB3BB_13;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_8F2ABE82E4471706_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x10DBE540)
#define CLASS_2_8F2ABE82E4471706_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10DBE980)
#define CLASS_2_8F2ABE82E4471706_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x10DBE830)
#define CLASS_2_8F2ABE82E4471706_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10DBEAC0)
#define CLASS_2_8F2ABE82E4471706__CTOR_OFFSET UNITYSDK_OFFSET(0x10DBEAB0)

inline static constexpr unsigned int Class_2_8F2ABE82E4471706_TypeDefinitionIndex = 81680;

class Class_2_8F2ABE82E4471706 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_13; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_8F2ABE82E4471706_Class_2_47F94C3827CAB3BB_13*>* Field_2_5; // 0x48
	::UnityEngine::GameObject* Field_2_9; // 0x50
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x58
	::MoleMole::MonoGamepadSelectable* Field_2_10; // 0x60
	::UnityEngine::GameObject* Field_2_8; // 0x68
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_12; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_7; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F2ABE82E4471706__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8F2ABE82E4471706_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F2ABE82E4471706_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8F2ABE82E4471706_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8F2ABE82E4471706_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
