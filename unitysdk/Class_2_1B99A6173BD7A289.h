#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_2_1B99A6173BD7A289_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x162DEA50)
#define CLASS_2_1B99A6173BD7A289_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x162DEC70)
#define CLASS_2_1B99A6173BD7A289_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x162DEDD0)
#define CLASS_2_1B99A6173BD7A289__CTOR_OFFSET UNITYSDK_OFFSET(0x162DEDC0)

inline static constexpr unsigned int Class_2_1B99A6173BD7A289_TypeDefinitionIndex = 83584;

class Class_2_1B99A6173BD7A289 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UISlider* Field_2_8; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UISlider* Field_2_4; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B99A6173BD7A289_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
