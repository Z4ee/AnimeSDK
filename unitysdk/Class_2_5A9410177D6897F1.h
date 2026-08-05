#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5A9410177D6897F1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1774A9C0)
#define CLASS_2_5A9410177D6897F1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1774AE50)
#define CLASS_2_5A9410177D6897F1_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1774AC90)
#define CLASS_2_5A9410177D6897F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1774AE40)

inline static constexpr unsigned int Class_2_5A9410177D6897F1_TypeDefinitionIndex = 53920;

class Class_2_5A9410177D6897F1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::UnityEngine::Animation* Field_2_13; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0x40
	::UnityEngine::Animation* Field_2_5; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x60
	::MoleMole::NotificationBadgeEx* Field_2_12; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A9410177D6897F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5A9410177D6897F1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A9410177D6897F1_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5A9410177D6897F1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
