#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_DFBAA7B9A2231B38_1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x17C49FB0)
#define CLASS_2_DFBAA7B9A2231B38_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x17C4A240)
#define CLASS_2_DFBAA7B9A2231B38_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17C4A3A0)
#define CLASS_2_DFBAA7B9A2231B38_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4A390)

inline static constexpr unsigned int Class_2_DFBAA7B9A2231B38_1_TypeDefinitionIndex = 51046;

class Class_2_DFBAA7B9A2231B38_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_9; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_10; // 0x48
	::UnityEngine::Animation* Field_2_4; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x68
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFBAA7B9A2231B38_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFBAA7B9A2231B38_1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFBAA7B9A2231B38_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFBAA7B9A2231B38_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
