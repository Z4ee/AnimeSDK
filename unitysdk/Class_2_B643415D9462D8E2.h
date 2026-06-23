#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_B643415D9462D8E2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x15204AD0)
#define CLASS_2_B643415D9462D8E2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15204B60)
#define CLASS_2_B643415D9462D8E2_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x15204920)
#define CLASS_2_B643415D9462D8E2__CTOR_OFFSET UNITYSDK_OFFSET(0x15204B50)

inline static constexpr unsigned int Class_2_B643415D9462D8E2_TypeDefinitionIndex = 79476;

class Class_2_B643415D9462D8E2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B643415D9462D8E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B643415D9462D8E2_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B643415D9462D8E2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B643415D9462D8E2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
