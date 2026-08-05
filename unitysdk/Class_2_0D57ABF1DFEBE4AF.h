#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace MoleMole { class UIInLevelPauseCinemaSingleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13B4C2D0)
#define CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_38E10FBAAC6F4D3B_OFFSET UNITYSDK_OFFSET(0x13B4C0F0)
#define CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_406753C81EE451FC_OFFSET UNITYSDK_OFFSET(0x13B4BF00)
#define CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B4C360)
#define CLASS_2_0D57ABF1DFEBE4AF__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4C350)

inline static constexpr unsigned int Class_2_0D57ABF1DFEBE4AF_TypeDefinitionIndex = 53662;

class Class_2_0D57ABF1DFEBE4AF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_10; // 0x18
	::MonoUITableScrollV2* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>*>* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40
	::UnityEngine::Transform* Field_2_0; // 0x48
	::Class_3_826A30478DA34A69<::MoleMole::UIInLevelPauseCinemaSingleWidgetController*>* Field_2_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D57ABF1DFEBE4AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_406753C81EE451FC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_406753C81EE451FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>*>* Method_2_38E10FBAAC6F4D3B(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D57ABF1DFEBE4AF_METHOD_2_38E10FBAAC6F4D3B_OFFSET))(this, a1, a2);
	}
};
