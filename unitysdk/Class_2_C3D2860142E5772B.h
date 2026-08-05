#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C3D2860142E5772B_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x14963E30)
#define CLASS_2_C3D2860142E5772B_METHOD_2_2A2EF76C634BC935_OFFSET UNITYSDK_OFFSET(0x14963CE0)
#define CLASS_2_C3D2860142E5772B_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x14963A30)
#define CLASS_2_C3D2860142E5772B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14963F50)
#define CLASS_2_C3D2860142E5772B__CTOR_OFFSET UNITYSDK_OFFSET(0x14963F40)

inline static constexpr unsigned int Class_2_C3D2860142E5772B_TypeDefinitionIndex = 70819;

class Class_2_C3D2860142E5772B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_11; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x48
	::UnityEngine::RectTransform* Field_2_10; // 0x50
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x58
	::UnityEngine::GameObject* Field_2_6; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D2860142E5772B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3D2860142E5772B_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D2860142E5772B_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3D2860142E5772B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_2A2EF76C634BC935(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3D2860142E5772B_METHOD_2_2A2EF76C634BC935_OFFSET))(this, a1, a2);
	}
};
