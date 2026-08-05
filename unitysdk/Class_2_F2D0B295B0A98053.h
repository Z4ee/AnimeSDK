#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_F2D0B295B0A98053_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x178D74B0)
#define CLASS_2_F2D0B295B0A98053_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x178D7280)
#define CLASS_2_F2D0B295B0A98053_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x178D7560)
#define CLASS_2_F2D0B295B0A98053__CTOR_OFFSET UNITYSDK_OFFSET(0x178D7550)

inline static constexpr unsigned int Class_2_F2D0B295B0A98053_TypeDefinitionIndex = 53909;

class Class_2_F2D0B295B0A98053 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x48
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_4; // 0x50
	::UnityEngine::GameObject* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
