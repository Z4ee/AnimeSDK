#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_F2D0B295B0A98053_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1039D360)
#define CLASS_2_F2D0B295B0A98053_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x1039D130)
#define CLASS_2_F2D0B295B0A98053_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1039D410)
#define CLASS_2_F2D0B295B0A98053__CTOR_OFFSET UNITYSDK_OFFSET(0x1039D400)

inline static constexpr unsigned int Class_2_F2D0B295B0A98053_TypeDefinitionIndex = 47560;

class Class_2_F2D0B295B0A98053 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x18
	::MonoUITableScrollV2* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::UnityEngine::GameObject* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x50
	::UnityEngine::GameObject* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
