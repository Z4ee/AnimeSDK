#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_026083D0A4F08738;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_B59A5BC3EDB05A2C_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x127C4EA0)
#define CLASS_2_B59A5BC3EDB05A2C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x127C5320)
#define CLASS_2_B59A5BC3EDB05A2C_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x127C51B0)
#define CLASS_2_B59A5BC3EDB05A2C__CTOR_OFFSET UNITYSDK_OFFSET(0x127C5310)

inline static constexpr unsigned int Class_2_B59A5BC3EDB05A2C_TypeDefinitionIndex = 72424;

class Class_2_B59A5BC3EDB05A2C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x40
	::Class_3_026083D0A4F08738<::MoleMole::UIDailyChallengeCardRowWidgetController*>* Field_2_6; // 0x48
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIDoubleTipsInfoWidgetController*>* Field_2_11; // 0x50
	::UnityEngine::Transform* Field_2_2; // 0x58
	::UnityEngine::Transform* Field_2_1; // 0x60
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* Field_2_10; // 0x68
	::MoleMole::NotificationBadge* Field_2_7; // 0x70
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIDoubleTipsInfoWidgetController*>* Field_2_12; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B59A5BC3EDB05A2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B59A5BC3EDB05A2C_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B59A5BC3EDB05A2C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B59A5BC3EDB05A2C_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
