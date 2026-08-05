#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_3A1EFEB22DB75051_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x141912A0)
#define CLASS_2_3A1EFEB22DB75051_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x14191480)
#define CLASS_2_3A1EFEB22DB75051_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14191550)
#define CLASS_2_3A1EFEB22DB75051__CTOR_OFFSET UNITYSDK_OFFSET(0x14191540)

inline static constexpr unsigned int Class_2_3A1EFEB22DB75051_TypeDefinitionIndex = 91260;

class Class_2_3A1EFEB22DB75051 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::MonoUITableScrollV2* Field_2_4; // 0x28
	::UnityEngine::UI::Text* Field_2_6; // 0x30
	::UnityEngine::UI::Text* Field_2_0; // 0x38
	::UnityEngine::GameObject* Field_2_7; // 0x40
	::UnityEngine::GameObject* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A1EFEB22DB75051__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3A1EFEB22DB75051_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A1EFEB22DB75051_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3A1EFEB22DB75051_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
