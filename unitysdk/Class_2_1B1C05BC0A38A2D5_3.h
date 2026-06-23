#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_1B1C05BC0A38A2D5_3_METHOD_2_98E64CED7C9FDB63_OFFSET UNITYSDK_OFFSET(0x13404560)
#define CLASS_2_1B1C05BC0A38A2D5_3_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x13404840)
#define CLASS_2_1B1C05BC0A38A2D5_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x134048F0)
#define CLASS_2_1B1C05BC0A38A2D5_3__CTOR_OFFSET UNITYSDK_OFFSET(0x134048E0)

inline static constexpr unsigned int Class_2_1B1C05BC0A38A2D5_3_TypeDefinitionIndex = 75724;

class Class_2_1B1C05BC0A38A2D5_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_9; // 0x30
	::MoleMole::MonoGamepadNavigatableList* Field_2_12; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::UnityEngine::UI::ContentSizeFitter* Field_2_13; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x50
	::UnityEngine::GameObject* Field_2_10; // 0x58
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_15; // 0x60
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x70
	::MonoUITableScrollV2* Field_2_1; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x88
	::UnityEngine::Transform* Field_2_4; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_98E64CED7C9FDB63(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_3_METHOD_2_98E64CED7C9FDB63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B1C05BC0A38A2D5_3_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
