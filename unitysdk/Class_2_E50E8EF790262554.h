#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace MoleMole { class UIInLevelPauseCinemaSingleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_E50E8EF790262554_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x166A9950)
#define CLASS_2_E50E8EF790262554_METHOD_2_2775D394A0A818E5_OFFSET UNITYSDK_OFFSET(0x166A9770)
#define CLASS_2_E50E8EF790262554_METHOD_2_406753C81EE451FC_OFFSET UNITYSDK_OFFSET(0x166A9580)
#define CLASS_2_E50E8EF790262554_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x166A99E0)
#define CLASS_2_E50E8EF790262554__CTOR_OFFSET UNITYSDK_OFFSET(0x166A99D0)

inline static constexpr unsigned int Class_2_E50E8EF790262554_TypeDefinitionIndex = 68059;

class Class_2_E50E8EF790262554 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_5; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIInLevelPauseCinemaSingleWidgetController*>* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>*>* Field_2_4; // 0x40
	::UnityEngine::Transform* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E50E8EF790262554__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_406753C81EE451FC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E50E8EF790262554_METHOD_2_406753C81EE451FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E50E8EF790262554_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>*>* Method_2_2775D394A0A818E5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E50E8EF790262554_METHOD_2_2775D394A0A818E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E50E8EF790262554_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
