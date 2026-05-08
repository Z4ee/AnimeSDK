#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_862C5F667CFA54EB_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12D93A60)
#define CLASS_2_862C5F667CFA54EB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12D93B30)
#define CLASS_2_862C5F667CFA54EB_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x12D93790)
#define CLASS_2_862C5F667CFA54EB__CTOR_OFFSET UNITYSDK_OFFSET(0x12D93B20)

inline static constexpr unsigned int Class_2_862C5F667CFA54EB_TypeDefinitionIndex = 72992;

class Class_2_862C5F667CFA54EB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_12; // 0x18
	::UnityEngine::Transform* Field_2_9; // 0x20
	::UnityEngine::Transform* Field_2_8; // 0x28
	::UnityEngine::Transform* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x38
	::UnityEngine::Transform* Field_2_7; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_3; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50
	::UnityEngine::Transform* Field_2_5; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x68
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralIconCardRarityWidgetController*>* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_13; // 0x78
	::UnityEngine::Transform* Field_2_11; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_862C5F667CFA54EB_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
