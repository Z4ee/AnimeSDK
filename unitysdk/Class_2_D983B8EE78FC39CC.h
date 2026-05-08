#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_D983B8EE78FC39CC_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x1AE405D0)
#define CLASS_2_D983B8EE78FC39CC_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1AE407E0)
#define CLASS_2_D983B8EE78FC39CC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1AE40890)
#define CLASS_2_D983B8EE78FC39CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE40880)

inline static constexpr unsigned int Class_2_D983B8EE78FC39CC_TypeDefinitionIndex = 44666;

class Class_2_D983B8EE78FC39CC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::MoleMole::MonoGamepadRegion* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x30
	::MonoUITableScrollV2* Field_2_4; // 0x38
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D983B8EE78FC39CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D983B8EE78FC39CC_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D983B8EE78FC39CC_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D983B8EE78FC39CC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
