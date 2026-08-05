#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C263A752C471DD3C_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x116B5090)
#define CLASS_2_C263A752C471DD3C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x116B5140)
#define CLASS_2_C263A752C471DD3C_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x116B4E20)
#define CLASS_2_C263A752C471DD3C__CTOR_OFFSET UNITYSDK_OFFSET(0x116B5130)

inline static constexpr unsigned int Class_2_C263A752C471DD3C_TypeDefinitionIndex = 46263;

class Class_2_C263A752C471DD3C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_11; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_10; // 0x28
	::UnityEngine::CanvasGroup* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::UnityEngine::Animator* Field_2_2; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x48
	::UnityEngine::Transform* Field_2_1; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x58
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C263A752C471DD3C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C263A752C471DD3C_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C263A752C471DD3C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C263A752C471DD3C_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
