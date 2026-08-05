#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_78F97BB2BFE48D6C_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0xE52D070)
#define CLASS_2_78F97BB2BFE48D6C_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xE52CE20)
#define CLASS_2_78F97BB2BFE48D6C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE52D190)
#define CLASS_2_78F97BB2BFE48D6C__CTOR_OFFSET UNITYSDK_OFFSET(0xE52D180)

inline static constexpr unsigned int Class_2_78F97BB2BFE48D6C_TypeDefinitionIndex = 79869;

class Class_2_78F97BB2BFE48D6C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_10; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78F97BB2BFE48D6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_78F97BB2BFE48D6C_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_78F97BB2BFE48D6C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78F97BB2BFE48D6C_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
