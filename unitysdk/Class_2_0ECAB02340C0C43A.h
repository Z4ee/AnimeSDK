#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerConfigMono; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0ECAB02340C0C43A_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x10771240)
#define CLASS_2_0ECAB02340C0C43A_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x107713F0)
#define CLASS_2_0ECAB02340C0C43A_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x107714B0)
#define CLASS_2_0ECAB02340C0C43A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10771610)
#define CLASS_2_0ECAB02340C0C43A_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x10771570)
#define CLASS_2_0ECAB02340C0C43A__CTOR_OFFSET UNITYSDK_OFFSET(0x10771560)

inline static constexpr unsigned int Class_2_0ECAB02340C0C43A_TypeDefinitionIndex = 73111;

class Class_2_0ECAB02340C0C43A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::UnityEngine::CanvasGroup* Field_2_0; // 0x38
	::MoleMole::UIQuestionsAnswerConfigMono* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ECAB02340C0C43A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0ECAB02340C0C43A_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_0ECAB02340C0C43A_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_0ECAB02340C0C43A_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ECAB02340C0C43A_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0ECAB02340C0C43A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
