#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivitySeriesRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_9101092B035C838D_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x140BA620)
#define CLASS_2_9101092B035C838D_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x140BA870)
#define CLASS_2_9101092B035C838D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x140BA940)
#define CLASS_2_9101092B035C838D__CTOR_OFFSET UNITYSDK_OFFSET(0x140BA930)

inline static constexpr unsigned int Class_2_9101092B035C838D_TypeDefinitionIndex = 83859;

class Class_2_9101092B035C838D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_10; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x38
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x48
	::UnityEngine::RectTransform* Field_2_11; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesRewardItemWidgetController*>* Field_2_4; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9101092B035C838D_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
