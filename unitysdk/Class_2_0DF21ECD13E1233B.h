#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_0DF21ECD13E1233B_Class_2_47F94C3827CAB3BB_11;
class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_0DF21ECD13E1233B_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x14E720A0)
#define CLASS_2_0DF21ECD13E1233B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14E72150)
#define CLASS_2_0DF21ECD13E1233B_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x14E71E30)
#define CLASS_2_0DF21ECD13E1233B__CTOR_OFFSET UNITYSDK_OFFSET(0x14E72140)

inline static constexpr unsigned int Class_2_0DF21ECD13E1233B_TypeDefinitionIndex = 77716;

class Class_2_0DF21ECD13E1233B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_10; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_0DF21ECD13E1233B_Class_2_47F94C3827CAB3BB_11*>* Field_2_9; // 0x20
	::UnityEngine::UI::Text* Field_2_11; // 0x28
	::UnityEngine::RectTransform* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_4; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x48
	::UnityEngine::RectTransform* Field_2_5; // 0x50
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DF21ECD13E1233B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0DF21ECD13E1233B_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0DF21ECD13E1233B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DF21ECD13E1233B_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
