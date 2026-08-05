#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_78DA3B72B76F4A93_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18BA3A80)
#define CLASS_2_78DA3B72B76F4A93_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x18BA3B60)
#define CLASS_2_78DA3B72B76F4A93_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x18BA3830)
#define CLASS_2_78DA3B72B76F4A93_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18BA3BE0)
#define CLASS_2_78DA3B72B76F4A93_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x18BA3C80)
#define CLASS_2_78DA3B72B76F4A93__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA3BD0)

inline static constexpr unsigned int Class_2_78DA3B72B76F4A93_TypeDefinitionIndex = 49715;

class Class_2_78DA3B72B76F4A93 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::MoleMole::Config::UIAchievementAnimConfig* Field_2_15; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x40
	::UnityEngine::RectTransform* Field_2_11; // 0x48
	::UnityEngine::Animation* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58
	::UnityEngine::GameObject* Field_2_10; // 0x60
	::UnityEngine::RectTransform* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78DA3B72B76F4A93__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_78DA3B72B76F4A93_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_78DA3B72B76F4A93_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_78DA3B72B76F4A93_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78DA3B72B76F4A93_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_78DA3B72B76F4A93_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}
};
