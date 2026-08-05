#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_3_00C36FF043F803C0;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivitySkyRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_4ABAF46D011D7612_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x148029F0)
#define CLASS_2_4ABAF46D011D7612_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x14802720)
#define CLASS_2_4ABAF46D011D7612_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14802B30)
#define CLASS_2_4ABAF46D011D7612__CTOR_OFFSET UNITYSDK_OFFSET(0x14802B20)

inline static constexpr unsigned int Class_2_4ABAF46D011D7612_TypeDefinitionIndex = 83677;

class Class_2_4ABAF46D011D7612 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x18
	::UnityEngine::RectTransform* Field_2_11; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_9; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x30
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x40
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIActivitySkyRewardItemWidgetController*>* Field_2_15; // 0x48
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIActivitySkyRewardItemWidgetController*>* Field_2_8; // 0x50
	::UnityEngine::RectTransform* Field_2_6; // 0x58
	::UnityEngine::RectTransform* Field_2_4; // 0x60
	::UnityEngine::RectTransform* Field_2_10; // 0x68
	::Class_3_00C36FF043F803C0* Field_2_14; // 0x70
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABAF46D011D7612__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4ABAF46D011D7612_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABAF46D011D7612_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4ABAF46D011D7612_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
