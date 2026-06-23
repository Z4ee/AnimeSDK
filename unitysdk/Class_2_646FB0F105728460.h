#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityLambGiftItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_646FB0F105728460_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x12A7AD30)
#define CLASS_2_646FB0F105728460_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A7AE30)
#define CLASS_2_646FB0F105728460_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x12A7AA70)
#define CLASS_2_646FB0F105728460__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7AE20)

inline static constexpr unsigned int Class_2_646FB0F105728460_TypeDefinitionIndex = 87125;

class Class_2_646FB0F105728460 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityLambGiftItemWidgetController*>* Field_2_10; // 0x28
	::UnityEngine::GameObject* Field_2_12; // 0x30
	::UnityEngine::GameObject* Field_2_11; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x40
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityLambGiftItemWidgetController*>* Field_2_9; // 0x48
	::UnityEngine::GameObject* Field_2_2; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x68
	::UnityEngine::GameObject* Field_2_1; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_646FB0F105728460_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
