#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x125E7BA0)
#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x125E7E20)
#define CLASS_2_2BDD92312A1DB6EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x125E7F60)
#define CLASS_2_2BDD92312A1DB6EF__CTOR_OFFSET UNITYSDK_OFFSET(0x125E7F50)

inline static constexpr unsigned int Class_2_2BDD92312A1DB6EF_TypeDefinitionIndex = 47067;

class Class_2_2BDD92312A1DB6EF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_15; // 0x20
	::MonoUITableScrollV2* Field_2_6; // 0x28
	::UnityEngine::Animation* Field_2_3; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40
	::UnityEngine::Transform* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x58
	::MoleMole::MonoGamepadModule* Field_2_8; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x68
	::UnityEngine::RectTransform* Field_2_5; // 0x70
	::UnityEngine::Transform* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2BDD92312A1DB6EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
