#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_2_1B99A6173BD7A289_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x12325740)
#define CLASS_2_1B99A6173BD7A289_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x12325960)
#define CLASS_2_1B99A6173BD7A289_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12325AC0)
#define CLASS_2_1B99A6173BD7A289__CTOR_OFFSET UNITYSDK_OFFSET(0x12325AB0)

inline static constexpr unsigned int Class_2_1B99A6173BD7A289_TypeDefinitionIndex = 55834;

class Class_2_1B99A6173BD7A289 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UISlider* Field_2_10; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UISlider* Field_2_6; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
