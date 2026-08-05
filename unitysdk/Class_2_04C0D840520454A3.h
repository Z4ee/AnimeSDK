#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_04C0D840520454A3_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x176A5030)
#define CLASS_2_04C0D840520454A3_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x176A52E0)
#define CLASS_2_04C0D840520454A3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x176A5440)
#define CLASS_2_04C0D840520454A3__CTOR_OFFSET UNITYSDK_OFFSET(0x176A5430)

inline static constexpr unsigned int Class_2_04C0D840520454A3_TypeDefinitionIndex = 41342;

class Class_2_04C0D840520454A3 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_15; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_9; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::UnityEngine::GameObject* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x50
	::UnityEngine::CanvasGroup* Field_2_13; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x60
	::UnityEngine::GameObject* Field_2_14; // 0x68
	::UnityEngine::GameObject* Field_2_7; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04C0D840520454A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04C0D840520454A3_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04C0D840520454A3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04C0D840520454A3_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
