#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A8C94EA612F5CBF3_5_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x13A35B20)
#define CLASS_2_A8C94EA612F5CBF3_5_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x13A358D0)
#define CLASS_2_A8C94EA612F5CBF3_5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13A35C40)
#define CLASS_2_A8C94EA612F5CBF3_5__CTOR_OFFSET UNITYSDK_OFFSET(0x13A35C30)

inline static constexpr unsigned int Class_2_A8C94EA612F5CBF3_5_TypeDefinitionIndex = 76419;

class Class_2_A8C94EA612F5CBF3_5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8C94EA612F5CBF3_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8C94EA612F5CBF3_5_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8C94EA612F5CBF3_5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8C94EA612F5CBF3_5_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
