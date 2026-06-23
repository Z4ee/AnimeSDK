#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class UIControllerExtensionData;
namespace MoleMole { class MonoGMLenticular; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_79AE422BA06F6D26_53_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13902EE0)
#define CLASS_2_79AE422BA06F6D26_53_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x139029F0)
#define CLASS_2_79AE422BA06F6D26_53_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x13902D90)
#define CLASS_2_79AE422BA06F6D26_53_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13902FE0)
#define CLASS_2_79AE422BA06F6D26_53__CTOR_OFFSET UNITYSDK_OFFSET(0x13902FD0)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_53_TypeDefinitionIndex = 80000;

class Class_2_79AE422BA06F6D26_53 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::MoleMole::MonoGamepadCustomList* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_15; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_16; // 0x30
	::UnityEngine::GameObject* Field_2_13; // 0x38
	::UnityEngine::GameObject* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x48
	::MoleMole::MonoGMLenticular* Field_2_14; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58
	::UnityEngine::GameObject* Field_2_4; // 0x60
	::UIControllerExtensionData* Field_2_11; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x70
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x78
	::Class_2_FDFE69FE7B72463B* Field_2_8; // 0x80
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_12; // 0x88
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x90
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_1; // 0x98
	::MoleMole::MonoGamepadCustomList* Field_2_6; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_53__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_53_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_53_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_53_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_53_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
