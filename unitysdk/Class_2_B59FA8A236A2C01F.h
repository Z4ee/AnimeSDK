#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFilmGuideItemTagListWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_B59FA8A236A2C01F_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xB191CC0)
#define CLASS_2_B59FA8A236A2C01F_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xB191A90)
#define CLASS_2_B59FA8A236A2C01F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB191D70)
#define CLASS_2_B59FA8A236A2C01F__CTOR_OFFSET UNITYSDK_OFFSET(0xB191D60)

inline static constexpr unsigned int Class_2_B59FA8A236A2C01F_TypeDefinitionIndex = 54865;

class Class_2_B59FA8A236A2C01F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIFilmGuideItemTagListWidgetController*>* Field_2_11; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48
	::UnityEngine::RectTransform* Field_2_6; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B59FA8A236A2C01F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B59FA8A236A2C01F_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B59FA8A236A2C01F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B59FA8A236A2C01F_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
