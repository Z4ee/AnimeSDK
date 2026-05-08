#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_24456E84F3C6FD1D_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x1130A900)
#define CLASS_2_24456E84F3C6FD1D_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x1130AB50)
#define CLASS_2_24456E84F3C6FD1D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1130AC90)
#define CLASS_2_24456E84F3C6FD1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1130AC80)

inline static constexpr unsigned int Class_2_24456E84F3C6FD1D_TypeDefinitionIndex = 64409;

class Class_2_24456E84F3C6FD1D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x48
	::MoleMole::NotificationBadgeEx* Field_2_8; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_10; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456E84F3C6FD1D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_24456E84F3C6FD1D_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24456E84F3C6FD1D_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_24456E84F3C6FD1D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
