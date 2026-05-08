#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A573A65F0E1E9B93_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x107AC470)
#define CLASS_2_A573A65F0E1E9B93_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x107AC680)
#define CLASS_2_A573A65F0E1E9B93_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x107AC730)
#define CLASS_2_A573A65F0E1E9B93__CTOR_OFFSET UNITYSDK_OFFSET(0x107AC720)

inline static constexpr unsigned int Class_2_A573A65F0E1E9B93_TypeDefinitionIndex = 64514;

class Class_2_A573A65F0E1E9B93 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48
	::UnityEngine::GameObject* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A573A65F0E1E9B93__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A573A65F0E1E9B93_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A573A65F0E1E9B93_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A573A65F0E1E9B93_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
