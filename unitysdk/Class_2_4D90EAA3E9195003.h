#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_4D90EAA3E9195003_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x122446C0)
#define CLASS_2_4D90EAA3E9195003_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x12244480)
#define CLASS_2_4D90EAA3E9195003_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x122447B0)
#define CLASS_2_4D90EAA3E9195003__CTOR_OFFSET UNITYSDK_OFFSET(0x122447A0)

inline static constexpr unsigned int Class_2_4D90EAA3E9195003_TypeDefinitionIndex = 49623;

class Class_2_4D90EAA3E9195003 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralIconCardRarityWidgetController*>* Field_2_2; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40
	::UnityEngine::CanvasGroup* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58
	::UnityEngine::GameObject* Field_2_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4D90EAA3E9195003_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
