#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_0C4DABD06F45A7DA_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0xC99D0B0)
#define CLASS_2_0C4DABD06F45A7DA_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xC99D250)
#define CLASS_2_0C4DABD06F45A7DA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xC99D320)
#define CLASS_2_0C4DABD06F45A7DA__CTOR_OFFSET UNITYSDK_OFFSET(0xC99D310)

inline static constexpr unsigned int Class_2_0C4DABD06F45A7DA_TypeDefinitionIndex = 52733;

class Class_2_0C4DABD06F45A7DA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::UnityEngine::UI::Text* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C4DABD06F45A7DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C4DABD06F45A7DA_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C4DABD06F45A7DA_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C4DABD06F45A7DA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
