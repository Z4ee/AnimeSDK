#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_95B29E984A609629_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x14757F30)
#define CLASS_2_95B29E984A609629_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x147580D0)
#define CLASS_2_95B29E984A609629_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x147581A0)
#define CLASS_2_95B29E984A609629__CTOR_OFFSET UNITYSDK_OFFSET(0x14758190)

inline static constexpr unsigned int Class_2_95B29E984A609629_TypeDefinitionIndex = 48013;

class Class_2_95B29E984A609629 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::UnityEngine::UI::Text* Field_2_1; // 0x20
	::UnityEngine::UI::Text* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95B29E984A609629__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_95B29E984A609629_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_95B29E984A609629_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95B29E984A609629_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
