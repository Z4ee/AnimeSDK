#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_AFDB8E3CDAA089B8_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12D8A520)
#define CLASS_2_AFDB8E3CDAA089B8_1_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x12D8A300)
#define CLASS_2_AFDB8E3CDAA089B8_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12D8A5D0)
#define CLASS_2_AFDB8E3CDAA089B8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8A5C0)

inline static constexpr unsigned int Class_2_AFDB8E3CDAA089B8_1_TypeDefinitionIndex = 83156;

class Class_2_AFDB8E3CDAA089B8_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::UnityEngine::GameObject* Field_2_10; // 0x20
	::UnityEngine::GameObject* Field_2_11; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x38
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x40
	::UnityEngine::GameObject* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_4; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_1_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFDB8E3CDAA089B8_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
