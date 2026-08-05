#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_41CDC172C1316667_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xECD3C50)
#define CLASS_2_41CDC172C1316667_METHOD_2_26C18447D3F62FED_OFFSET UNITYSDK_OFFSET(0xECD3B00)
#define CLASS_2_41CDC172C1316667_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xECD3CE0)
#define CLASS_2_41CDC172C1316667_METHOD_2_D25F539834051480_OFFSET UNITYSDK_OFFSET(0xECD3920)
#define CLASS_2_41CDC172C1316667__CTOR_OFFSET UNITYSDK_OFFSET(0xECD3CD0)

inline static constexpr unsigned int Class_2_41CDC172C1316667_TypeDefinitionIndex = 71635;

class Class_2_41CDC172C1316667 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41CDC172C1316667__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D25F539834051480(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_41CDC172C1316667_METHOD_2_D25F539834051480_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_26C18447D3F62FED(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_41CDC172C1316667_METHOD_2_26C18447D3F62FED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_41CDC172C1316667_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41CDC172C1316667_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
