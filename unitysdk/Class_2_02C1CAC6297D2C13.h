#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_02C1CAC6297D2C13_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x15765F10)
#define CLASS_2_02C1CAC6297D2C13_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x15766170)
#define CLASS_2_02C1CAC6297D2C13_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x157662B0)
#define CLASS_2_02C1CAC6297D2C13__CTOR_OFFSET UNITYSDK_OFFSET(0x157662A0)

inline static constexpr unsigned int Class_2_02C1CAC6297D2C13_TypeDefinitionIndex = 72543;

class Class_2_02C1CAC6297D2C13 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_13; // 0x18
	::UnityEngine::GameObject* Field_2_9; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x30
	::UnityEngine::Transform* Field_2_0; // 0x38
	::UnityEngine::UI::Text* Field_2_5; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x48
	::UnityEngine::Transform* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x58
	::UnityEngine::Transform* Field_2_8; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02C1CAC6297D2C13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_02C1CAC6297D2C13_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_02C1CAC6297D2C13_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02C1CAC6297D2C13_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
