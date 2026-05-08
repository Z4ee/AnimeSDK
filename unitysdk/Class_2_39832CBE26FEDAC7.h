#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_39832CBE26FEDAC7_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x10377020)
#define CLASS_2_39832CBE26FEDAC7_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x103771C0)
#define CLASS_2_39832CBE26FEDAC7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10377290)
#define CLASS_2_39832CBE26FEDAC7__CTOR_OFFSET UNITYSDK_OFFSET(0x10377280)

inline static constexpr unsigned int Class_2_39832CBE26FEDAC7_TypeDefinitionIndex = 62166;

class Class_2_39832CBE26FEDAC7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39832CBE26FEDAC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_39832CBE26FEDAC7_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_39832CBE26FEDAC7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39832CBE26FEDAC7_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
