#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4ADB5C7E2C0580A8_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x142005D0)
#define CLASS_2_4ADB5C7E2C0580A8_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x142003B0)
#define CLASS_2_4ADB5C7E2C0580A8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x142006C0)
#define CLASS_2_4ADB5C7E2C0580A8__CTOR_OFFSET UNITYSDK_OFFSET(0x142006B0)

inline static constexpr unsigned int Class_2_4ADB5C7E2C0580A8_TypeDefinitionIndex = 80954;

class Class_2_4ADB5C7E2C0580A8 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_11; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58
	::UnityEngine::GameObject* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADB5C7E2C0580A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4ADB5C7E2C0580A8_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADB5C7E2C0580A8_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4ADB5C7E2C0580A8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
