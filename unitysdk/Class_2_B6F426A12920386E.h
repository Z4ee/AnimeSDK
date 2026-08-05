#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B6F426A12920386E_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x178C93E0)
#define CLASS_2_B6F426A12920386E_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x178C9610)
#define CLASS_2_B6F426A12920386E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x178C96E0)
#define CLASS_2_B6F426A12920386E__CTOR_OFFSET UNITYSDK_OFFSET(0x178C96D0)

inline static constexpr unsigned int Class_2_B6F426A12920386E_TypeDefinitionIndex = 55874;

class Class_2_B6F426A12920386E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_0; // 0x18
	::UnityEngine::Animation* Field_2_14; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_9; // 0x30
	::UnityEngine::UI::RawImage* Field_2_5; // 0x38
	::UnityEngine::UI::Text* Field_2_8; // 0x40
	::UnityEngine::UI::Text* Field_2_10; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50
	::UnityEngine::CanvasGroup* Field_2_15; // 0x58
	::UnityEngine::GameObject* Field_2_4; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6F426A12920386E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B6F426A12920386E_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B6F426A12920386E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6F426A12920386E_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
