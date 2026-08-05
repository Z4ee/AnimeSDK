#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C9DDE9730C6BE395_4_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x14E51AB0)
#define CLASS_2_C9DDE9730C6BE395_4_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x14E51C80)
#define CLASS_2_C9DDE9730C6BE395_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14E51D50)
#define CLASS_2_C9DDE9730C6BE395_4__CTOR_OFFSET UNITYSDK_OFFSET(0x14E51D40)

inline static constexpr unsigned int Class_2_C9DDE9730C6BE395_4_TypeDefinitionIndex = 71172;

class Class_2_C9DDE9730C6BE395_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x18
	::UnityEngine::GameObject* Field_2_11; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9DDE9730C6BE395_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C9DDE9730C6BE395_4_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9DDE9730C6BE395_4_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C9DDE9730C6BE395_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
