#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIButtonPosHandler; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_60638234271CCDB8_141_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x18278590)
#define CLASS_2_60638234271CCDB8_141_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x182786E0)
#define CLASS_2_60638234271CCDB8_141_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x18278230)
#define CLASS_2_60638234271CCDB8_141__CTOR_OFFSET UNITYSDK_OFFSET(0x182786D0)

inline static constexpr unsigned int Class_2_60638234271CCDB8_141_TypeDefinitionIndex = 70918;

class Class_2_60638234271CCDB8_141 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_13; // 0x20
	::UnityEngine::UI::Text* Field_2_6; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30
	::UnityEngine::CanvasGroup* Field_2_10; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_11; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x48
	::UnityEngine::Transform* Field_2_5; // 0x50
	::UnityEngine::GameObject* Field_2_9; // 0x58
	::Class_2_FDFE69FE7B72463B* Field_2_14; // 0x60
	::Class_2_FDFE69FE7B72463B* Field_2_15; // 0x68
	::UnityEngine::RectTransform* Field_2_4; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x80
	::MoleMole::UIButtonSizeHandler* Field_2_19; // 0x88
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x90
	::MoleMole::UIButtonPosHandler* Field_2_12; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_141__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_141_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_141_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_141_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
