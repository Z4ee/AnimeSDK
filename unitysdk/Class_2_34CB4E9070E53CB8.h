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

#define CLASS_2_34CB4E9070E53CB8_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x13B21260)
#define CLASS_2_34CB4E9070E53CB8_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x13B214A0)
#define CLASS_2_34CB4E9070E53CB8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B21550)
#define CLASS_2_34CB4E9070E53CB8__CTOR_OFFSET UNITYSDK_OFFSET(0x13B21540)

inline static constexpr unsigned int Class_2_34CB4E9070E53CB8_TypeDefinitionIndex = 73571;

class Class_2_34CB4E9070E53CB8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_8; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_9; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_0; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x40
	::UnityEngine::GameObject* Field_2_10; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x50
	::UnityEngine::GameObject* Field_2_11; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34CB4E9070E53CB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_34CB4E9070E53CB8_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_34CB4E9070E53CB8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34CB4E9070E53CB8_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
