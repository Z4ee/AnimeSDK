#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_2A4DF4F1DE799EB8_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x151B3670)
#define CLASS_2_2A4DF4F1DE799EB8_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x151B3810)
#define CLASS_2_2A4DF4F1DE799EB8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x151B38E0)
#define CLASS_2_2A4DF4F1DE799EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x151B38D0)

inline static constexpr unsigned int Class_2_2A4DF4F1DE799EB8_TypeDefinitionIndex = 60342;

class Class_2_2A4DF4F1DE799EB8 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::UnityEngine::UI::Text* Field_2_1; // 0x28
	::UnityEngine::UI::Text* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A4DF4F1DE799EB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2A4DF4F1DE799EB8_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A4DF4F1DE799EB8_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2A4DF4F1DE799EB8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
