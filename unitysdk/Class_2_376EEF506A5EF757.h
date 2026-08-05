#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralPhaseProgressWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_376EEF506A5EF757_METHOD_2_26C18447D3F62FED_OFFSET UNITYSDK_OFFSET(0x12B6EE50)
#define CLASS_2_376EEF506A5EF757_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12B6EFA0)
#define CLASS_2_376EEF506A5EF757_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x12B6EC40)
#define CLASS_2_376EEF506A5EF757_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B6F050)
#define CLASS_2_376EEF506A5EF757__CTOR_OFFSET UNITYSDK_OFFSET(0x12B6F040)

inline static constexpr unsigned int Class_2_376EEF506A5EF757_TypeDefinitionIndex = 67686;

class Class_2_376EEF506A5EF757 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_4; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralPhaseProgressWidgetController*>* Field_2_9; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376EEF506A5EF757__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_376EEF506A5EF757_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376EEF506A5EF757_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_26C18447D3F62FED(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_376EEF506A5EF757_METHOD_2_26C18447D3F62FED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_376EEF506A5EF757_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
