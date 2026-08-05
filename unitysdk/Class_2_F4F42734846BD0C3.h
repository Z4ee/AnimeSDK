#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_F4F42734846BD0C3_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x12B0BAF0)
#define CLASS_2_F4F42734846BD0C3_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12B0BC90)
#define CLASS_2_F4F42734846BD0C3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B0BD60)
#define CLASS_2_F4F42734846BD0C3__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0BD50)

inline static constexpr unsigned int Class_2_F4F42734846BD0C3_TypeDefinitionIndex = 54418;

class Class_2_F4F42734846BD0C3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F42734846BD0C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F4F42734846BD0C3_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F4F42734846BD0C3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4F42734846BD0C3_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
