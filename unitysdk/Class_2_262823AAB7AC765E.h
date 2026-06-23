#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define CLASS_2_262823AAB7AC765E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x15399680)
#define CLASS_2_262823AAB7AC765E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15399730)
#define CLASS_2_262823AAB7AC765E_METHOD_2_E2771629F876FF04_OFFSET UNITYSDK_OFFSET(0x153994B0)
#define CLASS_2_262823AAB7AC765E__CTOR_OFFSET UNITYSDK_OFFSET(0x15399720)

inline static constexpr unsigned int Class_2_262823AAB7AC765E_TypeDefinitionIndex = 86649;

class Class_2_262823AAB7AC765E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgText* Field_2_2; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38
	::MonoUITableScrollV2* Field_2_5; // 0x40
	::UnityEngine::UI::Text* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E2771629F876FF04(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E_METHOD_2_E2771629F876FF04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_262823AAB7AC765E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
