#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_AFDB8E3CDAA089B8_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xF5C7220)
#define CLASS_2_AFDB8E3CDAA089B8_2_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xF5C7000)
#define CLASS_2_AFDB8E3CDAA089B8_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF5C72D0)
#define CLASS_2_AFDB8E3CDAA089B8_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF5C72C0)

inline static constexpr unsigned int Class_2_AFDB8E3CDAA089B8_2_TypeDefinitionIndex = 83309;

class Class_2_AFDB8E3CDAA089B8_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::MoleMole::NotificationBadgeEx* Field_2_8; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_2_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_2_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
